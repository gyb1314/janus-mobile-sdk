// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include <cstdint>
#include <memory>

namespace Janus {

enum class Camera;
struct Constraints;

class ConstraintsBuilder {
public:
    virtual ~ConstraintsBuilder() {}

    virtual std::shared_ptr<ConstraintsBuilder> datachannel(bool enable) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> send_audio(bool enable) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> send_video(bool enable) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> receive_audio(bool enable) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> receive_video(bool enable) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> camera(Camera camera) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> video(int32_t width, int32_t height, int32_t fps) = 0;

    virtual std::shared_ptr<ConstraintsBuilder> send_only() = 0;

    virtual std::shared_ptr<ConstraintsBuilder> receive_only() = 0;

    virtual std::shared_ptr<ConstraintsBuilder> none() = 0;

    virtual Constraints build() = 0;

    static std::shared_ptr<ConstraintsBuilder> create();
};

}  // namespace Janus
