// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusJanusConf+Private.h"
#import "JanusJanusConf.h"
#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "djinni/objc/DJIMarshal+Private.h"
#import "djinni/objc/DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface JanusJanusConfCppProxy : NSObject<JanusJanusConf>

- (id)initWithCpp:(const std::shared_ptr<::Janus::JanusConf>&)cppRef;

@end

@implementation JanusJanusConfCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Janus::JanusConf>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Janus::JanusConf>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)url {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->url();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSString *)plugin {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->plugin();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class JanusConf::ObjcProxy final
: public ::Janus::JanusConf
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::JanusConf;
public:
    using ObjcProxyBase::ObjcProxyBase;
    std::string url() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() url];
            return ::djinni::String::toCpp(objcpp_result_);
        }
    }
    std::string plugin() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() plugin];
            return ::djinni::String::toCpp(objcpp_result_);
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto JanusConf::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[JanusJanusConfCppProxy class]]) {
        return ((JanusJanusConfCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto JanusConf::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<::JanusJanusConfCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
