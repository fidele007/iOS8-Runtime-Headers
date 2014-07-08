/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface PLChangeNode : NSObject  {
    NSObject<OS_xpc_object> *_hubConnection;
    Class _changeHubClass;
    unsigned char _nodeUUID[16];
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
}

+ (id)sharedNode;
+ (id)localChangeEventFromChangeHubEvent:(id)arg1;
+ (id)_descriptionForEvent:(id)arg1;

- (void)printChangeStore;
- (void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (bool)isEventOriginatingFromHere:(id)arg1;
- (void)processRemoteEvents:(id)arg1;
- (void)forceUserInterfaceReload;
- (void)handleRemoteChangeHubRequest:(id)arg1;
- (void)processDelayedAlbumCountUpdates:(id)arg1 transaction:(id)arg2;
- (void)processDelayedAlbumOrderUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)processDelayedAssetsForFileSystemPersistency:(id)arg1 transaction:(id)arg2;
- (void)processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (id)sendEventToChangeHub:(id)arg1 transaction:(id)arg2;
- (id)createXPCObjectFromDidSaveNotification:(id)arg1 updatedAttributesByObjectID:(id)arg2 updatedRelationshipsByObjectID:(id)arg3;
- (void)sendChangeHubEventForDidSaveNotification:(id)arg1;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)_processDeletionsFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForFileSystemPersistencyFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumOrderUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedDupeAnalysisFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processCloudFeedUpdateDataFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)connectManagedObjectContext:(id)arg1;
- (void)fetchNewEventsFromChangeHub;
- (void)setupHubConnection;
- (id)init;
- (void)dealloc;

@end
