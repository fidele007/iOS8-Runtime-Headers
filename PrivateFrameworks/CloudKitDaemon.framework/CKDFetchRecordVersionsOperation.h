/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, NSObject<OS_dispatch_group>;

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation  {
    bool_isDeleted;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordVersionFetchedBlock;

    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSObject<OS_dispatch_group> *_fetchVersionsGroup;
}

@property(copy) id recordVersionFetchedBlock;
@property(retain) NSArray * recordIDs;
@property(retain) NSArray * desiredKeys;
@property(retain) NSString * minimumVersionETag;
@property bool isDeleted;
@property(retain) NSObject<OS_dispatch_group> * fetchVersionsGroup;


- (void)_handleRecordVersionsFecthedForID:(id)arg1 isDeleted:(bool)arg2 versions:(id)arg3 responseCode:(id)arg4;
- (id)recordVersionFetchedBlock;
- (id)fetchVersionsGroup;
- (void)setFetchVersionsGroup:(id)arg1;
- (void)setRecordVersionFetchedBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setIsDeleted:(bool)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (id)minimumVersionETag;
- (void)setRecordIDs:(id)arg1;
- (id)recordIDs;
- (id)desiredKeys;
- (void)setDesiredKeys:(id)arg1;
- (bool)isDeleted;
- (void)main;
- (void)finishWithError:(id)arg1;
- (void).cxx_destruct;

@end
