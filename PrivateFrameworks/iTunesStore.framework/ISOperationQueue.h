/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSOperationQueue;

@interface ISOperationQueue : NSObject  {
    NSOperationQueue *_queue;
}

@property bool adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (void)setAdjustsMaxConcurrentOperationCount:(bool)arg1;
- (bool)adjustsMaxConcurrentOperationCount;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (id)operations;
- (void)setSuspended:(bool)arg1;
- (void)cancelAllOperations;
- (long long)maxConcurrentOperationCount;
- (void)setName:(id)arg1;
- (id)init;
- (void)addOperation:(id)arg1;
- (id)name;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)operationCount;

@end
