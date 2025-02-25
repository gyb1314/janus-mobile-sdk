// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#include "native_peer_factory.hpp"  // my header
#include "djinni/jni/Marshal.hpp"
#include "native_peer.hpp"
#include "native_protocol.hpp"

namespace djinni_generated {

NativePeerFactory::NativePeerFactory() : ::djinni::JniInterface<::Janus::PeerFactory, NativePeerFactory>("com/github/helloiampau/janus/generated/PeerFactory$CppProxy") {}

NativePeerFactory::~NativePeerFactory() = default;

NativePeerFactory::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativePeerFactory::JavaProxy::~JavaProxy() = default;

std::shared_ptr<::Janus::Peer> NativePeerFactory::JavaProxy::create(int64_t c_id, const std::shared_ptr<::Janus::Protocol> & c_owner) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePeerFactory>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_create,
                                         ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_id)),
                                         ::djinni::get(::djinni_generated::NativeProtocol::fromCpp(jniEnv, c_owner)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativePeer::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_PeerFactory_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Janus::PeerFactory>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_github_helloiampau_janus_generated_PeerFactory_00024CppProxy_native_1create(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jlong j_id, jobject j_owner)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::PeerFactory>(nativeRef);
        auto r = ref->create(::djinni::I64::toCpp(jniEnv, j_id),
                             ::djinni_generated::NativeProtocol::toCpp(jniEnv, j_owner));
        return ::djinni::release(::djinni_generated::NativePeer::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
