/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob  {
    NSDictionary *_metadata;
}

@property(retain) NSDictionary * metadata;

+ (void)updateAlbumMetadata:(id)arg1;

- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)run;
- (void)dealloc;
- (id)description;

@end
