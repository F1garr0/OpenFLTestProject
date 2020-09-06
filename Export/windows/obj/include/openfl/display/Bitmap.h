// Generated by Haxe 4.0.5
#ifndef INCLUDED_openfl_display_Bitmap
#define INCLUDED_openfl_display_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Bitmap_obj : public  ::openfl::display::DisplayObject_obj
{
	public:
		typedef  ::openfl::display::DisplayObject_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();

	public:
		enum { _hx_ClassId = 0x3b5602c1 };

		void __construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.Bitmap"); }
		static hx::ObjectPtr< Bitmap_obj > __new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing);
		static hx::ObjectPtr< Bitmap_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Bitmap",0f,84,a0,25); }

		 ::Dynamic pixelSnapping;
		bool smoothing;
		 ::openfl::display::BitmapData _hx___bitmapData;
		int _hx___imageVersion;
		void _hx___enterFrame(int deltaTime);

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		bool _hx___hitTestMask(Float x,Float y);

		void _hx___renderCairo( ::openfl::display::CairoRenderer renderer);

		void _hx___renderCairoMask( ::openfl::display::CairoRenderer renderer);

		void _hx___renderCanvas( ::openfl::display::CanvasRenderer renderer);

		void _hx___renderCanvasMask( ::openfl::display::CanvasRenderer renderer);

		void _hx___renderDOM( ::openfl::display::DOMRenderer renderer);

		void _hx___renderDOMClear( ::openfl::display::DOMRenderer renderer);

		void _hx___renderGL( ::openfl::display::OpenGLRenderer renderer);

		void _hx___renderGLMask( ::openfl::display::OpenGLRenderer renderer);

		bool _hx___updateCacheBitmap( ::openfl::display::DisplayObjectRenderer renderer,bool force);

		 ::openfl::display::BitmapData get_bitmapData();
		::Dynamic get_bitmapData_dyn();

		 ::openfl::display::BitmapData set_bitmapData( ::openfl::display::BitmapData value);
		::Dynamic set_bitmapData_dyn();

		Float set_height(Float value);

		Float set_width(Float value);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Bitmap */ 
