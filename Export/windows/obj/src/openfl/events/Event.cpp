// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_460ec5366bb20ab2_729_new,"openfl.events.Event","new",0x2731c6f5,"openfl.events.Event.new","openfl/events/Event.hx",729,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_760_clone,"openfl.events.Event","clone",0x5b9b9932,"openfl.events.Event.clone","openfl/events/Event.hx",760,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_793_formatToString,"openfl.events.Event","formatToString",0xed38428e,"openfl.events.Event.formatToString","openfl/events/Event.hx",793,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_814_isDefaultPrevented,"openfl.events.Event","isDefaultPrevented",0x5475e94b,"openfl.events.Event.isDefaultPrevented","openfl/events/Event.hx",814,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_825_preventDefault,"openfl.events.Event","preventDefault",0xdba9c454,"openfl.events.Event.preventDefault","openfl/events/Event.hx",825,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_843_stopImmediatePropagation,"openfl.events.Event","stopImmediatePropagation",0xa67252c8,"openfl.events.Event.stopImmediatePropagation","openfl/events/Event.hx",843,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_863_stopPropagation,"openfl.events.Event","stopPropagation",0xb07183ff,"openfl.events.Event.stopPropagation","openfl/events/Event.hx",863,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_877_toString,"openfl.events.Event","toString",0x6e61ddf7,"openfl.events.Event.toString","openfl/events/Event.hx",877,0x7220a03b)
static const ::String _hx_array_data_61c42883_8[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_881___formatToString,"openfl.events.Event","__formatToString",0x9d75066e,"openfl.events.Event.__formatToString","openfl/events/Event.hx",881,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_906___init,"openfl.events.Event","__init",0xb2f032bb,"openfl.events.Event.__init","openfl/events/Event.hx",906,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_71_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",71,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_85_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",85,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_99_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",99,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_115_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",115,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_129_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",129,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_157_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",157,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_171_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",171,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_185_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",185,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_199_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",199,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_208_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",208,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_232_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",232,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_256_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",256,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_277_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",277,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_295_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",295,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_313_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",313,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_331_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",331,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_349_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",349,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_363_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",363,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_377_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",377,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_391_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",391,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_405_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",405,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_419_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",419,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_444_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",444,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_458_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",458,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_472_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",472,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_490_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",490,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_504_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",504,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_518_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",518,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_532_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",532,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_557_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",557,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_571_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",571,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_585_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",585,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_599_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",599,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_613_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",613,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_622_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",622,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_652_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",652,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_711_boot,"openfl.events.Event","boot",0x1c754ffd,"openfl.events.Event.boot","openfl/events/Event.hx",711,0x7220a03b)
namespace openfl{
namespace events{

void Event_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_729_new)
HXLINE( 730)		this->type = type;
HXLINE( 731)		this->bubbles = bubbles;
HXLINE( 732)		this->cancelable = cancelable;
HXLINE( 733)		this->eventPhase = 2;
            	}

Dynamic Event_obj::__CreateEmpty() { return new Event_obj; }

void *Event_obj::_hx_vtable = 0;

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Event_obj > _hx_result = new Event_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Event_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3243040d;
}

 ::openfl::events::Event Event_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_460ec5366bb20ab2_760_clone)
HXLINE( 761)		 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable);
HXLINE( 762)		event->eventPhase = this->eventPhase;
HXLINE( 763)		event->target = this->target;
HXLINE( 764)		event->currentTarget = this->currentTarget;
HXLINE( 765)		return event;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,clone,return )

::String Event_obj::formatToString(::String className,::String p1,::String p2,::String p3,::String p4,::String p5){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_793_formatToString)
HXLINE( 794)		::Array< ::String > parameters = ::Array_obj< ::String >::__new(0);
HXLINE( 795)		if (hx::IsNotNull( p1 )) {
HXLINE( 795)			parameters->push(p1);
            		}
