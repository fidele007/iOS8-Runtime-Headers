/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSData, NSDate;

@interface APSIncomingMessage : APSMessage  {
}

@property(copy) NSDate * timestamp;
@property(copy) NSData * token;
@property(getter=wasFromStorage) bool fromStorage;
@property(getter=wasLastMessageFromStorage) bool lastMessageFromStorage;
@property long long priority;


- (bool)wasFromStorage;
- (void)setLastMessageFromStorage:(bool)arg1;
- (bool)wasLastMessageFromStorage;
- (void)setFromStorage:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)setToken:(id)arg1;
- (id)token;
- (void)setPriority:(long long)arg1;
- (long long)priority;

@end
