/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface CKDRecordCachePool : NSObject  {
    NSMutableDictionary *_pools;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_expiryTimer;
}

@property(retain) NSMutableDictionary * pools;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSObject<OS_dispatch_source> * expiryTimer;

+ (id)sharedPool;

- (void)setExpiryTimer:(id)arg1;
- (id)expiryTimer;
- (void)setPools:(id)arg1;
- (void)clearAllCachesForContext:(id)arg1;
- (id)_poolForContext:(id)arg1;
- (id)pools;
- (void)releaseCache:(id)arg1;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (void)setQueue:(id)arg1;
- (id)queue;
- (id)init;
- (void).cxx_destruct;

@end
