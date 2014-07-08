/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCLocalItem, NSString;

@interface BRCPackageManifestForUpload : NSObject  {
    BRCAccountSession *_session;
    unsigned long long _manifestFileID;
    long long _firstAssetRankMissingSignature;
    unsigned long long _firstPackageItemIndexMissingSignature;
    BRCLocalItem *_item;
    NSString *_manifestPath;
}

@property(readonly) BRCLocalItem * item;
@property(readonly) NSString * manifestPath;


- (bool)finishPackageUploadWithRecord:(id)arg1 error:(id*)arg2;
- (id)manifestPath;
- (id)constructPackageAndWriteManifestWithError:(id*)arg1;
- (id)initWithLocalItem:(id)arg1;
- (void).cxx_destruct;
- (id)item;

@end
