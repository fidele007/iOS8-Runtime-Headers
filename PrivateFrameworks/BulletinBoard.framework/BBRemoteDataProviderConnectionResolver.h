/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSXPCListener, NSMutableDictionary, <BBDataProviderStoreDelegate>, NSObject<OS_dispatch_queue>;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary *_xpcConnectionsByService;
    <BBDataProviderStoreDelegate> *_delegate;
}

+ (id)resolverWithDelegate:(id)arg1;

- (void)wakeService:(id)arg1 bundleID:(id)arg2;
- (void)_registerForPublicationNotification;
- (void)loadAllDataProviders;
- (void)performBlockOnDataProviders:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
