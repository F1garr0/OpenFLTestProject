// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawEllipseView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawEllipseView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_781ff9dda627132a_586__new,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_","_new",0xc710ba18,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",586,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_781ff9dda627132a_595_get_x,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_","get_x",0xfcdf20b8,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",595,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_781ff9dda627132a_602_get_y,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_","get_y",0xfcdf20b9,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",602,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_781ff9dda627132a_609_get_width,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_","get_width",0xcef6f646,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_.get_width","openfl/_internal/renderer/DrawCommandReader.hx",609,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_781ff9dda627132a_616_get_height,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_","get_height",0xff6fffa7,"openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_.get_height","openfl/_internal/renderer/DrawCommandReader.hx",616,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void DrawEllipseView_Impl__obj::__construct() { }

Dynamic DrawEllipseView_Impl__obj::__CreateEmpty() { return new DrawEllipseView_Impl__obj; }

void *DrawEllipseView_Impl__obj::_hx_vtable = 0;

Dynamic DrawEllipseView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawEllipseView_Impl__obj > _hx_result = new DrawEllipseView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawEllipseView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49f1ba85;
}

 ::openfl::_internal::renderer::DrawCommandReader DrawEllipseView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_781ff9dda627132a_586__new)
HXDLIN( 586)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 586)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawEllipseView_Impl__obj,_new,return )

Float DrawEllipseView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_781ff9dda627132a_595_get_x)
HXDLIN( 595)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawEllipseView_Impl__obj,get_x,return )

Float DrawEllipseView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_781ff9dda627132a_602_get_y)
HXDLIN( 602)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawEllipseView_Impl__obj,get_y,return )

Float DrawEllipseView_Impl__obj::get_width( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_781ff9dda627132a_609_get_width)
HXDLIN( 609)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawEllipseView_Impl__obj,get_width,return )

Float DrawEllipseView_Impl__obj::get_height( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_781ff9dda627132a_616_get_height)
HXDLIN( 616)		return this1->buffer->f->__get((this1->fPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawEllipseView_Impl__obj,get_height,return )


DrawEllipseView_Impl__obj::DrawEllipseView_Impl__obj()
{
}

bool DrawEllipseView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawEllipseView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawEllipseView_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class DrawEllipseView_Impl__obj::__mClass;

static ::String DrawEllipseView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	::String(null())
};

void DrawEllipseView_Impl__obj::__register()
{
	DrawEllipseView_Impl__obj _hx_dummy;
	DrawEllipseView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.DrawEllipseView_Impl_",17,f7,92,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawEllipseView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawEllipseView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawEllipseView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawEllipseView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawEllipseView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
