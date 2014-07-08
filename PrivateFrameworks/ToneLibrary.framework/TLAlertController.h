/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSMutableDictionary, TLAccessQueue;

@interface TLAlertController : NSObject  {
    NSMutableDictionary *_alertsBySoundIDs;
    TLAccessQueue *_alertsBySoundIDsAccessQueue;
}

@property(readonly) bool _hasVibratorCapability;
@property(setter=_setAlertsBySoundIDs:,retain) NSMutableDictionary * _alertsBySoundIDs;
@property(setter=_setAlertsBySoundIDsAccessQueue:,retain) TLAccessQueue * _alertsBySoundIDsAccessQueue;

+ (id)sharedAlertController;

- (void)_systemSoundDidFinishPlaying:(unsigned int)arg1;
- (bool)stopAllAlerts;
- (void)_didReachTimeoutForSystemSound:(id)arg1;
- (unsigned int)_soundIDForAlert:(id)arg1;
- (bool)_stopAllAlerts;
- (void)_setAlertsBySoundIDs:(id)arg1;
- (void)_removeSoundID:(unsigned int)arg1 shouldStopSound:(bool)arg2 fireCompletionHandler:(bool)arg3;
- (id)_alertsBySoundIDs;
- (id)_alertsBySoundIDsAccessQueue;
- (void)_setAlertsBySoundIDsAccessQueue:(id)arg1;
- (void)_stopAlert:(id)arg1;
- (bool)_playAlert:(id)arg1 completionHandler:(id)arg2 targetQueue:(id)arg3;
- (bool)_hasVibratorCapability;
- (id)init;
- (void)dealloc;

@end