HXLINE( 796)		if (hx::IsNotNull( p2 )) {
HXLINE( 796)			parameters->push(p2);
            		}
HXLINE( 797)		if (hx::IsNotNull( p3 )) {
HXLINE( 797)			parameters->push(p3);
            		}
HXLINE( 798)		if (hx::IsNotNull( p4 )) {
HXLINE( 798)			parameters->push(p4);
            		}
HXLINE( 799)		if (hx::IsNotNull( p5 )) {
HXLINE( 799)			parameters->push(p5);
            		}
HXLINE( 801)		return ( (::String)(::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->_hx___formatToString_dyn(),::cpp::VirtualArray_obj::__new(2)->init(0,className)->init(1,parameters))) );
            	}


HX_DEFINE_DYNAMIC_FUNC6(Event_obj,formatToString,return )

bool Event_obj::isDefaultPrevented(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_814_isDefaultPrevented)
HXDLIN( 814)		return this->_hx___preventDefault;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,isDefaultPrevented,return )

void Event_obj::preventDefault(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_825_preventDefault)
HXDLIN( 825)		if (this->cancelable) {
HXLINE( 827)			this->_hx___preventDefault = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,preventDefault,(void))

void Event_obj::stopImmediatePropagation(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_843_stopImmediatePropagation)
HXLINE( 844)		this->_hx___isCanceled = true;
HXLINE( 845)		this->_hx___isCanceledNow = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

void Event_obj::stopPropagation(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_863_stopPropagation)
HXDLIN( 863)		this->_hx___isCanceled = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

::String Event_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_877_toString)
HXDLIN( 877)		return this->_hx___formatToString(HX_("Event",fa,37,f2,08),::Array_obj< ::String >::fromData( _hx_array_data_61c42883_8,3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )

::String Event_obj::_hx___formatToString(::String className,::Array< ::String > parameters){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_881___formatToString)
HXLINE( 884)		::String output = (HX_("[",5b,00,00,00) + className);
HXLINE( 885)		 ::Dynamic arg = null();
HXLINE( 887)		{
HXLINE( 887)			int _g = 0;
HXDLIN( 887)			while((_g < parameters->length)){
HXLINE( 887)				::String param = parameters->__get(_g);
HXDLIN( 887)				_g = (_g + 1);
HXLINE( 889)				arg = ::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),param);
HXLINE( 891)				if (::Std_obj::is(arg,hx::ClassOf< ::String >())) {
HXLINE( 893)					output = (output + ((((HX_(" ",20,00,00,00) + param) + HX_("=\"",45,35,00,00)) + ::Std_obj::string(arg)) + HX_("\"",22,00,00,00)));
            				}
            				else {
HXLINE( 897)					output = (output + (((HX_(" ",20,00,00,00) + param) + HX_("=",3d,00,00,00)) + ::Std_obj::string(arg)));
            				}
            			}
            		}
HXLINE( 901)		output = (output + HX_("]",5d,00,00,00));
HXLINE( 902)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Event_obj,_hx___formatToString,return )

void Event_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_906___init)
HXLINE( 908)		this->target = null();
HXLINE( 909)		this->currentTarget = null();
HXLINE( 910)		this->bubbles = false;
HXLINE( 911)		this->cancelable = false;
HXLINE( 912)		this->eventPhase = 2;
HXLINE( 913)		this->_hx___isCanceled = false;
HXLINE( 914)		this->_hx___isCanceledNow = false;
HXLINE( 915)		this->_hx___preventDefault = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,_hx___init,(void))

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CANCEL;

::String Event_obj::CHANGE;

::String Event_obj::CLEAR;

::String Event_obj::CLOSE;

::String Event_obj::COMPLETE;

::String Event_obj::CONNECT;

::String Event_obj::CONTEXT3D_CREATE;

::String Event_obj::COPY;

::String Event_obj::CUT;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::EXIT_FRAME;

