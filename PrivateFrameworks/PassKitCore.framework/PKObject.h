/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSData, NSString, PKContent, NSURL, PKImageSet, PKDataAccessor, NSDate, PKDisplayProfile;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {
    PKImageSet *_imageSets[5];
    NSString *_uniqueID;
    NSData *_manifestHash;
    PKDataAccessor *_dataAccessor;
    PKDisplayProfile *_displayProfile;
    double _preferredImageScale;
    NSString *_preferredImageSuffix;
    NSURL *_webServiceURL;
    NSString *_authenticationToken;
    long long _settings;
    long long _shareCount;
    PKContent *_content;
}

@property(retain,readonly) NSData * archiveData;
@property(retain,readonly) NSData * serializedFileWrapper;
@property(retain,readonly) NSDate * modificationDate;
@property(copy) NSString * uniqueID;
@property(copy) NSData * manifestHash;
@property(retain) PKDataAccessor * dataAccessor;
@property(retain) PKDisplayProfile * displayProfile;
@property double preferredImageScale;
@property(retain) NSString * preferredImageSuffix;
@property(copy) NSURL * webServiceURL;
@property(copy) NSString * authenticationToken;
@property long long settings;
@property long long shareCount;
@property(readonly) bool remoteAssetsDownloaded;
@property(retain) PKContent * content;

+ (bool)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void)setPreferredImageSuffix:(id)arg1;
- (void)setPreferredImageScale:(double)arg1;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (bool)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (id)contentLoadedIfNeeded;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (id)localizedString:(id)arg1;
- (id)allImageSetsLoadedIfNecessary;
- (void)flushLoadedImageSets;
- (void)flushLoadedContent;
- (id)authenticationToken;
- (id)webServiceURL;
- (void)setAuthenticationToken:(id)arg1;
- (void)setWebServiceURL:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)loadImageSetSync:(long long)arg1 preheat:(bool)arg2;
- (void)loadContentSync;
- (void)setDisplayProfile:(id)arg1;
- (void)setShareCount:(long long)arg1;
- (long long)shareCount;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (id)displayProfile;
- (id)preferredImageSuffix;
- (bool)isImageSetLoaded:(long long)arg1;
- (void)flushFormattedFieldValues;
- (bool)isContentLoaded;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (id)initWithDataAccessor:(id)arg1;
- (id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (void)downloadRemoteAssetsWithCompletion:(id)arg1;
- (void)requestUpdateWithCompletion:(id)arg1;
- (void)noteShared;
- (void)setDataAccessor:(id)arg1;
- (id)dataAccessor;
- (bool)remoteAssetsDownloaded;
- (id)serializedFileWrapper;
- (id)manifestHash;
- (void)revocationStatusWithCompletion:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (void)loadContentAsyncWithCompletion:(id)arg1;
- (void)loadImageSetAsync:(long long)arg1 preheat:(bool)arg2 withCompletion:(id)arg3;
- (void)setUniqueID:(id)arg1;
- (void)setContent:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (long long)settings;
- (id)archiveData;
- (void)setSettings:(long long)arg1;
- (id)uniqueID;
- (id)content;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)modificationDate;
- (double)preferredImageScale;

@end
