/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, NSArray, NSObject<OS_dispatch_queue>, ACRemoteAccountStoreSession;

@interface ACAccountStore : NSObject  {
    NSString *_clientBundleID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id _daemonAccountStoreDidChangeObserver;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
}

@property(readonly) NSArray * accounts;
@property(readonly) NSString * effectiveBundleID;
@property(retain) ACRemoteAccountStoreSession * remoteAccountStoreSession;

+ (bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;

- (id)effectiveBundleID;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;
- (bool)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)clientTokenForAccount:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id)arg2;
- (bool)isPushSupportedForAccount:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (bool)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (bool)hasAccountWithDescription:(id)arg1;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (bool)permissionForAccountType:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)setPermissionGranted:(bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(bool)arg3 completion:(id)arg4;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 completion:(id)arg2;
- (id)accountsWithAccountType:(id)arg1;
- (id)accounts;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(id)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id)arg4;
- (void)handleURL:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (void)setNotificationsEnabled:(bool)arg1;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(bool)arg2 reason:(id)arg3 completion:(id)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(id)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)_saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (id)remoteAccountStoreSession;
- (void)setRemoteAccountStoreSession:(id)arg1;
- (void)disconnectFromRemoteAccountStore;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)accountWithAppleID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id)arg2;
- (void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(id)arg3;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id)arg2;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id)arg2;
- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id)arg2;
- (id)aa_appleAccounts;
- (id)aa_appleAccountType;
- (id)aa_grandSlamAccountWithUsername:(id)arg1;
- (id)aa_primaryAppleAccount;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsEnabledForDADataclasses:(long long)arg1;
- (id)da_accounts;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(id)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id)arg2;
- (void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(id)arg2;
- (void)da_loadDAAccountsWithCompletion:(id)arg1;
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(bool)arg3 withCompletion:(id)arg4;
- (id)aaui_accountDescriptionFromEmailAddress:(id)arg1;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id)arg3;
- (id)aida_accountForPrimaryiCloudAccount;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(bool)arg3 completion:(id)arg4;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)_primaryiCloudAccount;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_AppleIDAuthenticationAccountType;

@end
