#include "data_flow_graph_builder.hpp"

namespace FN {

SharedType &DFGB_Socket::type() const
{
  if (m_is_output) {
    return this->node()->function()->output_type(m_index);
  }
  else {
    return this->node()->function()->input_type(m_index);
  }
}

std::string DFGB_Socket::name() const
{
  if (m_is_output) {
    return this->node()->signature().outputs()[m_index].name();
  }
  else {
    return this->node()->signature().inputs()[m_index].name();
  }
}

DataFlowGraphBuilder::DataFlowGraphBuilder() : m_node_pool(sizeof(DFGB_Node))
{
  m_source_info_pool = std::unique_ptr<MemMultiPool>(new MemMultiPool());
}

DataFlowGraphBuilder::~DataFlowGraphBuilder()
{
  /* Destruct source info if it is still owned. */
  if (m_source_info_pool.get()) {
    for (DFGB_Node *node : m_nodes) {
      if (node->source()) {
        node->source()->~SourceInfo();
      }
    }
  }
  for (DFGB_Node *node : m_nodes) {
    node->~DFGB_Node();
  }
}

DFGB_Node *DataFlowGraphBuilder::insert_function(SharedFunction &fn, SourceInfo *source)
{
  BLI_assert(this->is_mutable());
  void *ptr = m_node_pool.allocate();
  DFGB_Node *node = new (ptr) DFGB_Node(*this, fn, source);
  m_nodes.add_new(node);
  return node;
}

void DataFlowGraphBuilder::insert_link(DFGB_Socket a, DFGB_Socket b)
{
  BLI_assert(this->is_mutable());
  BLI_assert(a.node() != b.node());
  BLI_assert(a.type() == b.type());
  BLI_assert(a.is_input() != b.is_input());
  BLI_assert(&a.builder() == this && &b.builder() == this);

  if (a.is_input()) {
    BLI_assert(!m_input_origins.contains(a));
    m_input_origins.add_new(a, b);
    m_output_targets.add(b, a);
  }
  else {
    BLI_assert(!m_input_origins.contains(b));
    m_input_origins.add_new(b, a);
    m_output_targets.add(a, b);
  }
}

SmallVector<DFGB_Node *> DataFlowGraphBuilder::nodes()
{
  SmallVector<DFGB_Node *> nodes;
  for (DFGB_Node *node : m_nodes) {
    nodes.append(node);
  }
  return nodes;
}

SmallVector<DFGB_Link> DataFlowGraphBuilder::links()
{
  SmallVector<DFGB_Link> links;
  for (auto item : m_input_origins.items()) {
    links.append(DFGB_Link(item.value, item.key));
  }
  return links;
}

}  // namespace FN