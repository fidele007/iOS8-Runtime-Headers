/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class IMRemoteURLConnection;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    IMRemoteURLConnection *_remoteConnection;
    bool_pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
}


- (void)_updateWiFiAssertions;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3;
- (bool)_tryRetryMessageWithTimeInterval:(double)arg1;
- (id)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3;
- (void)_dequeueIfNeeded;
- (void)_cleanupURLConnection;
- (void)_serverBagLoaded:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (bool)busy;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (bool)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_clearRetryTimer;
- (void)networkStateChanged;
- (id)init;
- (bool)sendMessage:(id)arg1;
- (void)invalidate;
- (void)dealloc;

@end
