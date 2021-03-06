// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_openfl__internal_formats_agal_AGALConverter
#include <openfl/_internal/formats/agal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_ProgramType
#include <openfl/_internal/formats/agal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_SamplerRegister
#include <openfl/_internal/formats/agal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#include <openfl/_internal/renderer/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f667a7c675195ce_857_new,"openfl._internal.formats.agal._AGALConverter.SamplerRegister","new",0xe06db1fa,"openfl._internal.formats.agal._AGALConverter.SamplerRegister.new","openfl/_internal/formats/agal/AGALConverter.hx",857,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_0f667a7c675195ce_876_toGLSL,"openfl._internal.formats.agal._AGALConverter.SamplerRegister","toGLSL",0x0e5bf39f,"openfl._internal.formats.agal._AGALConverter.SamplerRegister.toGLSL","openfl/_internal/formats/agal/AGALConverter.hx",876,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_0f667a7c675195ce_882_toSamplerState,"openfl._internal.formats.agal._AGALConverter.SamplerRegister","toSamplerState",0x99da12aa,"openfl._internal.formats.agal._AGALConverter.SamplerRegister.toSamplerState","openfl/_internal/formats/agal/AGALConverter.hx",882,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_0f667a7c675195ce_860_parse,"openfl._internal.formats.agal._AGALConverter.SamplerRegister","parse",0x40de8c4d,"openfl._internal.formats.agal._AGALConverter.SamplerRegister.parse","openfl/_internal/formats/agal/AGALConverter.hx",860,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_0f667a7c675195ce_844_boot,"openfl._internal.formats.agal._AGALConverter.SamplerRegister","boot",0x77a70958,"openfl._internal.formats.agal._AGALConverter.SamplerRegister.boot","openfl/_internal/formats/agal/AGALConverter.hx",844,0x323dd368)
namespace openfl{
namespace _internal{
namespace formats{
namespace agal{
namespace _AGALConverter{

void SamplerRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0f667a7c675195ce_857_new)
            	}

Dynamic SamplerRegister_obj::__CreateEmpty() { return new SamplerRegister_obj; }

void *SamplerRegister_obj::_hx_vtable = 0;

Dynamic SamplerRegister_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SamplerRegister_obj > _hx_result = new SamplerRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SamplerRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5d605d6e;
}

::String SamplerRegister_obj::toGLSL(){
            	HX_STACKFRAME(&_hx_pos_0f667a7c675195ce_876_toGLSL)
HXLINE( 877)		::String str = ::openfl::_internal::formats::agal::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXDLIN( 877)		::String str1 = (str + this->n);
HXLINE( 878)		return str1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toGLSL,return )

