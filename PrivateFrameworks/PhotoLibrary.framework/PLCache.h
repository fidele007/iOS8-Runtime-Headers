/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableDictionary;

@interface PLCache : NSObject  {
    NSMutableDictionary *_cacheEntries;
    long long _countLimit;
    long long _currentCount;
    long long _totalCostLimit;
    long long _currentCost;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    struct entryList { 
        struct lruEntry {} *tqh_first; 
        struct lruEntry {} **tqh_last; 
    } _lru;
}


- (id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;

@end
