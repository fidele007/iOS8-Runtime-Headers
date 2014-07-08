/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_source>, NSOperationQueue, NSObject<OS_dispatch_queue>, NSRunLoop;

@interface MSVWatchdog : NSObject  {
    bool_scheduled;
    bool_running;
    double _interval;
    double _timeoutInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _timeoutCallback;

    NSString *_mode;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSRunLoop *_runLoop;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

@property double interval;
@property double timeoutInterval;
@property(copy) id timeoutCallback;
@property(retain) NSString * mode;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(retain) NSRunLoop * runLoop;
@property bool scheduled;
@property bool running;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSObject<OS_dispatch_source> * timer;


- (void)scheduleInOperationQueue:(id)arg1;
- (void)setTimeoutCallback:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (void)scheduleInDispatchQueue:(id)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setScheduled:(bool)arg1;
- (id)timeoutCallback;
- (void)_scheduleTimeout;
- (void)_scheduleTest;
- (void)setRunning:(bool)arg1;
- (void)_invokeCallback;
- (void)_cancelTimeout;
- (bool)running;
- (id)dispatchQueue;
- (void)resume;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)setQueue:(id)arg1;
- (id)queue;
- (id)init;
- (void)setMode:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;
- (void)suspend;
- (void).cxx_destruct;
- (id)operationQueue;
- (id)runLoop;
- (double)interval;
- (void)setInterval:(double)arg1;
- (bool)scheduled;
- (id)mode;
- (void)setOperationQueue:(id)arg1;

@end
