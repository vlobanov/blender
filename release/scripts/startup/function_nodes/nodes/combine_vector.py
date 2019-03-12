import bpy
from .. base import FunctionNode
from .. socket_decl import FixedSocketDecl

class CombineVectorNode(bpy.types.Node, FunctionNode):
    bl_idname = "fn_CombineVectorNode"
    bl_label = "Combine Vector"

    def get_sockets(self):
        return [
            FixedSocketDecl("X", "Float"),
            FixedSocketDecl("Y", "Float"),
            FixedSocketDecl("Z", "Float"),
        ], [
            FixedSocketDecl("Result", "Vector"),
        ]