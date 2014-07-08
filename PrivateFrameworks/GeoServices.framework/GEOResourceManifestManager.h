/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSHashTable, GEOActiveTileGroup, NSLock, GEOLocalizationRegionsInfo, NSSet, GEOResourceManifestConfiguration, <GEOResourceManifestServerProxy>, NSDictionary, NSMutableArray;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate> {
    <GEOResourceManifestServerProxy> *_serverProxy;
    NSHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
    NSLock *_activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    bool_needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    NSLock *_tileGroupObserversLock;
    NSLock *_closedCountLock;
    long long _closedCount;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    bool_isUpdatingManifest;
    bool_isLoadingResources;
    NSLock *_resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
}

@property(readonly) <GEOResourceManifestServerProxy> * serverProxy;
@property(readonly) bool hasActiveTileGroup;
@property(readonly) GEOActiveTileGroup * activeTileGroup;

+ (void)disableServerConnection;
+ (void)setHiDPI:(bool)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (id)modernManager;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (id)modernManagerForConfiguration:(id)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)sharedManager;

- (id)serverProxy;
- (void)updateManifestIfNecessary:(id)arg1;
- (id)detailedDescription;
- (void)devResourcesFolderDidChange;
- (void)forceUpdate;
- (unsigned int)activeTileGroupIdentifier;
- (void)addNetworkActivityHandler:(id)arg1;
- (id)_activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)mapMatchingZoomLevel;
- (void)removeServerProxyObserver:(id)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)closeServerConnection;
- (void)_notifyObserversOfResourcesChange;
- (void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (bool)hasResourceManifest;
- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (void)_buildResourceNamesToPaths;
- (bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (int)mapMatchingTileSetStyle;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(id)arg3;
- (void)stopObservingDevResources;
- (void)startObservingDevResources;
- (void)openServerConnection;
- (id)authToken;
- (id)allResourceNames;
- (id)pathForResourceWithName:(id)arg1;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (void)updateManifest:(id)arg1;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 useStatusCodes:(bool*)arg2;
- (bool)hasActiveTileGroup;
- (id)activeTileGroup;
- (void)removeTileGroupObserver:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (void)_localeChanged:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)dealloc;

@end
