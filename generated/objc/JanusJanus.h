// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import <Foundation/Foundation.h>
@class JanusBundle;
@class JanusJanus;
@class JanusPlatform;
@protocol JanusJanusConf;
@protocol JanusProtocolDelegate;


@interface JanusJanus : NSObject

- (void)init;

- (void)close;

- (void)hangup;

- (void)dispatch:(nonnull NSString *)command
         payload:(nullable JanusBundle *)payload;

+ (nullable JanusJanus *)create:(nullable id<JanusJanusConf>)conf
                       platform:(nullable JanusPlatform *)platform
                       delegate:(nullable id<JanusProtocolDelegate>)delegate;

@end
