/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableDictionary;

@interface CKDURLSessionPool : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate> {
    NSMutableDictionary *_delegateByTask;
    NSMutableDictionary *_sessionByIdentifier;
    NSMutableDictionary *_ephemeralSessionByTask;
}

+ (id)sharedURLSessionPool;

- (void)_performAsyncOnDelegateOfSession:(id)arg1 task:(id)arg2 fromSelector:(SEL)arg3 block:(id)arg4;
- (id)_URLSessionWithConfiguration:(id)arg1 forDelegate:(id)arg2;
- (void)_cancelAllPendingTasksForSession:(id)arg1 forDelegate:(id)arg2;
- (void)invalidateDataTask:(id)arg1;
- (id)dataTaskWithConfiguration:(id)arg1 request:(id)arg2 delegate:(id)arg3;
- (id)init;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void).cxx_destruct;

@end
