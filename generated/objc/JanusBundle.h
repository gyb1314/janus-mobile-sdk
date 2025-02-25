// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusConstraints.h"
#import <Foundation/Foundation.h>
@class JanusBundle;


@interface JanusBundle : NSObject

- (void)setString:(nonnull NSString *)key
            value:(nonnull NSString *)value;

- (nonnull NSString *)getString:(nonnull NSString *)key
                       fallback:(nonnull NSString *)fallback;

- (void)setInt:(nonnull NSString *)key
         value:(int64_t)value;

- (int64_t)getInt:(nonnull NSString *)key
         fallback:(int64_t)fallback;

- (void)setBool:(nonnull NSString *)key
          value:(BOOL)value;

- (BOOL)getBool:(nonnull NSString *)key
       fallback:(BOOL)fallback;

- (void)setConstraints:(nonnull JanusConstraints *)constraints;

- (nonnull JanusConstraints *)getConstraints;

+ (nullable JanusBundle *)create;

@end