::String Event_obj::FRAME_CONSTRUCTED;

::String Event_obj::FRAME_LABEL;

::String Event_obj::FULLSCREEN;

::String Event_obj::ID3;

::String Event_obj::INIT;

::String Event_obj::MOUSE_LEAVE;

::String Event_obj::OPEN;

::String Event_obj::PASTE;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SCROLL;

::String Event_obj::SELECT;

::String Event_obj::SELECT_ALL;

::String Event_obj::SOUND_COMPLETE;

::String Event_obj::TAB_CHILDREN_CHANGE;

::String Event_obj::TAB_ENABLED_CHANGE;

::String Event_obj::TAB_INDEX_CHANGE;

::String Event_obj::TEXTURE_READY;

::String Event_obj::UNLOAD;

 ::lime::utils::ObjectPool Event_obj::_hx___pool;


hx::ObjectPtr< Event_obj > Event_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable) {
	hx::ObjectPtr< Event_obj > __this = new Event_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

hx::ObjectPtr< Event_obj > Event_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable) {
	Event_obj *__this = (Event_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Event_obj), true, "openfl.events.Event"));
	*(void **)__this = Event_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(bubbles,"bubbles");
	HX_MARK_MEMBER_NAME(cancelable,"cancelable");
	HX_MARK_MEMBER_NAME(currentTarget,"currentTarget");
	HX_MARK_MEMBER_NAME(eventPhase,"eventPhase");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_hx___isCanceled,"__isCanceled");
	HX_MARK_MEMBER_NAME(_hx___isCanceledNow,"__isCanceledNow");
	HX_MARK_MEMBER_NAME(_hx___preventDefault,"__preventDefault");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bubbles,"bubbles");
	HX_VISIT_MEMBER_NAME(cancelable,"cancelable");
	HX_VISIT_MEMBER_NAME(currentTarget,"currentTarget");
	HX_VISIT_MEMBER_NAME(eventPhase,"eventPhase");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_hx___isCanceled,"__isCanceled");
	HX_VISIT_MEMBER_NAME(_hx___isCanceledNow,"__isCanceledNow");
	HX_VISIT_MEMBER_NAME(_hx___preventDefault,"__preventDefault");
}

