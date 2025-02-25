// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

package com.github.helloiampau.janus.generated;

public final class Constraints {


    /*package*/ final SdpConstraints sdp;

    /*package*/ final VideoConstraints video;

    public Constraints(
            SdpConstraints sdp,
            VideoConstraints video) {
        this.sdp = sdp;
        this.video = video;
    }

    public SdpConstraints getSdp() {
        return sdp;
    }

    public VideoConstraints getVideo() {
        return video;
    }

    @Override
    public String toString() {
        return "Constraints{" +
                "sdp=" + sdp +
                "," + "video=" + video +
        "}";
    }

}
