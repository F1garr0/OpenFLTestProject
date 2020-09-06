// Generated by Haxe 4.0.5
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#define INCLUDED_openfl_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES IBitmapDrawable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx__hx___getBounds)( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix); 
		static inline void _hx___getBounds( ::Dynamic _hx_, ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___getBounds)(rect,matrix);
		}
		void (hx::Object :: *_hx__hx___renderCairo)( ::openfl::display::CairoRenderer renderer); 
		static inline void _hx___renderCairo( ::Dynamic _hx_, ::openfl::display::CairoRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCairo)(renderer);
		}
		void (hx::Object :: *_hx__hx___renderCairoMask)( ::openfl::display::CairoRenderer renderer); 
		static inline void _hx___renderCairoMask( ::Dynamic _hx_, ::openfl::display::CairoRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCairoMask)(renderer);
		}
		void (hx::Object :: *_hx__hx___renderCanvas)( ::openfl::display::CanvasRenderer renderer); 
		static inline void _hx___renderCanvas( ::Dynamic _hx_, ::openfl::display::CanvasRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCanvas)(renderer);
		}
		void (hx::Object :: *_hx__hx___renderCanvasMask)( ::openfl::display::CanvasRenderer renderer); 
		static inline void _hx___renderCanvasMask( ::Dynamic _hx_, ::openfl::display::CanvasRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCanvasMask)(renderer);
		}
		void (hx::Object :: *_hx__hx___renderDOM)( ::openfl::display::DOMRenderer renderer); 
		static inline void _hx___renderDOM( ::Dynamic _hx_, ::openfl::display::DOMRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderDOM)(renderer);
		}
		void (hx::Object :: *_hx__hx___renderGL)( ::openfl::display::OpenGLRenderer renderer); 
		static inline void _hx___renderGL( ::Dynamic _hx_, ::openfl::display::OpenGLRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderGL)(renderer);
		}
		void (hx::Object :: *_hx__hx___renderGLMask)( ::openfl::display::OpenGLRenderer renderer); 
		static inline void _hx___renderGLMask( ::Dynamic _hx_, ::openfl::display::OpenGLRenderer renderer) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderGLMask)(renderer);
		}
		void (hx::Object :: *_hx__hx___update)(bool transformOnly,bool updateChildren); 
		static inline void _hx___update( ::Dynamic _hx_,bool transformOnly,bool updateChildren) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___update)(transformOnly,updateChildren);
		}
		void (hx::Object :: *_hx__hx___updateTransforms)( ::openfl::geom::Matrix overrideTransform); 
		static inline void _hx___updateTransforms( ::Dynamic _hx_, ::openfl::geom::Matrix overrideTransform) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___updateTransforms)(overrideTransform);
		}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IBitmapDrawable */ 
