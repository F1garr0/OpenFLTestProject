// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_
#include <openfl/display/_StageDisplayState/StageDisplayState_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c56d6b3d9ce820b8_29_fromString,"openfl.display._StageDisplayState.StageDisplayState_Impl_","fromString",0xa44db312,"openfl.display._StageDisplayState.StageDisplayState_Impl_.fromString","openfl/display/StageDisplayState.hx",29,0x75a7a3fd)
HX_LOCAL_STACK_FRAME(_hx_pos_c56d6b3d9ce820b8_40_toString,"openfl.display._StageDisplayState.StageDisplayState_Impl_","toString",0x6b7dca23,"openfl.display._StageDisplayState.StageDisplayState_Impl_.toString","openfl/display/StageDisplayState.hx",40,0x75a7a3fd)
HX_LOCAL_STACK_FRAME(_hx_pos_c56d6b3d9ce820b8_15_boot,"openfl.display._StageDisplayState.StageDisplayState_Impl_","boot",0xd144b629,"openfl.display._StageDisplayState.StageDisplayState_Impl_.boot","openfl/display/StageDisplayState.hx",15,0x75a7a3fd)
HX_LOCAL_STACK_FRAME(_hx_pos_c56d6b3d9ce820b8_20_boot,"openfl.display._StageDisplayState.StageDisplayState_Impl_","boot",0xd144b629,"openfl.display._StageDisplayState.StageDisplayState_Impl_.boot","openfl/display/StageDisplayState.hx",20,0x75a7a3fd)
HX_LOCAL_STACK_FRAME(_hx_pos_c56d6b3d9ce820b8_25_boot,"openfl.display._StageDisplayState.StageDisplayState_Impl_","boot",0xd144b629,"openfl.display._StageDisplayState.StageDisplayState_Impl_.boot","openfl/display/StageDisplayState.hx",25,0x75a7a3fd)
namespace openfl{
namespace display{
namespace _StageDisplayState{

void StageDisplayState_Impl__obj::__construct() { }

Dynamic StageDisplayState_Impl__obj::__CreateEmpty() { return new StageDisplayState_Impl__obj; }

void *StageDisplayState_Impl__obj::_hx_vtable = 0;

Dynamic StageDisplayState_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StageDisplayState_Impl__obj > _hx_result = new StageDisplayState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageDisplayState_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x645c03f5;
}

 ::Dynamic StageDisplayState_Impl__obj::FULL_SCREEN;

 ::Dynamic StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE;

 ::Dynamic StageDisplayState_Impl__obj::NORMAL;

 ::Dynamic StageDisplayState_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_c56d6b3d9ce820b8_29_fromString)
HXDLIN(  29)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("fullScreen",5b,ae,48,2e)) ){
HXLINE(  31)			return 0;
HXDLIN(  31)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("fullScreenInteractive",47,df,d1,02)) ){
HXLINE(  32)			return 1;
HXDLIN(  32)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  33)			return 2;
HXDLIN(  33)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  34)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  29)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageDisplayState_Impl__obj,fromString,return )

::String StageDisplayState_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c56d6b3d9ce820b8_40_toString)
HXDLIN(  40)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  42)			return HX_("fullScreen",5b,ae,48,2e);
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  43)			return HX_("fullScreenInteractive",47,df,d1,02);
HXDLIN(  43)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  44)			return HX_("normal",27,72,69,30);
HXDLIN(  44)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  45)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageDisplayState_Impl__obj,toString,return )


StageDisplayState_Impl__obj::StageDisplayState_Impl__obj()
{
}

bool StageDisplayState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StageDisplayState_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo StageDisplayState_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(void *) &StageDisplayState_Impl__obj::FULL_SCREEN,HX_("FULL_SCREEN",5c,27,87,18)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,HX_("FULL_SCREEN_INTERACTIVE",1f,b9,f1,23)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &StageDisplayState_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StageDisplayState_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN,"FULL_SCREEN");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageDisplayState_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN,"FULL_SCREEN");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::NORMAL,"NORMAL");
};

#endif

hx::Class StageDisplayState_Impl__obj::__mClass;

static ::String StageDisplayState_Impl__obj_sStaticFields[] = {
	HX_("FULL_SCREEN",5c,27,87,18),
	HX_("FULL_SCREEN_INTERACTIVE",1f,b9,f1,23),
	HX_("NORMAL",27,1e,ec,e2),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void StageDisplayState_Impl__obj::__register()
{
	StageDisplayState_Impl__obj _hx_dummy;
	StageDisplayState_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display._StageDisplayState.StageDisplayState_Impl_",d7,71,06,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageDisplayState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageDisplayState_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StageDisplayState_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageDisplayState_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageDisplayState_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageDisplayState_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageDisplayState_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageDisplayState_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c56d6b3d9ce820b8_15_boot)
HXDLIN(  15)		FULL_SCREEN = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c56d6b3d9ce820b8_20_boot)
HXDLIN(  20)		FULL_SCREEN_INTERACTIVE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c56d6b3d9ce820b8_25_boot)
HXDLIN(  25)		NORMAL = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageDisplayState