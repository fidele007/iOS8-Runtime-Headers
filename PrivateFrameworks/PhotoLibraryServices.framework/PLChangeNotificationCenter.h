/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSNumber, NSDictionary, PLManagedObjectContext, NSMutableSet, NSMutableArray, NSMapTable, NSNotificationCenter;

@interface PLChangeNotificationCenter : NSObject  {
    bool_isProcessingRemoteDidSave;
    int _cameraPreviewChangeListenerCount;
    NSNumber *_cameraPreviewChangedToken;
    NSMutableArray *_snapshots;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    } _changedAlbumLists;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    } _albumListsContent;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    } _changedAlbums;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    } _albumsContent;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    } _changedAssets;
    NSMutableSet *_assetsWithCloudCommentChanges;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    } _momentsContent;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    } _changedMoments;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    } _momentListsContent;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    } _changedMomentLists;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    } _changedCloudFeedEntries;
    PLManagedObjectContext *_moc;
    NSMutableArray *_enqueuedNotifications;
    NSMapTable *_changedInflightAssetsAlbumsToSnapshots;
    NSDictionary *_remoteNotificationData;
    bool_isOverloaded;
    NSMutableSet *_overloadedObjects;
}

@property(retain,readonly) NSNotificationCenter * backingCenter;
@property(readonly) bool _shouldForceFetchingAlbumsToReload;

+ (void)forceFetchingAlbumReload;
+ (id)allManagedObjectKeysStrategy;
+ (void)getInsertedAssetCount:(unsigned long long*)arg1 deletedAssetCount:(unsigned long long*)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;
+ (id)defaultCenter;

- (void)removeCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)addCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)addInvitationRecordsObserver:(id)arg1;
- (void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(id)arg2;
- (id)_toOneRelationshipsOfInterestForObject:(id)arg1;
- (id)_attributesOfInterestForObject:(id)arg1;
- (id)_orderedRelationshipsOfInterestForObject:(id)arg1;
- (void)inflightAssetsAlbumWillChange:(id)arg1;
- (void)removeShouldReloadObserver:(id)arg1;
- (void)addShouldReloadObserver:(id)arg1;
- (void)removeAssetChangeObserver:(id)arg1;
- (void)addAssetChangeObserver:(id)arg1;
- (void)removeCloudFeedEntriesObserver:(id)arg1;
- (void)addCloudFeedEntriesObserver:(id)arg1;
- (void)removeInvitationRecordsObserver:(id)arg1;
- (void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)_unregisterForCameraPreviewWellChanges;
- (void)_registerForCameraPreviewWellChanges;
- (void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(bool)arg3;
- (id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(bool)arg2;
- (id)_keysOfInterestForObject:(id)arg1;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_evaluateUpdatedAssets;
- (void)_evaluateContainersWithUpdatedContent;
- (bool)_shouldForceFetchingAlbumsToReload;
- (id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1;
- (bool)_isInterestedInUpdatesOfObject:(id)arg1;
- (void)_enqueueAssetContainerChangeNotification:(id)arg1;
- (void)enqueueNotification:(id)arg1;
- (void)_enqueueInvitationRecordsChangeNotification:(id)arg1;
- (void)_enqueueAlbumChangeNotification:(id)arg1;
- (void)_enqueueAssetContainerListChangeNotification:(id)arg1;
- (id)_snapshotForObject:(id)arg1;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id*)arg3 forKeys:(const id*)arg4 count:(unsigned long long)arg5;
- (void)_postEnqueuedNotifications;
- (void)_cleanupState;
- (void)_enqueueAssetChangeNotification;
- (void)_enqueueCloudFeedEntriesChangeNotifications;
- (void)_enqueueCloudCommentsNotifications;
- (void)_enqueueMomentListChangeNotifications;
- (void)_enqueueAlbumListNotifications;
- (void)_enqueueMomentChangeNotifications;
- (void)_enqueueAlbumNotifications;
- (void)_enqueuePhotoLibraryNotifications;
- (id)descriptionOfSplitChanges;
- (void)_sendNotificationsForSplitChanges;
- (void)_splitContextDidChangeNotification:(id)arg1;
- (void)_saveCurrentStateForAlbum:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1;
- (id)backingCenter;
- (void)processContextDidSaveNotification:(id)arg1;
- (void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(bool)arg3;
- (void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(bool)arg3 isCoalescedEvent:(bool)arg4;
- (void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(bool)arg3;
- (void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(bool)arg3;
- (void)processContextDidChangeNotification:(id)arg1;
- (void)postShouldReloadNotification;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)dealloc;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
