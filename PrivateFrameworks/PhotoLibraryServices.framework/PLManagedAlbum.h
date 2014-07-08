/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSString, PLManagedAsset, NSArray, NSOrderedSet, NSSet, UIImage, NSDictionary, NSURL, NSMutableOrderedSet, NSNumber;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol> {
    bool_resolvingConflicts;
    bool_albumShouldBeAutomaticallyDeleted;
    bool_needsPersistenceUpdate;
}

@property(retain) NSOrderedSet * assets;
@property(retain) NSSet * assetOrders;
@property bool resolvingConflicts;
@property bool albumShouldBeAutomaticallyDeleted;
@property bool needsPersistenceUpdate;
@property(retain,readonly) NSString * uuid;
@property(retain,readonly) NSString * title;
@property(copy,readonly) NSString * localizedTitle;
@property(readonly) unsigned long long approximateCount;
@property(readonly) unsigned long long assetsCount;
@property(readonly) unsigned long long photosCount;
@property(readonly) unsigned long long videosCount;
@property(readonly) bool isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) bool canShowComments;
@property(readonly) bool canShowAvalancheStacks;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property bool hasUnseenContentBoolValue;
@property(copy,readonly) NSString * name;
@property(retain,readonly) UIImage * posterImage;
@property(readonly) bool isLibrary;
@property(readonly) bool isCameraAlbum;
@property(readonly) bool isPanoramasAlbum;
@property(readonly) bool isWallpaperAlbum;
@property(readonly) bool isPhotoStreamAlbum;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isStandInAlbum;
@property(readonly) bool isFolder;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isFamilyCloudSharedAlbum;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property(readonly) bool isRecentlyAddedAlbum;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(retain,readonly) NSURL * groupURL;
@property(copy,readonly) id sortingComparator;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(retain,readonly) NSMutableOrderedSet * userEditableAssets;

+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)assetOrderByAbumUUIDs;
+ (id)pathToAssetAlbumOrderStructure;
+ (id)baseSearchIndexPredicate;
+ (void)clearAssetOrderByAbumUUIDs;

- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)setResolvingConflicts:(bool)arg1;
- (bool)resolvingConflicts;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (void)_recalculateCachedCounts;
- (unsigned long long)_cachedCountForMigration;
- (void)_updateKeyAssetsAndCountsIfNeeded;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (void)getInternalUserEditableAssets:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (unsigned long long)countOfInternalUserEditableAssets;
- (id)childKeyForOrdering;
- (id)sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)childToOrderKeyMap;
- (bool)supportsAssetOrderKeys;
- (id)userEditableAssets;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (id)_assetOrderByAssetUUID;
- (unsigned long long)_albumStandInCount;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)_keysToBeObserved;
- (id)_expectedKeyAssets:(id)arg1;
- (void)_updateCountsIfNeeded:(id)arg1;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (bool)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (bool)needsPersistenceUpdate;
- (void)setAlbumShouldBeAutomaticallyDeleted:(bool)arg1;
- (bool)albumShouldBeAutomaticallyDeleted;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)removePersistedFileSystemData;
- (bool)isValidKindForPersistence;
- (id)newOrderKeyChild:(id)arg1;
- (id)searchIndexContents;
- (void)persistMetadataToFileSystem;
- (void)refreshAssets;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (unsigned long long)videosCount;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)mutableAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (unsigned long long)photosCount;
- (void)didSave;
- (void)willSave;
- (void)prepareForDeletion;
- (bool)isEmpty;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
