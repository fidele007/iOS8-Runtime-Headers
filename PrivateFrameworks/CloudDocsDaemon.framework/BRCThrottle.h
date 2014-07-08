/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMutableDictionary, BRCMinHeap;

@interface BRCThrottle : BRCThrottleBase  {
    NSMutableDictionary *_retryCounters;
    BRCMinHeap *_retryHeap;
}

+ (long long)throttleHashBytes:(void*)arg1 length:(unsigned long long)arg2;
+ (long long)throttleHashFormat:(id)arg1;

- (void)logFirstBackoffTimes:(unsigned int)arg1;
- (void)_cleanupStaleCounters:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (unsigned long long)nsecsToNextRetry:(long long)arg1 now:(unsigned long long)arg2;
- (void)incrementRetryCount:(long long)arg1;
- (void).cxx_destruct;

@end
