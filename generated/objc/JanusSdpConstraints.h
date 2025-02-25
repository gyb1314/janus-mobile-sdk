// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import <Foundation/Foundation.h>

@interface JanusSdpConstraints : NSObject
- (nonnull instancetype)initWithSendAudio:(BOOL)sendAudio
                                sendVideo:(BOOL)sendVideo
                             receiveAudio:(BOOL)receiveAudio
                             receiveVideo:(BOOL)receiveVideo
                              datachannel:(BOOL)datachannel;
+ (nonnull instancetype)sdpConstraintsWithSendAudio:(BOOL)sendAudio
                                          sendVideo:(BOOL)sendVideo
                                       receiveAudio:(BOOL)receiveAudio
                                       receiveVideo:(BOOL)receiveVideo
                                        datachannel:(BOOL)datachannel;

@property (nonatomic, readonly) BOOL sendAudio;

@property (nonatomic, readonly) BOOL sendVideo;

@property (nonatomic, readonly) BOOL receiveAudio;

@property (nonatomic, readonly) BOOL receiveVideo;

@property (nonatomic, readonly) BOOL datachannel;

@end
