/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSDictionary, NSOperationQueue, NSURL, NSData;

@interface SCNSceneSource : NSObject  {
    id _reserved;
    struct __C3DSceneSource { } *_sceneSource;
    struct __C3DScene { } *_lastLoadedScene;
    NSDictionary *_lastOptions;
    NSOperationQueue *_downloadingQueue;
    bool_sceneLoaded;
    NSDictionary *_sceneSourceOptions;
}

@property(readonly) NSURL * url;
@property(readonly) NSData * data;

+ (id)sceneFileTypes;
+ (id)sceneTypes;
+ (void)_removeCachedSceneSourceIfNeededForURL:(id)arg1;
+ (void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3;
+ (id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2;
+ (bool)_shouldCacheWithOptions:(id)arg1;
+ (id)sceneSourceWithData:(id)arg1 options:(id)arg2;
+ (id)sceneSourceWithURL:(id)arg1 options:(id)arg2;
+ (id)SCNJSExportProtocol;

- (id)performConsistencyCheck;
- (bool)canExportToColladaWithNoDataLoss;
- (long long)sourceStatus;
- (id)IDsOfEntriesWithClass:(Class)arg1;
- (id)entryWithID:(id)arg1 withClass:(Class)arg2;
- (struct __C3DSceneSource { }*)sceneSourceRef;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2;
- (long long)countOfScenes;
- (bool)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(id)arg3 entryObjectConstructor:(id)arg4;
- (id)entriesPassingTest:(id)arg1;
- (id)identifiersOfEntriesWithClass:(Class)arg1;
- (id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2;
- (id)sceneWithOptions:(id)arg1 statusHandler:(id)arg2;
- (id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(id)arg3;
- (id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(id)arg3;
- (id)sceneWithOptions:(id)arg1 error:(id*)arg2;
- (long long)sceneCount;
- (id)sceneSourceOptions;
- (struct __C3DScene { }*)_createSceneRefWithOptions:(id)arg1 statusHandler:(id)arg2;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (struct __C3DLibrary { }*)library;
- (id)url;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)description;

@end
