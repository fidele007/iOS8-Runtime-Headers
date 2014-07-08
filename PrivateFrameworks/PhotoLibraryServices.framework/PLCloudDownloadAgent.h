/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;

@interface PLCloudDownloadAgent : PLCloudScenarioProducer  {
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
}


- (void)prefetchResources;
- (void)prefetchPinnedAlbums;
- (void)prefetchLastMonthFullSize;
- (void)prefetchLastWeeksOriginals;
- (void)prefetchAllThumbnails;
- (void)beginPopulatingResourcesOfType:(unsigned long long)arg1 importedSinceDate:(id)arg2;
- (void)beginPrefetchingResources:(id)arg1 withCompletionHandler:(id)arg2;
- (void)beginPopulatingResourcesOfType:(unsigned long long)arg1 matchingPredicates:(id)arg2 inThisOrder:(id)arg3;
- (unsigned long long)batchSize;
- (id)defaultPrefetchOrder;
- (void)metadataChanged:(id)arg1;
- (void)systemStarted:(id)arg1;
- (void)activate;

@end
