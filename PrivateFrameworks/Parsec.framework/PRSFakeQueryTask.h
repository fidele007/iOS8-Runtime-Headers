/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class PRSSearchCompletionResultSet;

@interface PRSFakeQueryTask : PRSQueryTask  {
    PRSSearchCompletionResultSet *_results;
}

@property(retain) PRSSearchCompletionResultSet * results;


- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 results:(id)arg5;
- (void)resume;
- (void)setResults:(id)arg1;
- (void).cxx_destruct;
- (id)results;

@end
