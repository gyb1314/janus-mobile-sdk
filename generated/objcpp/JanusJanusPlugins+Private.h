// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusJanusPlugins.h"
#include "janus_plugins.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class JanusJanusPlugins;

namespace djinni_generated {

struct JanusPlugins
{
    using CppType = ::Janus::JanusPlugins;
    using ObjcType = ::JanusJanusPlugins*;

    using Boxed = JanusPlugins;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
