#include "numeric.hpp"

namespace FN::Types {

	SharedType float_type = SharedType::New("Float");
	SharedType int32_type = SharedType::New("Int32");
	SharedType fvec3_type = SharedType::New("FloatVector3D");

	struct Vector {
		float x, y, z;
	};

	void init_numeric_types()
	{
		float_type->extend(new CPPTypeInfoForType<float>());
		int32_type->extend(new CPPTypeInfoForType<int32_t>());
		fvec3_type->extend(new CPPTypeInfoForType<Vector>());
	}

	SharedType &get_float_type()
	{
		return float_type;
	}

	SharedType &get_int32_type()
	{
		return int32_type;
	}

	SharedType &get_fvec3_type()
	{
		return fvec3_type;
	}

} /* namespace FN::Types */