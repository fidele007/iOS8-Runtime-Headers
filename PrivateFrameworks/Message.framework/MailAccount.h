/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailboxUid, NSString, MFLock, MFMessageLibrary, MFError, NSMutableDictionary, MFWeakObjectCache;

@interface MailAccount : MFAccount  {
    NSString *_path;
    NSString *_nonPersistentPath;
    MFMailboxUid *_rootMailboxUid;
    struct { 
        unsigned int cacheDirtyCount : 16; 
        unsigned int synchronizationThreadIsRunning : 1; 
        unsigned int cacheHasBeenRead : 1; 
        unsigned int disableCacheWrite : 1; 
        unsigned int _UNUSED_ : 13; 
    } _flags;
    MFMailboxUid *_inboxMailboxUid;
    MFMailboxUid *_draftsMailboxUid;
    MFMailboxUid *_sentMessagesMailboxUid;
    MFMailboxUid *_trashMailboxUid;
    MFMailboxUid *_archiveMailboxUid;
    MFMailboxUid *_junkMailboxUid;
    MFLock *_cachedMailboxenLock;
    MFLock *_deletionLock;
    MFError *_lastConnectionError;
    MFMessageLibrary *_library;
    NSMutableDictionary *_currentChokedActions;
    NSString *_mailboxCachePath;
    MFWeakObjectCache *_messageStoresCache;
    long long _cachedLibraryID;
    MFLock *_cachedLibraryIDLock;
    NSString *_lastKnownHostname;
}

@property(readonly) bool shouldArchiveByDefault;
@property(readonly) bool sourceIsManaged;

+ (void)updateAutoFetchSettings;
+ (void)setDataclassesConsideredActive:(id)arg1;
+ (id)_accountWithPath:(id)arg1;
+ (bool)getConfigurationFromServerForEmail:(id)arg1;
+ (bool)usernameIsEmailAddress;
+ (void)updateEmailAliasesForActiveAccounts;
+ (id)mailboxUidFromActiveAccountsForURL:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)URLForInfo:(id)arg1;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (void)saveStateForAllAccounts;
+ (id)defaultDeliveryAccount;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (void)setGlobalPathForAccounts:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1 includingInactive:(bool)arg2;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)allEmailAddressesIncludingFullUserName:(bool)arg1 includeReceiveAliases:(bool)arg2;
+ (void)resetMailboxTimers;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)lastMailAccountsReloadError;
+ (id)lastMailAccountsReloadDate;
+ (void)setMailAccountLoadOptions:(unsigned long long)arg1;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(bool)arg2;
+ (id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2;
+ (id)infoForURL:(id)arg1;
+ (id)_accountForURL:(id)arg1;
+ (bool)mailboxListingNotificationAreEnabled;
+ (id)outboxMessageStore:(bool)arg1;
+ (id)allMailboxUids;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(bool)arg1;
+ (id)defaultPathForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultAccountDirectory;
+ (id)newAccountWithPath:(id)arg1;
+ (id)outboxMailboxUid;
+ (void)_setOutboxMailboxUid:(id)arg1;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(bool)arg3;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(bool)arg2;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id*)arg2 fullUserName:(id*)arg3 includingInactive:(bool)arg4;
+ (id)mailAccounts;
+ (id)activeAccountsWithError:(id*)arg1;
+ (void)setMailAccounts:(id)arg1 saveIfChanged:(bool)arg2;
+ (id)mailAccountsWithError:(id*)arg1;
+ (void)enableMailboxListingNotifications:(bool)arg1;
+ (void)_invalidateAccounts:(id)arg1 missingFromNewAccounts:(id)arg2;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (id)_loadAllAccountsWithOptions:(unsigned long long)arg1 error:(id*)arg2;
+ (void)disableMailboxListingNotifications;
+ (void)_removeLookAsideValuesNotInAccountList:(id)arg1;
+ (id)existingDAMailAccountForDAAccount:(id)arg1;
+ (id)_loadDataAccessAccountsWithError:(id*)arg1;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (bool)isPredefinedAccountType;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (bool)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (void)setMailAccounts:(id)arg1;
+ (id)activeAccounts;
+ (id)defaultMailAccountForDelivery;
+ (void)reloadAccounts;
+ (void)initialize;
+ (void)mf_emptyReceivingEmailAddressesCache;
+ (id)mf_receivingEmailAddressesCache;

