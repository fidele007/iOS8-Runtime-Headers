/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMHandleRegistrar : NSObject  {
    id _internal;
}

@property long long nameStyle;

+ (id)sharedInstance;

- (void)_dumpOutAllIMHandles;
- (void)setNameStyle:(long long)arg1;
- (long long)nameStyle;
- (void)_addressBookChanged;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(bool)arg2;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (id)allIMHandles;
- (id)siblingsForIMHandle:(id)arg1;
- (id)_chatSiblingsForHandle:(id)arg1;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (id)_accountSiblingsForHandle:(id)arg1;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (bool)_buildingChatSiblings;
- (void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (void)unregisterIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (id)init;
- (void)dealloc;

@end
