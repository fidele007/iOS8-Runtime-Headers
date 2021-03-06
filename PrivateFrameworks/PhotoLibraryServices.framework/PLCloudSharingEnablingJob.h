/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingEnablingJob : PLCloudSharingJob  {
    bool_enableSharing;
}

@property bool enableSharing;

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(bool)arg2;
+ (void)enableCloudSharing:(bool)arg1;

- (void)setEnableSharing:(bool)arg1;
- (bool)enableSharing;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (bool)shouldArchiveXPCToDisk;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
- (id)description;

@end
