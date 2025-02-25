// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "janus_plugins.hpp"

namespace djinni_generated {

class NativeJanusPlugins final {
public:
    using CppType = ::Janus::JanusPlugins;
    using JniType = jobject;

    using Boxed = NativeJanusPlugins;

    ~NativeJanusPlugins();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeJanusPlugins();
    friend ::djinni::JniClass<NativeJanusPlugins>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/github/helloiampau/janus/generated/JanusPlugins") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "()V") };
};

}  // namespace djinni_generated
