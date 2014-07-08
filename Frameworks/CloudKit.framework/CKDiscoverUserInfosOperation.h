/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation  {
    NSArray *_emailAddresses;
    NSArray *_userRecordIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _discoverUserInfosCompletionBlock;

    NSMutableDictionary *_emailsToUserInfos;
    NSMutableDictionary *_userRecordIDsToUserInfos;
}

@property(copy) NSArray * emailAddresses;
@property(copy) NSArray * userRecordIDs;
@property(copy) id discoverUserInfosCompletionBlock;
@property(retain) NSMutableDictionary * emailsToUserInfos;
@property(retain) NSMutableDictionary * userRecordIDsToUserInfos;


- (void)setEmailAddresses:(id)arg1;
- (void)setUserRecordIDsToUserInfos:(id)arg1;
- (void)setEmailsToUserInfos:(id)arg1;
- (id)userRecordIDsToUserInfos;
- (id)emailsToUserInfos;
- (id)discoverUserInfosCompletionBlock;
- (void)setUserRecordIDs:(id)arg1;
- (id)userRecordIDs;
- (id)emailAddresses;
- (void)setDiscoverUserInfosCompletionBlock:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
