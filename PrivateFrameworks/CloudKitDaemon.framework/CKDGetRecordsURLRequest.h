/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet, NSArray, NSDictionary, NSMutableDictionary;

@interface CKDGetRecordsURLRequest : CKDURLRequest  {
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchedBlock;

    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    unsigned long long _recordCount;
    NSMutableDictionary *_recordIDByRequestID;
    NSSet *_desiredKeys;
}

@property(retain) NSSet * assetFieldNamesToPublishURLs;
@property unsigned long long requestedTTL;
@property unsigned long long URLOptions;
@property(copy) id recordFetchedBlock;
@property(retain) NSArray * recordIDs;
@property(retain) NSDictionary * recordIDsToETags;
@property(retain) NSDictionary * recordIDsToVersionETags;
@property unsigned long long recordCount;
@property(retain) NSMutableDictionary * recordIDByRequestID;
@property(retain) NSSet * desiredKeys;


- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;
- (void)setRecordCount:(unsigned long long)arg1;
- (unsigned long long)recordCount;
- (id)recordIDByRequestID;
- (id)assetFieldNamesToPublishURLs;
- (id)recordIDsToETags;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (bool)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (id)recordIDsToVersionETags;
- (void)setURLOptions:(unsigned long long)arg1;
- (unsigned long long)URLOptions;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (unsigned long long)requestedTTL;
- (void)setRecordIDs:(id)arg1;
- (id)recordIDs;
- (id)desiredKeys;
- (void)setRecordFetchedBlock:(id)arg1;
- (id)recordFetchedBlock;
- (void)setDesiredKeys:(id)arg1;
- (int)operationType;
- (void).cxx_destruct;

@end