 ::openfl::_internal::renderer::SamplerState SamplerRegister_obj::toSamplerState(){
            	HX_GC_STACKFRAME(&_hx_pos_0f667a7c675195ce_882_toSamplerState)
HXLINE( 883)		 ::Dynamic wrap;
HXLINE( 884)		 ::Dynamic filter;
HXLINE( 885)		 ::Dynamic mipfilter;
HXLINE( 890)		switch((int)(this->f)){
            			case (int)0: {
HXLINE( 893)				filter = 5;
            			}
            			break;
            			case (int)1: {
HXLINE( 895)				filter = 4;
            			}
            			break;
            			default:{
HXLINE( 897)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 901)		switch((int)(this->m)){
            			case (int)0: {
HXLINE( 905)				mipfilter = 2;
            			}
            			break;
            			case (int)1: {
HXLINE( 908)				mipfilter = 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 911)				mipfilter = 0;
            			}
            			break;
            			default:{
HXLINE( 913)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 919)		switch((int)(this->w)){
            			case (int)0: {
HXLINE( 922)				wrap = 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 924)				wrap = 2;
            			}
            			break;
            			default:{
HXLINE( 926)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 929)		bool ignoreSampler = ((this->s & 4) == 4);
HXLINE( 930)		bool centroid = ((this->s & 1) == 1);
HXLINE( 931)		bool textureAlpha = (this->t == 2);
HXLINE( 934)		Float lodBias = (( (Float)(((this->b << 24) >> 24)) ) / ((Float)8.0));
HXLINE( 936)		return  ::openfl::_internal::renderer::SamplerState_obj::__alloc( HX_CTX ,wrap,filter,mipfilter,lodBias,ignoreSampler,centroid,textureAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toSamplerState,return )

 ::openfl::_internal::formats::agal::_AGALConverter::SamplerRegister SamplerRegister_obj::parse( cpp::Int64Struct v, ::openfl::_internal::formats::agal::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_0f667a7c675195ce_860_parse)
HXLINE( 861)		 ::openfl::_internal::formats::agal::_AGALConverter::SamplerRegister sr =  ::openfl::_internal::formats::agal::_AGALConverter::SamplerRegister_obj::__alloc( HX_CTX );
HXLINE( 862)		sr->programType = programType;
HXLINE( 863)		 cpp::Int64Struct a = _hx_int64_shr(v,60);
HXDLIN( 863)		sr->f = _hx_int64_low(_hx_int64_and(a,( ::cpp::Int64Struct(15))));
HXLINE( 864)		 cpp::Int64Struct a1 = _hx_int64_shr(v,56);
HXDLIN( 864)		sr->m = _hx_int64_low(_hx_int64_and(a1,( ::cpp::Int64Struct(15))));
HXLINE( 865)		 cpp::Int64Struct a2 = _hx_int64_shr(v,52);
HXDLIN( 865)		sr->w = _hx_int64_low(_hx_int64_and(a2,( ::cpp::Int64Struct(15))));
HXLINE( 866)		 cpp::Int64Struct a3 = _hx_int64_shr(v,48);
HXDLIN( 866)		sr->s = _hx_int64_low(_hx_int64_and(a3,( ::cpp::Int64Struct(15))));
HXLINE( 867)		 cpp::Int64Struct a4 = _hx_int64_shr(v,44);
HXDLIN( 867)		sr->d = _hx_int64_low(_hx_int64_and(a4,( ::cpp::Int64Struct(15))));
HXLINE( 868)		 cpp::Int64Struct a5 = _hx_int64_shr(v,40);
HXDLIN( 868)		sr->t = _hx_int64_low(_hx_int64_and(a5,( ::cpp::Int64Struct(15))));
HXLINE( 869)		 cpp::Int64Struct a6 = _hx_int64_shr(v,32);
HXDLIN( 869)		sr->type = _hx_int64_low(_hx_int64_and(a6,( ::cpp::Int64Struct(15))));
HXLINE( 870)		 cpp::Int64Struct a7 = _hx_int64_shr(v,16);
HXDLIN( 870)		sr->b = _hx_int64_low(_hx_int64_and(a7,( ::cpp::Int64Struct(255))));
HXLINE( 871)		sr->n = _hx_int64_low(_hx_int64_and(v,( ::cpp::Int64Struct(65535))));
HXLINE( 872)		return sr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SamplerRegister_obj,parse,return )


hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__new() {
	hx::ObjectPtr< SamplerRegister_obj > __this = new SamplerRegister_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__alloc(hx::Ctx *_hx_ctx) {
	SamplerRegister_obj *__this = (SamplerRegister_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SamplerRegister_obj), true, "openfl._internal.formats.agal._AGALConverter.SamplerRegister"));
	*(void **)__this = SamplerRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SamplerRegister_obj::SamplerRegister_obj()
{
}

void SamplerRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerRegister);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void SamplerRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(w,"w");
}

hx::Val SamplerRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d ); }
		if (HX_FIELD_EQ(inName,"f") ) { return hx::Val( f ); }
		if (HX_FIELD_EQ(inName,"m") ) { return hx::Val( m ); }
		if (HX_FIELD_EQ(inName,"n") ) { return hx::Val( n ); }
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"t") ) { return hx::Val( t ); }
		if (HX_FIELD_EQ(inName,"w") ) { return hx::Val( w ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return hx::Val( toGLSL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return hx::Val( programType ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toSamplerState") ) { return hx::Val( toSamplerState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SamplerRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

hx::Val SamplerRegister_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast<  ::openfl::_internal::formats::agal::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("f",66,00,00,00));
	outFields->push(HX_("m",6d,00,00,00));
	outFields->push(HX_("n",6e,00,00,00));
	outFields->push(HX_("programType",5e,fb,2c,c4));
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo SamplerRegister_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,b),HX_("b",62,00,00,00)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,d),HX_("d",64,00,00,00)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,f),HX_("f",66,00,00,00)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,m),HX_("m",6d,00,00,00)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,n),HX_("n",6e,00,00,00)},
	{hx::fsObject /*  ::openfl::_internal::formats::agal::_AGALConverter::ProgramType */ ,(int)offsetof(SamplerRegister_obj,programType),HX_("programType",5e,fb,2c,c4)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,s),HX_("s",73,00,00,00)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,t),HX_("t",74,00,00,00)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,type),HX_("type",ba,f2,08,4d)},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,w),HX_("w",77,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SamplerRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerRegister_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("d",64,00,00,00),
	HX_("f",66,00,00,00),
	HX_("m",6d,00,00,00),
	HX_("n",6e,00,00,00),
	HX_("programType",5e,fb,2c,c4),
	HX_("s",73,00,00,00),
	HX_("t",74,00,00,00),
	HX_("type",ba,f2,08,4d),
	HX_("w",77,00,00,00),
	HX_("toGLSL",f9,58,08,7a),
	HX_("toSamplerState",04,62,d2,f8),
	::String(null()) };

hx::Class SamplerRegister_obj::__mClass;

static ::String SamplerRegister_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void SamplerRegister_obj::__register()
{
	SamplerRegister_obj _hx_dummy;
	SamplerRegister_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.formats.agal._AGALConverter.SamplerRegister",08,ed,02,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SamplerRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SamplerRegister_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SamplerRegister_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerRegister_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerRegister_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SamplerRegister_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f667a7c675195ce_844_boot)
HXDLIN( 844)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace agal
} // end namespace _AGALConverter
