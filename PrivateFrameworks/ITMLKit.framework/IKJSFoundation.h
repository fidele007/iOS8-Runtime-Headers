/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKAppContext, NSMutableDictionary, <IKAppDeviceConfig>;

@interface IKJSFoundation : NSObject  {
    IKAppContext *_appContext;
    NSMutableDictionary *_jsTimers;
    NSMutableDictionary *_dateFormatterCache;
    <IKAppDeviceConfig> *_deviceConfig;
}

@property IKAppContext * appContext;
@property(retain) NSMutableDictionary * jsTimers;
@property(retain) NSMutableDictionary * dateFormatterCache;
@property <IKAppDeviceConfig> * deviceConfig;


- (void)setDateFormatterCache:(id)arg1;
- (id)dateFormatterCache;
- (void)setJsTimers:(id)arg1;
- (id)_stringForKey:(id)arg1 fromDict:(id)arg2;
- (void)_jsTimerFired:(id)arg1;
- (id)jsTimers;
- (void)_clearTimer:(id)arg1;
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(bool)arg3;
- (void)setDeviceConfig:(id)arg1;
- (id)deviceConfig;
- (void)clearCookies;
- (void)setCookie:(id)arg1 useSSCookieStorage:(bool)arg2;
- (id)getCookieForURL:(id)arg1 useSSCookieStorage:(bool)arg2;
- (void)setAppContext:(id)arg1;
- (void)clearTimeout:(id)arg1;
- (id)setTimeout:(id)arg1 time:(long long)arg2;
- (void)clearInterval:(id)arg1;
- (id)setInterval:(id)arg1 time:(long long)arg2;
- (void)stopTimers;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)appContext;
- (void).cxx_destruct;

@end
