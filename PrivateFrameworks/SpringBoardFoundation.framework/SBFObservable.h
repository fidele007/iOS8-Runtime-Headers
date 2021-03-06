/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSString;

@interface SBFObservable : NSObject <SBFObservable> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)forkJoin:(id)arg1;
+ (id)observableWithBlock:(id)arg1;

- (id)subscribeOn:(id)arg1;
- (id)map:(id)arg1;
- (id)subscribeWithResultBlock:(id)arg1 completionBlock:(id)arg2 failureBlock:(id)arg3;
- (id)waitForResults:(id*)arg1;
- (id)subscribeWithResultBlock:(id)arg1;
- (id)observeOn:(id)arg1;
- (id)generate:(id)arg1;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)subscribe:(id)arg1;

@end
