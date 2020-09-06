// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
namespace lime{
namespace utils{

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::DEFLATE;

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::GZIP;

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::LZMA;

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::ZLIB;

bool CompressionAlgorithm_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) { outValue = CompressionAlgorithm_obj::DEFLATE; return true; }
	if (inName==HX_("GZIP",da,b0,32,2f)) { outValue = CompressionAlgorithm_obj::GZIP; return true; }
	if (inName==HX_("LZMA",62,c5,80,32)) { outValue = CompressionAlgorithm_obj::LZMA; return true; }
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) { outValue = CompressionAlgorithm_obj::ZLIB; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(CompressionAlgorithm_obj)

int CompressionAlgorithm_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) return 0;
	if (inName==HX_("GZIP",da,b0,32,2f)) return 1;
	if (inName==HX_("LZMA",62,c5,80,32)) return 2;
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) return 3;
	return super::__FindIndex(inName);
}

int CompressionAlgorithm_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) return 0;
	if (inName==HX_("GZIP",da,b0,32,2f)) return 0;
	if (inName==HX_("LZMA",62,c5,80,32)) return 0;
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val CompressionAlgorithm_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) return DEFLATE;
	if (inName==HX_("GZIP",da,b0,32,2f)) return GZIP;
	if (inName==HX_("LZMA",62,c5,80,32)) return LZMA;
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) return ZLIB;
	return super::__Field(inName,inCallProp);
}

static ::String CompressionAlgorithm_obj_sStaticFields[] = {
	HX_("DEFLATE",4b,df,cd,22),
	HX_("GZIP",da,b0,32,2f),
	HX_("LZMA",62,c5,80,32),
	HX_("ZLIB",0b,1f,b7,3b),
	::String(null())
};

hx::Class CompressionAlgorithm_obj::__mClass;

Dynamic __Create_CompressionAlgorithm_obj() { return new CompressionAlgorithm_obj; }

void CompressionAlgorithm_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("lime.utils.CompressionAlgorithm",5f,30,48,ca), hx::TCanCast< CompressionAlgorithm_obj >,CompressionAlgorithm_obj_sStaticFields,0,
	&__Create_CompressionAlgorithm_obj, &__Create,
	&super::__SGetClass(), &CreateCompressionAlgorithm_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &CompressionAlgorithm_obj::__GetStatic;
}

void CompressionAlgorithm_obj::__boot()
{
DEFLATE = hx::CreateConstEnum< CompressionAlgorithm_obj >(HX_("DEFLATE",4b,df,cd,22),0);
GZIP = hx::CreateConstEnum< CompressionAlgorithm_obj >(HX_("GZIP",da,b0,32,2f),1);
LZMA = hx::CreateConstEnum< CompressionAlgorithm_obj >(HX_("LZMA",62,c5,80,32),2);
ZLIB = hx::CreateConstEnum< CompressionAlgorithm_obj >(HX_("ZLIB",0b,1f,b7,3b),3);
}


} // end namespace lime
} // end namespace utils
