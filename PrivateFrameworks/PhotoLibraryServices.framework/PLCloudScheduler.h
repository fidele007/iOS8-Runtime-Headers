/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableDictionary;

@interface PLCloudScheduler : NSObject <PLCloudScenarioConsumer> {
    NSObject<OS_dispatch_queue> *_backlogSync;
    int _concurrencyLevel;
    NSMutableArray *_pendingOperations;
    NSMutableDictionary *_pendingScenarios;
}


- (void)runNextOperation;
- (void)completeOperation:(id)arg1 withError:(id)arg2;
- (unsigned long long)operationsBacklogLimit;
- (void)reporioritizeBacklogOperations;
- (void)consumeScenario:(id)arg1 withCompletionHandler:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
