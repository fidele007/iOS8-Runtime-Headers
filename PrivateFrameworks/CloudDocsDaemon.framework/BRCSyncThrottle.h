/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle  {
    NSPredicate *_predicate;
}

@property(retain) NSPredicate * predicate;


- (bool)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long*)arg2 now:(unsigned long long)arg3;
- (bool)_validateThrottleParams:(id)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (id)predicate;
- (void).cxx_destruct;
- (void)setPredicate:(id)arg1;

@end
