/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSURL, NSMutableData, CLLocation, NSURLSessionConfiguration, NSDictionary, <PRSSessionController>, CLLocationManager, NSMutableArray, PRSFairPlaySAPSession, NSString, CLInUseAssertion, NSObject<OS_dispatch_queue>, NSArray, NSURLSessionDataTask, NSError, PRSSharedParsecSession;

@interface PRSBagHandler : NSObject <PRSParsecDataHandler, PRSResourceProvider, PRSSessionController, CLLocationManagerDelegate> {
    PRSSharedParsecSession *_bagSession;
    NSString *_waldoIP;
    struct __SCNetworkReachability { } *_networkReachability;
    NSObject<OS_dispatch_queue> *_bagQueue;
    bool_bagFailed;
    bool_active;
    bool_parsecEnabled;
    bool_mescalEnabled;
    bool_ledbellyEnabled;
    bool_useGUID;
    bool_limitedFeedback;
    NSString *_userId;
    NSURL *_searchURL;
    NSURL *_webSearchURL;
    NSURL *_feedbackURL;
    NSURL *_guidURL;
    NSURL *_fallbackSearchURL;
    NSURL *_fallbackWebSearchURL;
    NSURL *_fallbackFeedbackURL;
    NSURL *_fallbackGuidURL;
    double _feedbackStatsInterval;
    double _retryAfter;
    double _searchRenderTimeout;
    NSError *_error;
    NSString *_serverVersion;
    long long _status;
    long long _minimumStringLength;
    long long _maximumCachedQueryCount;
    long long _maximumCachedResultCount;
    CLLocationManager *_locationManager;
    NSArray *_supportedGeoSources;
    CLInUseAssertion *_assertion;
    double _guidStartTime;
    NSDictionary *_bag;
    NSDictionary *_namedResources;
    NSString *_locale;
    NSString *_storeFrontId;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_collectedData;
    NSURLSessionDataTask *_guidDataTask;
    NSMutableData *_guidCollectedData;
    NSDictionary *_resources;
    NSMutableArray *_queryTasks;
    <PRSSessionController> *_client;
    PRSFairPlaySAPSession *_SAPSession;
}

@property bool active;
@property bool parsecEnabled;
@property bool mescalEnabled;
@property bool ledbellyEnabled;
@property(retain) NSString * userId;
@property bool useGUID;
@property(readonly) NSURL * searchURL;
@property(readonly) NSURL * webSearchURL;
@property(readonly) NSURL * feedbackURL;
@property(readonly) NSURL * guidURL;
@property(readonly) NSURL * fallbackSearchURL;
@property(readonly) NSURL * fallbackWebSearchURL;
@property(readonly) NSURL * fallbackFeedbackURL;
@property(readonly) NSURL * fallbackGuidURL;
@property(readonly) bool limitedFeedback;
@property(readonly) double feedbackStatsInterval;
@property(readonly) double retryAfter;
@property(readonly) double searchRenderTimeout;
@property(readonly) NSError * error;
@property(readonly) NSString * serverVersion;
@property long long status;
@property(readonly) long long minimumStringLength;
@property(readonly) long long maximumCachedQueryCount;
@property(readonly) long long maximumCachedResultCount;
@property(readonly) CLLocationManager * locationManager;
@property(readonly) CLLocation * location;
@property(readonly) NSArray * supportedGeoSources;
@property(readonly) CLInUseAssertion * assertion;
@property double guidStartTime;
@property(readonly) NSDictionary * bag;
@property(readonly) NSDictionary * namedResources;
@property(readonly) NSString * locale;
@property(readonly) NSString * storeFrontId;
@property(readonly) NSString * waldoIP;
@property(retain) NSURLSessionDataTask * dataTask;
@property(retain) NSMutableData * collectedData;
@property(retain) NSURLSessionDataTask * guidDataTask;
@property(retain) NSMutableData * guidCollectedData;
@property(retain) NSDictionary * resources;
@property(retain) NSMutableArray * queryTasks;
@property <PRSSessionController> * client;
@property(retain) PRSFairPlaySAPSession * SAPSession;
@property(readonly) double sessionStartTime;
@property(getter=isEnabled,readonly) bool enabled;
@property(readonly) NSArray * supportedDomainIdentifiers;
@property(readonly) NSURLSessionConfiguration * urlSessionConfiguration;
@property(readonly) int useLedBelly;
@property(readonly) NSString * userAgent;
@property(readonly) NSString * applicationNameForUserAgent;
@property(readonly) NSString * parsecBaseURL;

+ (id)sharedHandler;

- (id)assertion;
- (id)namedResources;
- (id)supportedGeoSources;
- (double)feedbackStatsInterval;
- (bool)limitedFeedback;
- (id)fallbackGuidURL;
- (id)guidURL;
- (void)setUseGUID:(bool)arg1;
- (void)setLedbellyEnabled:(bool)arg1;
- (void)setMescalEnabled:(bool)arg1;
- (void)setParsecEnabled:(bool)arg1;
- (void)setSAPSession:(id)arg1;
- (id)SAPSession;
- (bool)mescalEnabled;
- (id)guidDataTask;
- (void)_setupSAPSession:(id)arg1;
- (void)setGuidCollectedData:(id)arg1;
- (id)guidCollectedData;
- (id)queryTasks;
- (void)setQueryTasks:(id)arg1;
- (int)useLedBelly;
- (bool)useGUID;
- (void)setGuidDataTask:(id)arg1;
- (id)_locationManagerBundle;
- (void)_deactivateLocationManager;
- (void)_activateLocationManager;
- (void)_setupLocationManager;
- (id)supportedDomainIdentifiers;
- (bool)ledbellyEnabled;
- (id)parsecBaseURL;
- (void)signRequest:(id)arg1 withData:(id)arg2;
- (id)fallbackFeedbackURL;
- (id)feedbackURL;
- (id)resourceWithID:(id)arg1;
- (double)searchRenderTimeout;
- (id)bag;
- (void)triggerTaskWhenReady:(id)arg1;
- (long long)minimumStringLength;
- (long long)maximumCachedQueryCount;
- (long long)maximumCachedResultCount;
- (id)storeFrontId;
- (id)locationSourceForLocation:(id)arg1;
- (id)fallbackSearchURL;
- (id)fallbackWebSearchURL;
- (id)urlSessionConfiguration;
- (void)loadUserID;
- (id)webSearchURL;
- (bool)parsecEnabled;
- (void)reloadBagFromClient:(id)arg1;
- (void)setGuidStartTime:(double)arg1;
- (double)guidStartTime;
- (id)waldoIP;
- (void)setCollectedData:(id)arg1;
- (double)sessionStartTime;
- (id)collectedData;
- (void)removeTask:(id)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (double)retryAfter;
- (id)serverVersion;
- (void)setDataTask:(id)arg1;
- (id)dataTask;
- (id)locationManager;
- (id)resources;
- (id)searchURL;
- (void)setResources:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (id)location;
- (bool)active;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (bool)isEnabled;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setClient:(id)arg1;
- (id)init;
- (id)locale;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)client;
- (id)error;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setActive:(bool)arg1;

@end
