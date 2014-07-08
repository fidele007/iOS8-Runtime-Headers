/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable  {
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
}

@property(readonly) CallHistoryDBHandle * dbStoreHandle;


- (id)dbStoreHandle;
- (bool)createCallRecords:(id)arg1;
- (bool)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (bool)willHandleNotification_sync:(id)arg1;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2;
- (id)updateAllCallRecords:(id)arg1 error:(id*)arg2;
- (id)updateCallRecords_sync:(id)arg1 error:(id*)arg2;
- (id)updateCallRecords:(id)arg1 error:(id*)arg2;
- (bool)createCallRecords:(id)arg1 error:(id*)arg2;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (bool)createCallRecord:(id)arg1 error:(id*)arg2;
- (bool)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2;
- (bool)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2;
- (bool)deleteAll:(id*)arg1;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (void)handleCallRecordSave_sync:(id)arg1;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(bool*)arg2 isOriginated:(bool*)arg3;
- (id)timerLastReset;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (bool)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAll;
- (bool)createCallRecord:(id)arg1;
- (void)resetTimers;
- (id)timerLifetime;
- (id)timerOutgoing;
- (id)timerIncoming;
- (bool)deleteObjectsWithUniqueIds:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (bool)deleteAll;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
