// Generated by Haxe 4.0.5
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_276be14287d0ce94_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_translated_shader_source)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_translated_shader_source_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ANGLE_translated_shader_source_obj OBJ_;
		ANGLE_translated_shader_source_obj();

	public:
		enum { _hx_ClassId = 0x16b433c2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_translated_shader_source")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_translated_shader_source"); }

		inline static hx::ObjectPtr< ANGLE_translated_shader_source_obj > __new() {
			hx::ObjectPtr< ANGLE_translated_shader_source_obj > __this = new ANGLE_translated_shader_source_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< ANGLE_translated_shader_source_obj > __alloc(hx::Ctx *_hx_ctx) {
			ANGLE_translated_shader_source_obj *__this = (ANGLE_translated_shader_source_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_translated_shader_source_obj), false, "lime.graphics.opengl.ext.ANGLE_translated_shader_source"));
			*(void **)__this = ANGLE_translated_shader_source_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_276be14287d0ce94_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::ANGLE_translated_shader_source)(__this) )->TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE = 37792;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ANGLE_translated_shader_source_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_translated_shader_source",58,8f,67,10); }

		int TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source */ 
