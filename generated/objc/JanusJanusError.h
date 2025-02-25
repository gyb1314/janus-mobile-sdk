// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import <Foundation/Foundation.h>

@interface JanusJanusError : NSObject
- (nonnull instancetype)initWithCode:(int64_t)code
                             message:(nonnull NSString *)message;
+ (nonnull instancetype)janusErrorWithCode:(int64_t)code
                                   message:(nonnull NSString *)message;

@property (nonatomic, readonly) int64_t code;

@property (nonatomic, readonly, nonnull) NSString * message;

@end
