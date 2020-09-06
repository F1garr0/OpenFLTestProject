// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_50_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",50,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_118_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",118,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_222_startsWith,"StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",222,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_252_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",252,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_288_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",288,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_306_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",306,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_331_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",331,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_359_trim,"StringTools","trim",0x2908d066,"StringTools.trim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",359,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_375_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",375,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_434_replace,"StringTools","replace",0x6d651f30,"StringTools.replace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",434,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_444_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",444,0xb9dbeb2d)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_50_urlEncode)
HXDLIN(  50)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_118_urlDecode)
HXDLIN( 118)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_222_startsWith)
HXLINE( 228)		if ((s.length < start.length)) {
HXLINE( 229)			return false;
            		}
HXLINE( 230)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.c_str());
HXLINE( 231)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(start.c_str());
HXLINE( 232)		{
HXLINE( 232)			int _g = 0;
HXDLIN( 232)			int _g1 = start.length;
HXDLIN( 232)			while((_g < _g1)){
HXLINE( 232)				_g = (_g + 1);
HXDLIN( 232)				int i = (_g - 1);
HXLINE( 233)				char & _hx_tmp = p0->at(i);
HXDLIN( 233)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 233)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 234)					return false;
            				}
            			}
            		}
HXLINE( 235)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_252_endsWith)
HXLINE( 258)		if ((s.length < end.length)) {
HXLINE( 259)			return false;
            		}
HXLINE( 260)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.c_str());
HXDLIN( 260)		::cpp::Pointer< char > p01 = p0->add((s.length - end.length));
HXLINE( 261)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(end.c_str());
HXLINE( 262)		{
HXLINE( 262)			int _g = 0;
HXDLIN( 262)			int _g1 = end.length;
HXDLIN( 262)			while((_g < _g1)){
HXLINE( 262)				_g = (_g + 1);
HXDLIN( 262)				int i = (_g - 1);
HXLINE( 263)				char & _hx_tmp = p01->at(i);
HXDLIN( 263)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 263)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 264)					return false;
            				}
            			}
            		}
HXLINE( 265)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_288_isSpace)
HXLINE( 293)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 294)		bool _hx_tmp;
HXDLIN( 294)		if (hx::IsGreater( c,8 )) {
HXLINE( 294)			_hx_tmp = hx::IsLess( c,14 );
            		}
            		else {
HXLINE( 294)			_hx_tmp = false;
            		}
HXDLIN( 294)		if (!(_hx_tmp)) {
HXLINE( 294)			return hx::IsEq( c,32 );
            		}
            		else {
HXLINE( 294)			return true;
            		}
HXDLIN( 294)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_306_ltrim)
HXLINE( 310)		int l = s.length;
HXLINE( 311)		int r = 0;
HXLINE( 312)		while(true){
HXLINE( 312)			bool _hx_tmp;
HXDLIN( 312)			if ((r < l)) {
HXLINE( 312)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 312)				_hx_tmp = false;
            			}
HXDLIN( 312)			if (!(_hx_tmp)) {
HXLINE( 312)				goto _hx_goto_7;
            			}
HXLINE( 313)			r = (r + 1);
            		}
            		_hx_goto_7:;
HXLINE( 315)		if ((r > 0)) {
HXLINE( 316)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 318)			return s;
            		}
HXLINE( 315)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_331_rtrim)
HXLINE( 335)		int l = s.length;
HXLINE( 336)		int r = 0;
HXLINE( 337)		while(true){
HXLINE( 337)			bool _hx_tmp;
HXDLIN( 337)			if ((r < l)) {
HXLINE( 337)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - 1));
            			}
            			else {
HXLINE( 337)				_hx_tmp = false;
            			}
HXDLIN( 337)			if (!(_hx_tmp)) {
HXLINE( 337)				goto _hx_goto_9;
            			}
HXLINE( 338)			r = (r + 1);
            		}
            		_hx_goto_9:;
HXLINE( 340)		if ((r > 0)) {
HXLINE( 341)			return s.substr(0,(l - r));
            		}
            		else {
HXLINE( 343)			return s;
            		}
HXLINE( 340)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_359_trim)
HXDLIN( 359)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_375_lpad)
HXLINE( 376)		if ((c.length <= 0)) {
HXLINE( 377)			return s;
            		}
HXLINE( 379)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 380)		l = (l - s.length);
HXLINE( 381)		while((buf->get_length() < l)){
HXLINE( 382)			if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 382)				buf->flush();
            			}
HXDLIN( 382)			if (hx::IsNull( buf->b )) {
HXLINE( 382)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(c));
            			}
            			else {
HXLINE( 382)				::Array< ::String > buf1 = buf->b;
HXDLIN( 382)				buf1->push(::Std_obj::string(c));
            			}
            		}
HXLINE( 384)		{
HXLINE( 384)			if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 384)				buf->flush();
            			}
HXDLIN( 384)			if (hx::IsNull( buf->b )) {
HXLINE( 384)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(s));
            			}
            			else {
HXLINE( 384)				::Array< ::String > buf2 = buf->b;
HXDLIN( 384)				buf2->push(::Std_obj::string(s));
            			}
            		}
HXLINE( 385)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_434_replace)
HXDLIN( 434)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_444_hex)
HXLINE( 450)		::String s = HX_("",00,00,00,00);
HXLINE( 451)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 452)		while(true){
HXLINE( 453)			s = (hexChars.charAt((n & 15)) + s);
HXLINE( 454)			n = hx::UShr(n,4);
HXLINE( 452)			if (!((n > 0))) {
HXLINE( 452)				goto _hx_goto_15;
            			}
            		}
            		_hx_goto_15:;
HXLINE( 465)		if (hx::IsNotNull( digits )) {
HXLINE( 466)			while(hx::IsLess( s.length,digits )){
HXLINE( 467)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 469)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_("urlEncode",e5,4e,52,9a),
	HX_("urlDecode",fd,b9,5b,05),
	HX_("startsWith",77,c0,cf,f9),
	HX_("endsWith",5e,7a,b6,db),
	HX_("isSpace",7c,30,ec,1d),
	HX_("ltrim",4e,43,4a,7c),
	HX_("rtrim",54,be,b1,f0),
	HX_("trim",e2,9c,03,4d),
	HX_("lpad",67,5c,b8,47),
	HX_("replace",34,48,28,ab),
	HX_("hex",db,42,4f,00),
	::String(null())
};

void StringTools_obj::__register()
{
	StringTools_obj _hx_dummy;
	StringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("StringTools",6a,db,63,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

