// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HB
#include <lime/text/harfbuzz/HB.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBFeature
#include <lime/text/harfbuzz/HBFeature.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5f5d269148cb5824_12_shape,"lime.text.harfbuzz.HB","shape",0x0dca5a53,"lime.text.harfbuzz.HB.shape","lime/text/harfbuzz/HB.hx",12,0xea51f15d)
namespace lime{
namespace text{
namespace harfbuzz{

void HB_obj::__construct() { }

Dynamic HB_obj::__CreateEmpty() { return new HB_obj; }

void *HB_obj::_hx_vtable = 0;

Dynamic HB_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HB_obj > _hx_result = new HB_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HB_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5821bcfc;
}

void HB_obj::shape( ::Dynamic font, ::Dynamic buffer,::Array< ::Dynamic> features){
            	HX_STACKFRAME(&_hx_pos_5f5d269148cb5824_12_shape)
HXDLIN(  12)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_shape(hx::DynamicPtr(font),hx::DynamicPtr(buffer),hx::DynamicPtr(features));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HB_obj,shape,(void))


HB_obj::HB_obj()
{
}

bool HB_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { outValue = shape_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *HB_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HB_obj_sStaticStorageInfo = 0;
#endif

hx::Class HB_obj::__mClass;

static ::String HB_obj_sStaticFields[] = {
	HX_("shape",21,e3,1c,7c),
	::String(null())
};

void HB_obj::__register()
{
	HB_obj _hx_dummy;
	HB_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz.HB",20,86,2b,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HB_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HB_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HB_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HB_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HB_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
