/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray;

@interface AVCaptureDeviceControlRequestQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}


- (id)dequeue;
- (id)head;
- (void)enqueueRequest:(id)arg1;
- (id)init;
- (void)dealloc;

@end