- (void)setReceiveEmailAliasAddresses:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (id)emailAddressesAndAliases;
- (id)fromEmailAddresses;
- (bool)supportsUserPushedMailboxes;
- (id)pushedMailboxUids;
- (bool)canMailboxBeDeleted:(id)arg1;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (bool)deleteInPlaceForAllMailboxes;
- (void)setConnectionError:(id)arg1;
- (void)setLastKnownHostname:(id)arg1;
- (id)iconString;
- (bool)shouldExpungeMessagesOnDelete;
- (bool)_shouldLogDeleteActivity;
- (bool)supportsThreadNotifications;
- (void)setCustomSignature:(id)arg1;
- (id)customSignature;
- (id)fetchLimits;
- (bool)restrictedFromSyncingRecents;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (id)saveSentFolder;
- (bool)shouldFetchBodiesWhenMovingToTrash;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (id)newMailboxWithParent:(id)arg1 name:(id)arg2;
- (id)URLForMessage:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)setMailboxCachePath:(id)arg1;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (void)removeUserFocusMailbox:(id)arg1;
- (void)addUserFocusMailbox:(id)arg1;
- (bool)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2;
- (bool)canReceiveNewMailNotifications;
- (bool)hasEnoughInformationForEasySetup;
- (id)meetingStorePersistentID;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (bool)supportsMessageFlagging;
- (bool)archiveSentMessages;
- (bool)supportsMailboxEditing;
- (bool)supportsSyncingReadState;
- (bool)supportsRemoteAppend;
- (bool)shouldAppearInMailSettings;
- (bool)canForwardWithoutDownload;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (void)startListeningForNotifications;
- (id)mailboxUidForURL:(id)arg1;
- (void)resetMailboxURLs;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2;
- (bool)moveMailbox:(id)arg1 intoParent:(id)arg2;
- (bool)canMailboxBeRenamed:(id)arg1;
- (bool)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2;
- (bool)canCreateNewMailboxes;
- (id)displayNameForMailboxUid:(id)arg1;
- (void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2;
- (void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2;
- (id)transferDisabledMailboxUids;
- (id)allMailMailboxUid;
- (bool)canAppendMessages;
- (void)fetchMailboxList;
- (bool)_shouldConfigureMailboxCache;
- (void)invalidateAndDelete;
- (id)receiveEmailAliasAddressesList;
- (void)pushUpdateForAliasData;
- (void)setEnabled:(bool)arg1 forEmailAddress:(id)arg2;
- (bool)canUseCarrierDeliveryFallback;
- (void)setCanUseCarrierDeliveryFallback:(bool)arg1;
- (bool)canUseDeliveryAccount:(id)arg1;
- (void)setDeliveryAccountAlternates:(id)arg1;
- (id)deliveryAccountAlternates;
- (void)setPrimaryDeliveryAccountDisabled:(bool)arg1;
- (bool)isPrimaryDeliveryAccountDisabled;
- (void)setFullUserName:(id)arg1;
- (void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3;
- (void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2;
- (id)valueInAccountLookAsidePropertiesForKey:(id)arg1;
- (bool)isMailboxLocalForType:(int)arg1;
- (bool)supportsAppend;
- (bool)restrictedFromTransferingMessagesToOtherAccounts;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (id)specialMailboxNameForType:(int)arg1;
- (id*)_specialMailboxIvarOfType:(int)arg1;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (id)mailboxCachePath;
- (bool)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned int)arg2 children:(id)arg3 parent:(id)arg4;
- (bool)_cleanInboxDuplication:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (void)setDeliveryAccount:(id)arg1;
- (id)statisticsKind;
- (void)setLastEmailAliasesSyncDate:(id)arg1;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (id)mailboxUidForInfo:(id)arg1;
- (id)_URLForInfo:(id)arg1;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_URLScheme;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2;
- (id)mailboxPathExtension;
- (id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2 withOption:(int)arg3;
- (Class)storeClass;
- (void)_resetAllMailboxURLs:(bool)arg1;
- (bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (bool)_deleteMailbox:(id)arg1;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (bool)_renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (bool)_resetSpecialMailboxes;
- (id)_pathComponentForUidName:(id)arg1;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)firstEmailAddress;
- (void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2;
- (int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (id)primaryMailboxUid;
- (id)_specialMailboxUidWithType:(int)arg1 create:(bool)arg2;
- (id)_cachedSpecialMailboxOfType:(int)arg1;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)emptyTrash;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (id)_mailboxPathPrefix;
- (void)_writeMailboxCacheWithPrejudice:(bool)arg1;
- (bool)_usesMailboxCache;
- (void)saveState;
- (void)_asynchronouslyInvalidateAndDeleteAccountData:(bool)arg1;
- (void)_invalidateAndDeleteAccountData:(bool)arg1;
- (void)_deleteHook;
- (bool)deleteMailbox:(id)arg1;
- (id)allLocalMailboxUids;
- (id)allMailboxUids;
- (bool)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2;
- (bool)updateEmailAliases;
- (id)lastEmailAliasesSyncDate;
- (id)fromEmailAddressesIncludingDisabled;
- (id)receiveEmailAliasAddresses;
- (id)emailAddressesDictionary;
- (id)defaultEmailAddress;
- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (id)deliveryAccount;
- (bool)restrictedFromSendingExternally;
- (id)initWithLibrary:(id)arg1 path:(id)arg2;
- (bool)_setPath:(id)arg1;
- (Class)storeClassForMailbox:(id)arg1;
- (void)setupLibrary;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (void)_invalidateCachedMailboxen;
- (void)_didBecomeActive:(bool)arg1;
- (bool)isActiveWithPersistentAccount:(id)arg1;
- (id)rootMailboxUid;
- (void)resetSpecialMailboxes;
- (id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2;
- (id)fullUserName;
- (id)emailAddressesAndAliasesList;
- (bool)canFetch;
- (id)uniqueIdForPersistentConnection;
- (void)resetMailboxTimer;
- (bool)isUsernameEquivalentTo:(id)arg1;
- (bool)isHostnameEquivalentTo:(id)arg1;
- (bool)isAccountClassEquivalentTo:(id)arg1;
- (bool)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (void)accountDidLoad;
- (id)tildeAbbreviatedPath;
- (void)releaseAllForcedConnections;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)setPortNumber:(unsigned int)arg1;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (void)releaseAllConnections;
- (void)_setAccountProperties:(id)arg1;
- (id)initWithPersistentAccount:(id)arg1;
- (int)archiveDestinationForMailbox:(id)arg1;
- (bool)canArchiveForMailbox:(id)arg1;
- (bool)shouldArchiveByDefault;
- (bool)preventArchiveForMailbox:(id)arg1;
- (bool)supportsArchiving;
- (bool)deleteInPlaceForMailbox:(id)arg1;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(bool)arg2;
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;
- (bool)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3;
- (bool)shouldRestoreMessagesAfterFailedDelete;
- (bool)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(bool)arg4 unsuccessfulOnes:(id)arg5 newMessages:(id)arg6;
- (id)mailboxUidOfType:(int)arg1 createIfNeeded:(bool)arg2;
- (id)storeForMailboxUid:(id)arg1;
- (void)setUnreadCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)unregisterStore:(id)arg1 forUid:(id)arg2;
- (id)displayUsername;
- (bool)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id*)arg2;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (bool)secureMIMEEnabled;
- (void)stopListeningForNotifications;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (id)loggingIdentifier;
- (id)library;
- (id)connectionError;
- (long long)libraryID;
- (void)setLibrary:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)setHostname:(id)arg1;
- (id)URLString;
- (bool)isActive;
- (void)invalidate;
- (void)setCachePolicy:(int)arg1;
- (void)setPath:(id)arg1;
- (int)cachePolicy;
- (id)path;
- (void)dealloc;
- (id)description;
- (void)setActive:(bool)arg1;
- (id)displayName;
- (id)initWithPath:(id)arg1;
- (bool)sourceIsManaged;
- (id)mf_copyReceivingEmailAddresses;

@end
