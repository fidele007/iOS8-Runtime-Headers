/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class ACAccountStore, ACAccount;

@interface CKDBackingiOSAccount : CKDBackingAccount  {
    ACAccountStore *_accountStore;
    ACAccount *_parentAppleAccount;
}

@property(readonly) ACAccountStore * accountStore;
@property(readonly) ACAccount * ckAccount;
@property(retain) ACAccount * parentAppleAccount;

+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(id)arg3;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)primaryAccountInStore:(id)arg1;

- (void)setParentAppleAccount:(id)arg1;
- (id)parentAppleAccount;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)ckAccount;
- (id)cloudKitAuthToken;
- (id)dsid;
- (id)iCloudAuthToken;
- (id)primaryEmail;
- (id)accountStore;
- (id)identifier;
- (void).cxx_destruct;

@end
