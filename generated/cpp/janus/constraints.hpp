// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include "sdp_constraints.hpp"
#include "video_constraints.hpp"
#include <utility>

namespace Janus {

struct Constraints final {
    SdpConstraints sdp;
    VideoConstraints video;

    Constraints(SdpConstraints sdp_,
                VideoConstraints video_)
    : sdp(std::move(sdp_))
    , video(std::move(video_))
    {}

    Constraints()
    : sdp()
    , video()
    {}
};

}  // namespace Janus
