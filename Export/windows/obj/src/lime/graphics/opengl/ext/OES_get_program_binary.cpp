// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary
#include <lime/graphics/opengl/ext/OES_get_program_binary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_497b3991c268df4c_4_new,"lime.graphics.opengl.ext.OES_get_program_binary","new",0x4a588dbb,"lime.graphics.opengl.ext.OES_get_program_binary.new","lime/graphics/opengl/ext/OES_get_program_binary.hx",4,0x4d7fd133)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_get_program_binary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_497b3991c268df4c_4_new)
HXLINE(   8)		this->PROGRAM_BINARY_FORMATS_OES = 34815;
HXLINE(   7)		this->NUM_PROGRAM_BINARY_FORMATS_OES = 34814;
HXLINE(   6)		this->PROGRAM_BINARY_LENGTH_OES = 34625;
            	}

Dynamic OES_get_program_binary_obj::__CreateEmpty() { return new OES_get_program_binary_obj; }

void *OES_get_program_binary_obj::_hx_vtable = 0;

Dynamic OES_get_program_binary_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_get_program_binary_obj > _hx_result = new OES_get_program_binary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_get_program_binary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f1ba259;
}


OES_get_program_binary_obj::OES_get_program_binary_obj()
{
}

hx::Val OES_get_program_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_LENGTH_OES") ) { return hx::Val( PROGRAM_BINARY_LENGTH_OES ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_FORMATS_OES") ) { return hx::Val( PROGRAM_BINARY_FORMATS_OES ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_PROGRAM_BINARY_FORMATS_OES") ) { return hx::Val( NUM_PROGRAM_BINARY_FORMATS_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_get_program_binary_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_LENGTH_OES") ) { PROGRAM_BINARY_LENGTH_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"PROGRAM_BINARY_FORMATS_OES") ) { PROGRAM_BINARY_FORMATS_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"NUM_PROGRAM_BINARY_FORMATS_OES") ) { NUM_PROGRAM_BINARY_FORMATS_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_get_program_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PROGRAM_BINARY_LENGTH_OES",47,1e,7d,58));
	outFields->push(HX_("NUM_PROGRAM_BINARY_FORMATS_OES",30,f9,d9,07));
	outFields->push(HX_("PROGRAM_BINARY_FORMATS_OES",77,5e,a0,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo OES_get_program_binary_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_get_program_binary_obj,PROGRAM_BINARY_LENGTH_OES),HX_("PROGRAM_BINARY_LENGTH_OES",47,1e,7d,58)},
	{hx::fsInt,(int)offsetof(OES_get_program_binary_obj,NUM_PROGRAM_BINARY_FORMATS_OES),HX_("NUM_PROGRAM_BINARY_FORMATS_OES",30,f9,d9,07)},
	{hx::fsInt,(int)offsetof(OES_get_program_binary_obj,PROGRAM_BINARY_FORMATS_OES),HX_("PROGRAM_BINARY_FORMATS_OES",77,5e,a0,0d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_get_program_binary_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_get_program_binary_obj_sMemberFields[] = {
	HX_("PROGRAM_BINARY_LENGTH_OES",47,1e,7d,58),
	HX_("NUM_PROGRAM_BINARY_FORMATS_OES",30,f9,d9,07),
	HX_("PROGRAM_BINARY_FORMATS_OES",77,5e,a0,0d),
	::String(null()) };

hx::Class OES_get_program_binary_obj::__mClass;

void OES_get_program_binary_obj::__register()
{
	OES_get_program_binary_obj _hx_dummy;
	OES_get_program_binary_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_get_program_binary",49,94,82,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_get_program_binary_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_get_program_binary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_get_program_binary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_get_program_binary_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
