// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusSdpConstraints.h"


@implementation JanusSdpConstraints

- (nonnull instancetype)initWithSendAudio:(BOOL)sendAudio
                                sendVideo:(BOOL)sendVideo
                             receiveAudio:(BOOL)receiveAudio
                             receiveVideo:(BOOL)receiveVideo
                              datachannel:(BOOL)datachannel
{
    if (self = [super init]) {
        _sendAudio = sendAudio;
        _sendVideo = sendVideo;
        _receiveAudio = receiveAudio;
        _receiveVideo = receiveVideo;
        _datachannel = datachannel;
    }
    return self;
}

+ (nonnull instancetype)sdpConstraintsWithSendAudio:(BOOL)sendAudio
                                          sendVideo:(BOOL)sendVideo
                                       receiveAudio:(BOOL)receiveAudio
                                       receiveVideo:(BOOL)receiveVideo
                                        datachannel:(BOOL)datachannel
{
    return [(JanusSdpConstraints*)[self alloc] initWithSendAudio:sendAudio
                                                       sendVideo:sendVideo
                                                    receiveAudio:receiveAudio
                                                    receiveVideo:receiveVideo
                                                     datachannel:datachannel];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p sendAudio:%@ sendVideo:%@ receiveAudio:%@ receiveVideo:%@ datachannel:%@>", self.class, (void *)self, @(self.sendAudio), @(self.sendVideo), @(self.receiveAudio), @(self.receiveVideo), @(self.datachannel)];
}

@end
