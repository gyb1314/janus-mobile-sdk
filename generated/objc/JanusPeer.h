// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusConstraints.h"
#import "JanusSdpType.h"
#import <Foundation/Foundation.h>
@class JanusBundle;


@protocol JanusPeer <NSObject>

- (void)createOffer:(nonnull JanusConstraints *)constraints
            context:(nullable JanusBundle *)context;

- (void)createAnswer:(nonnull JanusConstraints *)constraints
             context:(nullable JanusBundle *)context;

- (void)setLocalDescription:(JanusSdpType)type
                        sdp:(nonnull NSString *)sdp;

- (void)setRemoteDescription:(JanusSdpType)type
                         sdp:(nonnull NSString *)sdp;

- (void)addIceCandidate:(nonnull NSString *)mid
                  index:(int32_t)index
                    sdp:(nonnull NSString *)sdp;

- (void)close;

@end
