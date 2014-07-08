/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSObject<OS_dispatch_queue>, NSTimer, <PRSSessionController>, NSObject<OS_dispatch_group>, NSMutableArray, NSMutableSet;

@interface PRSSearchSession : NSObject <PRSResourceProvider, PRSImageSource> {
    <PRSSessionController> *_client;
    NSMutableArray *_cachedResponses;
    NSMutableArray *_cachedWebResponses;
    NSObject<OS_dispatch_group> *_feedbackGroup;
    NSMutableSet *_feedbackTasks;
    NSMutableArray *_feedback;
    double _lastQueryTime;
    NSTimer *timer;
    bool_valid;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    double _retryAfter;
}

@property(retain) NSObject<OS_dispatch_queue> * clientQueue;
@property(getter=isValid,readonly) bool valid;
@property(readonly) double searchRenderTimeout;
@property double sessionStartTime;
@property double retryAfter;


- (void)setSessionStartTime:(double)arg1;
- (void)setClientQueue:(id)arg1;
- (void)killFeedback;
- (void)syncFeedback;
- (id)queryWithString:(id)arg1 handler:(id)arg2;
- (bool)searchSupported:(bool)arg1;
- (bool)isLocaleSupported:(id)arg1;
- (void)userDidCancelSession;
- (void)userDidSelectCompletionListItem:(id)arg1;
- (void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2;
- (id)createFeedbackRequest:(id*)arg1;
- (void)flushFeedback;
- (id)resourceWithID:(id)arg1;
- (double)searchRenderTimeout;
- (id)queryWithString:(id)arg1 webSearch:(bool)arg2 handler:(id)arg3;
- (id)createQueryURL:(id)arg1 userQueryString:(id)arg2 currentLocation:(id)arg3 locationSource:(id)arg4 currentCoordinates:(struct { double x1; double x2; })arg5 storeFrontId:(id)arg6 locale:(id)arg7;
- (void)reloadGuid;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (void)setFeedbackStartTime;
- (void)refreshGUID;
- (void)pruneCache;
- (id)createWarmupRequest;
- (id)urlRequestFromURL:(id)arg1;
- (void)setRetryAfter:(double)arg1;
- (void)addFeedback:(id)arg1;
- (double)sessionStartTime;
- (void)cacheQueryResponse:(id)arg1 webSearch:(bool)arg2;
- (id)createURLRequestWithString:(id)arg1 webSearch:(bool)arg2 scaleFactor:(double)arg3 fallbackURL:(id*)arg4;
- (id)urlSessionForImage:(id)arg1;
- (void)getImageWithIdentifier:(id)arg1 block:(id)arg2;
- (double)retryAfter;
- (id)initWithClient:(id)arg1;
- (void)deactivate;
- (id)clientQueue;
- (void)activate;
- (bool)isValid;
- (void)_invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_endSession;

@end
