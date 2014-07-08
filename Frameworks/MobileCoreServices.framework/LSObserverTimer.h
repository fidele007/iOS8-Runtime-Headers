/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSString, NSTimer, NSMutableSet, NSObject<OS_dispatch_queue>, NSDate;

@interface LSObserverTimer : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSTimer *_timer;
    NSDate *_lastFiredDate;
    NSMutableSet *_applications;
    NSMutableSet *_plugins;
    double _minInterval;
    double _latency;
    SEL _appObserverSelector;
}

@property(retain) NSString * name;
@property(retain) NSTimer * timer;
@property(retain) NSDate * lastFiredDate;
@property(retain) NSMutableSet * applications;
@property(retain) NSMutableSet * plugins;
@property(readonly) double minInterval;
@property(readonly) double latency;
@property SEL appObserverSelector;


- (void)setName:(id)arg1;
- (id)plugins;
- (void)setAppObserverSelector:(SEL)arg1;
- (void)setPlugins:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)notifyObservers:(id)arg1 withApplication:(id)arg2;
- (void)removeApplication:(id)arg1;
- (id)initWithAppSelector:(SEL)arg1 queue:(id)arg2;
- (void)clear;
- (SEL)appObserverSelector;
- (void)setLastFiredDate:(id)arg1;
- (double)latency;
- (double)minInterval;
- (id)lastFiredDate;
- (void)addApplication:(id)arg1;
- (void)stopTimer;
- (id)applications;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)sendMessage:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)description;

@end
