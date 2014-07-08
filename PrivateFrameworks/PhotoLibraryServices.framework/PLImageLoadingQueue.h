/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSLock, PLImageCache, <PLImageLoadingQueueDelegate>;

@interface PLImageLoadingQueue : NSObject  {
    <PLImageLoadingQueueDelegate> *_delegate;
    PLImageCache *_cache;
    NSLock *_lock;
}

@property <PLImageLoadingQueueDelegate> * delegate;


- (void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(id)arg5;
- (void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4;
- (void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(id)arg4;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(bool)arg4;
- (void)resumeLoading;
- (void)pauseLoading;
- (id)initWithImageCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)stopLoading;
- (void)dealloc;

@end
