/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLXPCTransaction, NSFileManager, PLPhotoLibrary, NSDictionary;

@interface PLModelMigrator : NSObject  {
    double startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    long long _photoLibraryOnce;
    NSDictionary *_syncedPropertiesByUUID;
}

@property(retain) NSFileManager * fileManager;
@property(readonly) PLPhotoLibrary * photoLibrary;

+ (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (void)recalculateCachedCounts;
+ (bool)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (bool)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2;
+ (bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (bool)_batchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(id)arg4 error:(id*)arg5;
+ (bool)_populateUnmanagedAdjustmentsFromFileSystemInManagedObjectContext:(id)arg1;
+ (void)fixupUnmanagedAdjustmentsFromFileSystemForAsset:(id)arg1;
+ (bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (bool)_fixupEditorBundleIDsInStore:(id)arg1;
+ (bool)_forceDupeAnalysis;
+ (bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (bool)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (bool)_resetDupesAnalysisInStore:(id)arg1 resetHashes:(bool)arg2;
+ (bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (bool)_fixupImportedAssetsInStore:(id)arg1;
+ (bool)_fixupImportedEventsInStore:(id)arg1;
+ (bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(bool)arg1 inStore:(id)arg2;
+ (bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (void)applyDataProtectionToPhotosPaths:(id)arg1;
+ (bool)skipDataProtectionForFilePath:(id)arg1;
+ (bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStore:(id)arg1;
+ (bool)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
+ (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
+ (bool)_fixVideoDimensionsForAsset:(id)arg1;
+ (void)fixAddedDateForAsset:(id)arg1;
+ (bool)_removeEvents:(id)arg1;
+ (bool)_disableICloudPhoto;
+ (bool)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (bool)_fixupCloudResourcesInStore:(id)arg1;
+ (bool)_fixupBrokenBurstPicksInStore:(id)arg1;
+ (bool)_removeAllWallpaperAssetsInStore:(id)arg1;
+ (bool)_fixupSharedStreamOrientationsInStore:(id)arg1;
+ (bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (bool)_fixCorruptedOrientationsInStore:(id)arg1;
+ (bool)_convertManagedAdjustmentsInStore:(id)arg1;
+ (bool)_fixVideoDimensionsInStore:(id)arg1;
+ (bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (bool)_generateAddedDateForAssetsInStore:(id)arg1;
+ (bool)_fixupAssetPersistence:(id)arg1;
+ (bool)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(bool)arg2;
+ (bool)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (bool)_resetAndReimportUnmanagedAdjustmentInStore:(id)arg1;
+ (bool)_setupRootFolderInStore:(id)arg1;
+ (bool)_addLocationHashesToAssets:(id)arg1;
+ (bool)_addAlbumOrderKeys:(id)arg1;
+ (bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(bool)arg2;
+ (bool)_rebuildAllMomentsInStore:(id)arg1;
+ (bool)_invalidateSearchIndexDataInStore:(id)arg1;
+ (bool)_postProcessFromVersion6006Store:(id)arg1;
+ (bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (bool)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (bool)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (bool)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (bool)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (id)managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (id)nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (id)eventNameFromDate:(id)arg1;
+ (id)_newSyncedPropertiesByAssetUUIDs:(bool)arg1;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(bool)arg1;
+ (bool)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int*)arg3;
+ (void)setDidImportFileSystemAssets:(bool)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (id)modelMigrator;
+ (id)sharedModelMigratorForImport;
+ (void)loadFileSystemDataIntoDatabase;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (void)applyDataProtectionToAllPhotosFiles;
+ (void)_createDatabase;
+ (bool)didCreateSqliteErrorFileForLightweightMigration;
+ (bool)_resetThumbnailsAndInitiateRebuildRequest;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (void)validateCurrentModelVersion;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id*)arg1;
+ (bool)postProcessThumbnailsOnly;
+ (bool)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (int)currentModelVersion;
+ (void)waitForDataMigratorToExit;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
+ (bool)isPostProcessingLightweightMigration;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id)arg1;
+ (void)createDatabase;
+ (bool)restartingAfterOTAMigration;
+ (bool)restartingAfterRestoreFromBackup;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)generateAssetUUIDForPathPlist;
+ (bool)didImportFileSystemAssets;
+ (void)repairPotentialModelCorruption;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;

- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(bool)arg5;
- (id)fileManager;
- (id)importFileSystemImportAssets:(id)arg1 forceUpdate:(bool)arg2;
- (id)_orderedAssetsToImportCameraRollOnly:(bool)arg1;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (bool)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(bool*)arg3 isCPLAssets:(bool*)arg4 cameraRollOnly:(bool)arg5;
- (void)_importAllDCIMAssets;
- (void)setFileManager:(id)arg1;
- (id)initWithImplicitTransaction:(bool)arg1;
- (void)recalculateCachedCountsWithSemaphore:(id)arg1;
- (void)cleanupModelAfterRestoreFromiTunes;
- (void)loadFileSystemDataIntoDatabase;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
- (id)photoLibrary;
- (void)repairPotentialModelCorruption;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (id)init;
- (void)dealloc;

@end
