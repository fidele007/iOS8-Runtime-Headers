/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItem, AVWeakReference, NSError, NSObject<OS_dispatch_queue>, AVPlayer;

@interface AVPlayerConnection : NSObject  {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    bool_shouldAppendItem;
    long long _status;
    NSError *_error;
    AVPlayerItem *_previousPlayerItem;
}

@property(readonly) AVPlayer * player;
@property(readonly) AVPlayerItem * playerItem;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property(readonly) NSObject<OS_dispatch_queue> * serializationQueue;


- (id)serializationQueue;
- (id)playerItem;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(bool)arg3;
- (void)removeItemFromPlayQueue;
- (bool)addItemToPlayQueue;
- (long long)status;
- (id)player;
- (id)error;
- (void)dealloc;
- (id)description;

@end
