/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, AAFamilyDetailsResponse, SSFamilyCircle, NSOperationQueue, NSNumber, NSCache;

@interface SKUIFamilyCircleController : NSObject  {
    SSFamilyCircle *_iTunesFamily;
    AAFamilyDetailsResponse *_iCloudFamily;
    NSNumber *_lastAccountID;
    NSCache *_imageCache;
    NSOperationQueue *_opQueue;
    SKUIClientContext *_clientContext;
    bool_hasLoaded;
}

@property(retain) SKUIClientContext * clientContext;
@property(readonly) bool hasLoaded;
@property(readonly) SSFamilyCircle * familyCircle;
@property(readonly) AAFamilyDetailsResponse * iCloudFamily;

+ (id)sharedController;

- (id)iCloudFamily;
- (void)_setProfilePicture:(id)arg1 forMember:(id)arg2;
- (void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4;
- (id)familyCircle;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (bool)hasLoaded;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadData;

@end