hx::Val Event_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { return hx::Val( bubbles ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { return hx::Val( cancelable ); }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { return hx::Val( eventPhase ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__isCanceled") ) { return hx::Val( _hx___isCanceled ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return hx::Val( currentTarget ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"formatToString") ) { return hx::Val( formatToString_dyn() ); }
		if (HX_FIELD_EQ(inName,"preventDefault") ) { return hx::Val( preventDefault_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__isCanceledNow") ) { return hx::Val( _hx___isCanceledNow ); }
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return hx::Val( stopPropagation_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__preventDefault") ) { return hx::Val( _hx___preventDefault ); }
		if (HX_FIELD_EQ(inName,"__formatToString") ) { return hx::Val( _hx___formatToString_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isDefaultPrevented") ) { return hx::Val( isDefaultPrevented_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return hx::Val( stopImmediatePropagation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Event_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
	}
	return false;
}

hx::Val Event_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { eventPhase=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__isCanceled") ) { _hx___isCanceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { currentTarget=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__isCanceledNow") ) { _hx___isCanceledNow=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__preventDefault") ) { _hx___preventDefault=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Event_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bubbles",67,bb,56,61));
	outFields->push(HX_("cancelable",14,a0,79,c4));
	outFields->push(HX_("currentTarget",6a,74,49,6a));
	outFields->push(HX_("eventPhase",c1,31,44,3e));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("__isCanceled",83,a5,68,d2));
	outFields->push(HX_("__isCanceledNow",53,ff,9e,05));
	outFields->push(HX_("__preventDefault",e9,b7,e4,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Event_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,bubbles),HX_("bubbles",67,bb,56,61)},
	{hx::fsBool,(int)offsetof(Event_obj,cancelable),HX_("cancelable",14,a0,79,c4)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Event_obj,currentTarget),HX_("currentTarget",6a,74,49,6a)},
	{hx::fsInt,(int)offsetof(Event_obj,eventPhase),HX_("eventPhase",c1,31,44,3e)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Event_obj,target),HX_("target",51,f3,ec,86)},
	{hx::fsString,(int)offsetof(Event_obj,type),HX_("type",ba,f2,08,4d)},
	{hx::fsBool,(int)offsetof(Event_obj,_hx___isCanceled),HX_("__isCanceled",83,a5,68,d2)},
	{hx::fsBool,(int)offsetof(Event_obj,_hx___isCanceledNow),HX_("__isCanceledNow",53,ff,9e,05)},
	{hx::fsBool,(int)offsetof(Event_obj,_hx___preventDefault),HX_("__preventDefault",e9,b7,e4,9b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Event_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Event_obj::ACTIVATE,HX_("ACTIVATE",b3,ab,31,3f)},
	{hx::fsString,(void *) &Event_obj::ADDED,HX_("ADDED",a0,0c,32,9a)},
	{hx::fsString,(void *) &Event_obj::ADDED_TO_STAGE,HX_("ADDED_TO_STAGE",59,58,db,1a)},
	{hx::fsString,(void *) &Event_obj::CANCEL,HX_("CANCEL",7a,99,b6,6a)},
	{hx::fsString,(void *) &Event_obj::CHANGE,HX_("CHANGE",70,3d,f5,69)},
	{hx::fsString,(void *) &Event_obj::CLEAR,HX_("CLEAR",6d,a9,49,c6)},
	{hx::fsString,(void *) &Event_obj::CLOSE,HX_("CLOSE",98,4f,51,c6)},
	{hx::fsString,(void *) &Event_obj::COMPLETE,HX_("COMPLETE",b9,90,4d,d9)},
	{hx::fsString,(void *) &Event_obj::CONNECT,HX_("CONNECT",ca,0f,54,95)},
	{hx::fsString,(void *) &Event_obj::CONTEXT3D_CREATE,HX_("CONTEXT3D_CREATE",5b,c4,3d,41)},
	{hx::fsString,(void *) &Event_obj::COPY,HX_("COPY",b5,83,85,2c)},
	{hx::fsString,(void *) &Event_obj::CUT,HX_("CUT",62,21,33,00)},
	{hx::fsString,(void *) &Event_obj::DEACTIVATE,HX_("DEACTIVATE",34,d0,0a,2e)},
	{hx::fsString,(void *) &Event_obj::ENTER_FRAME,HX_("ENTER_FRAME",46,a6,ab,c6)},
	{hx::fsString,(void *) &Event_obj::EXIT_FRAME,HX_("EXIT_FRAME",ec,e0,d4,cb)},
	{hx::fsString,(void *) &Event_obj::FRAME_CONSTRUCTED,HX_("FRAME_CONSTRUCTED",a4,ed,0a,9f)},
	{hx::fsString,(void *) &Event_obj::FRAME_LABEL,HX_("FRAME_LABEL",e2,44,f1,b6)},
	{hx::fsString,(void *) &Event_obj::FULLSCREEN,HX_("FULLSCREEN",3b,ae,bd,eb)},
	{hx::fsString,(void *) &Event_obj::ID3,HX_("ID3",f8,9f,37,00)},
	{hx::fsString,(void *) &Event_obj::INIT,HX_("INIT",10,03,7c,30)},
	{hx::fsString,(void *) &Event_obj::MOUSE_LEAVE,HX_("MOUSE_LEAVE",dd,d3,d5,d0)},
	{hx::fsString,(void *) &Event_obj::OPEN,HX_("OPEN",ca,cb,74,34)},
	{hx::fsString,(void *) &Event_obj::PASTE,HX_("PASTE",33,8b,44,3b)},
	{hx::fsString,(void *) &Event_obj::REMOVED,HX_("REMOVED",80,f3,d3,72)},
	{hx::fsString,(void *) &Event_obj::REMOVED_FROM_STAGE,HX_("REMOVED_FROM_STAGE",68,cc,72,db)},
	{hx::fsString,(void *) &Event_obj::RENDER,HX_("RENDER",56,17,ac,b7)},
	{hx::fsString,(void *) &Event_obj::RESIZE,HX_("RESIZE",f4,05,fe,ba)},
	{hx::fsString,(void *) &Event_obj::SCROLL,HX_("SCROLL",0d,84,e7,f9)},
	{hx::fsString,(void *) &Event_obj::SELECT,HX_("SELECT",fc,c6,b5,1c)},
	{hx::fsString,(void *) &Event_obj::SELECT_ALL,HX_("SELECT_ALL",fe,ce,07,ca)},
	{hx::fsString,(void *) &Event_obj::SOUND_COMPLETE,HX_("SOUND_COMPLETE",89,35,98,f1)},
	{hx::fsString,(void *) &Event_obj::TAB_CHILDREN_CHANGE,HX_("TAB_CHILDREN_CHANGE",66,8e,83,1c)},
	{hx::fsString,(void *) &Event_obj::TAB_ENABLED_CHANGE,HX_("TAB_ENABLED_CHANGE",d8,4a,cd,8b)},
	{hx::fsString,(void *) &Event_obj::TAB_INDEX_CHANGE,HX_("TAB_INDEX_CHANGE",e7,bd,c6,b6)},
	{hx::fsString,(void *) &Event_obj::TEXTURE_READY,HX_("TEXTURE_READY",7f,7a,cf,f2)},
	{hx::fsString,(void *) &Event_obj::UNLOAD,HX_("UNLOAD",ff,4c,0f,18)},
	{hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Event_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Event_obj_sMemberFields[] = {
	HX_("bubbles",67,bb,56,61),
	HX_("cancelable",14,a0,79,c4),
	HX_("currentTarget",6a,74,49,6a),
	HX_("eventPhase",c1,31,44,3e),
	HX_("target",51,f3,ec,86),
	HX_("type",ba,f2,08,4d),
	HX_("__isCanceled",83,a5,68,d2),
	HX_("__isCanceledNow",53,ff,9e,05),
	HX_("__preventDefault",e9,b7,e4,9b),
	HX_("clone",5d,13,63,48),
	HX_("formatToString",03,ab,33,79),
	HX_("isDefaultPrevented",40,30,27,04),
	HX_("preventDefault",c9,2c,a5,67),
	HX_("stopImmediatePropagation",7d,bf,66,5b),
	HX_("stopPropagation",ea,81,71,a0),
	HX_("toString",ac,d0,6e,38),
	HX_("__formatToString",23,36,73,ad),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void Event_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_MARK_MEMBER_NAME(Event_obj::COPY,"COPY");
	HX_MARK_MEMBER_NAME(Event_obj::CUT,"CUT");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::EXIT_FRAME,"EXIT_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::FRAME_CONSTRUCTED,"FRAME_CONSTRUCTED");
	HX_MARK_MEMBER_NAME(Event_obj::FRAME_LABEL,"FRAME_LABEL");
	HX_MARK_MEMBER_NAME(Event_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_MARK_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::PASTE,"PASTE");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT_ALL,"SELECT_ALL");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TEXTURE_READY,"TEXTURE_READY");
	HX_MARK_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
	HX_MARK_MEMBER_NAME(Event_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Event_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CLEAR,"CLEAR");
	HX_VISIT_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_VISIT_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_VISIT_MEMBER_NAME(Event_obj::COPY,"COPY");
	HX_VISIT_MEMBER_NAME(Event_obj::CUT,"CUT");
	HX_VISIT_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::EXIT_FRAME,"EXIT_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::FRAME_CONSTRUCTED,"FRAME_CONSTRUCTED");
	HX_VISIT_MEMBER_NAME(Event_obj::FRAME_LABEL,"FRAME_LABEL");
	HX_VISIT_MEMBER_NAME(Event_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_VISIT_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_VISIT_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(Event_obj::PASTE,"PASTE");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(Event_obj::SELECT_ALL,"SELECT_ALL");
	HX_VISIT_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TEXTURE_READY,"TEXTURE_READY");
	HX_VISIT_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
	HX_VISIT_MEMBER_NAME(Event_obj::_hx___pool,"__pool");
};

#endif

hx::Class Event_obj::__mClass;

static ::String Event_obj_sStaticFields[] = {
	HX_("ACTIVATE",b3,ab,31,3f),
	HX_("ADDED",a0,0c,32,9a),
	HX_("ADDED_TO_STAGE",59,58,db,1a),
	HX_("CANCEL",7a,99,b6,6a),
	HX_("CHANGE",70,3d,f5,69),
	HX_("CLEAR",6d,a9,49,c6),
	HX_("CLOSE",98,4f,51,c6),
	HX_("COMPLETE",b9,90,4d,d9),
	HX_("CONNECT",ca,0f,54,95),
	HX_("CONTEXT3D_CREATE",5b,c4,3d,41),
	HX_("COPY",b5,83,85,2c),
	HX_("CUT",62,21,33,00),
	HX_("DEACTIVATE",34,d0,0a,2e),
	HX_("ENTER_FRAME",46,a6,ab,c6),
	HX_("EXIT_FRAME",ec,e0,d4,cb),
	HX_("FRAME_CONSTRUCTED",a4,ed,0a,9f),
	HX_("FRAME_LABEL",e2,44,f1,b6),
	HX_("FULLSCREEN",3b,ae,bd,eb),
	HX_("ID3",f8,9f,37,00),
	HX_("INIT",10,03,7c,30),
	HX_("MOUSE_LEAVE",dd,d3,d5,d0),
	HX_("OPEN",ca,cb,74,34),
	HX_("PASTE",33,8b,44,3b),
	HX_("REMOVED",80,f3,d3,72),
	HX_("REMOVED_FROM_STAGE",68,cc,72,db),
	HX_("RENDER",56,17,ac,b7),
	HX_("RESIZE",f4,05,fe,ba),
	HX_("SCROLL",0d,84,e7,f9),
	HX_("SELECT",fc,c6,b5,1c),
	HX_("SELECT_ALL",fe,ce,07,ca),
	HX_("SOUND_COMPLETE",89,35,98,f1),
	HX_("TAB_CHILDREN_CHANGE",66,8e,83,1c),
	HX_("TAB_ENABLED_CHANGE",d8,4a,cd,8b),
	HX_("TAB_INDEX_CHANGE",e7,bd,c6,b6),
	HX_("TEXTURE_READY",7f,7a,cf,f2),
	HX_("UNLOAD",ff,4c,0f,18),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void Event_obj::__register()
{
	Event_obj _hx_dummy;
	Event_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.events.Event",83,28,c4,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Event_obj::__GetStatic;
	__mClass->mSetStaticField = &Event_obj::__SetStatic;
	__mClass->mMarkFunc = Event_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Event_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Event_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Event_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Event_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Event_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Event_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Event_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_71_boot)
HXDLIN(  71)		ACTIVATE = HX_("activate",b3,1b,ac,e5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_85_boot)
HXDLIN(  85)		ADDED = HX_("added",c0,d4,43,1c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_99_boot)
HXDLIN(  99)		ADDED_TO_STAGE = HX_("addedToStage",63,22,55,0c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_115_boot)
HXDLIN( 115)		CANCEL = HX_("cancel",7a,ed,33,b8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_129_boot)
HXDLIN( 129)		CHANGE = HX_("change",70,91,72,b7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_157_boot)
HXDLIN( 157)		CLEAR = HX_("clear",8d,71,5b,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_171_boot)
HXDLIN( 171)		CLOSE = HX_("close",b8,17,63,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_185_boot)
HXDLIN( 185)		COMPLETE = HX_("complete",b9,00,c8,7f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_199_boot)
HXDLIN( 199)		CONNECT = HX_("connect",ea,3b,80,15);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_208_boot)
HXDLIN( 208)		CONTEXT3D_CREATE = HX_("context3DCreate",7c,bf,59,7b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_232_boot)
HXDLIN( 232)		COPY = HX_("copy",b5,bb,c4,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_256_boot)
HXDLIN( 256)		CUT = HX_("cut",82,85,4b,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_277_boot)
HXDLIN( 277)		DEACTIVATE = HX_("deactivate",34,5c,01,3c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_295_boot)
HXDLIN( 295)		ENTER_FRAME = HX_("enterFrame",f5,03,50,02);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_313_boot)
HXDLIN( 313)		EXIT_FRAME = HX_("exitFrame",2f,64,48,12);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_331_boot)
HXDLIN( 331)		FRAME_CONSTRUCTED = HX_("frameConstructed",09,89,5d,98);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_349_boot)
HXDLIN( 349)		FRAME_LABEL = HX_("frameLabel",87,42,d5,52);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_363_boot)
HXDLIN( 363)		FULLSCREEN = HX_("fullScreen",5b,ae,48,2e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_377_boot)
HXDLIN( 377)		ID3 = HX_("id3",f8,03,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_391_boot)
HXDLIN( 391)		INIT = HX_("init",10,3b,bb,45);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_405_boot)
HXDLIN( 405)		MOUSE_LEAVE = HX_("mouseLeave",92,28,20,90);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_419_boot)
HXDLIN( 419)		OPEN = HX_("open",ca,03,b4,49);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_444_boot)
HXDLIN( 444)		PASTE = HX_("paste",53,53,56,bd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_458_boot)
HXDLIN( 458)		REMOVED = HX_("removed",a0,1f,00,f3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_472_boot)
HXDLIN( 472)		REMOVED_FROM_STAGE = HX_("removedFromStage",34,21,76,ba);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_490_boot)
HXDLIN( 490)		RENDER = HX_("render",56,6b,29,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_504_boot)
HXDLIN( 504)		RESIZE = HX_("resize",f4,59,7b,08);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_518_boot)
HXDLIN( 518)		SCROLL = HX_("scroll",0d,d8,64,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_532_boot)
HXDLIN( 532)		SELECT = HX_("select",fc,1a,33,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_557_boot)
HXDLIN( 557)		SELECT_ALL = HX_("selectAll",85,9b,fc,8d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_571_boot)
HXDLIN( 571)		SOUND_COMPLETE = HX_("soundComplete",a8,30,e6,1c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_585_boot)
HXDLIN( 585)		TAB_CHILDREN_CHANGE = HX_("tabChildrenChange",44,91,b5,de);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_599_boot)
HXDLIN( 599)		TAB_ENABLED_CHANGE = HX_("tabEnabledChange",3c,45,98,72);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_613_boot)
HXDLIN( 613)		TAB_INDEX_CHANGE = HX_("tabIndexChange",cd,1d,78,90);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_622_boot)
HXDLIN( 622)		TEXTURE_READY = HX_("textureReady",88,4d,5a,df);
            	}
{
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_652_boot)
HXDLIN( 652)		UNLOAD = HX_("unload",ff,a0,8c,65);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::events::Event _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_460ec5366bb20ab2_711_boot)
HXDLIN( 711)			return  ::openfl::events::Event_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::events::Event event){
            			HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_711_boot)
HXDLIN( 711)			event->_hx___init();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_460ec5366bb20ab2_711_boot)
HXDLIN( 711)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace events