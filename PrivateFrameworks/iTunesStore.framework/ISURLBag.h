/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSNetworkConstraints, NSDictionary, NSArray, NSSet, NSString, SSURLBagContext;

@interface ISURLBag : NSObject  {
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    NSDictionary *_dictionary;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    bool_loadedFromDiskCache;
    NSString *_storeFrontIdentifier;
}

@property(readonly) NSSet * availableStorefrontItemKinds;
@property(getter=isValid,readonly) bool valid;
@property double invalidationTime;
@property bool loadedFromDiskCache;
@property(copy) NSString * storeFrontIdentifier;
@property(copy) SSURLBagContext * URLBagContext;
@property(readonly) NSDictionary * URLBagDictionary;
@property(readonly) long long versionIdentifier;

+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;
+ (bool)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;
+ (bool)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (bool)_allowUnsignedBags;
+ (void)_loadItemKindURLBagKeyMap;

- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;
- (id)URLBagDictionary;
- (id)URLBagContext;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (id)storeFrontIdentifier;
- (void)setLoadedFromDiskCache:(bool)arg1;
- (bool)loadedFromDiskCache;
- (void)setURLBagContext:(id)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (void)setInvalidationTimeWithExprationInterval:(double)arg1;
- (id)availableStorefrontItemKinds;
- (bool)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (bool)urlIsTrusted:(id)arg1;
- (bool)shouldSendGUIDForURL:(id)arg1;
- (id)copyExtraHeadersForURL:(id)arg1;
- (void)setInvalidationTime:(double)arg1;
- (double)invalidationTime;
- (id)networkConstraintsForDownloadKind:(id)arg1;
- (id)urlForKey:(id)arg1;
- (void)_writeURLResolutionCacheFile;
- (void)_writeNetworkConstraintsCacheFile;
- (long long)versionIdentifier;
- (id)_networkConstraintsCachePath;
- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (id)_copyGUIDSchemesFromDictionary:(id)arg1;
- (id)_copyGUIDPatternsFromDictionary:(id)arg1;
- (void)_setDictionary:(id)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;
- (bool)isValid;
- (void)dealloc;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
