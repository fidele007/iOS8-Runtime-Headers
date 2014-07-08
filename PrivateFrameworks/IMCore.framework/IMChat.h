/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, IMChatRegistry, IMTimingCollection, NSDate, IMHandle, IMAccount, IMScheduledUpdater, NSMutableArray, IMChatItem, IMMessage, NSString, NSSet, <IMChatSendProgressDelegate>, NSTimer, NSMutableSet, IMMultiDict, NSArray, <IMChatItemRules>;

@interface IMChat : NSObject  {
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_currentLocationGUID;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSString *_lastAddressedHandleID;
    NSString *_groupID;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableDictionary *_unfinishedMessageMap;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_itemMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSArray *_frequentReplies;
    NSArray *_attachments;
    IMTimingCollection *_timingCollection;
    NSMutableArray *_chatItems;
    NSMutableArray *_chatItemsUpdates;
    <IMChatItemRules> *_chatItemRules;
    IMScheduledUpdater *_chatItemsUpdater;
    IMChatItem *_nextStaleChatItem;
    IMMultiDict *_messageActionsMap;
    <IMChatSendProgressDelegate> *_sendProgressDelegate;
    NSTimer *_sendProgressTimer;
    NSMutableDictionary *_sendingItems;
    float _cachedSendProgress;
    long long _joinState;
    unsigned char _style;
    unsigned long long _numberOfMessagesToKeepLoaded;
    unsigned long long _dbFailedCount;
    unsigned long long _dbUnreadCount;
    void *_context;
    unsigned int _hasBeenConfigured : 1;
    unsigned int _isFirstMessageInvitation : 1;
    unsigned int _wasInvitationHandled : 1;
    unsigned int _didSendAFinishedMessage : 1;
    unsigned int _hasPendingMarkRead : 1;
    unsigned int _isUpdatingChatItems : 1;
    unsigned int _isRecording : 1;
    BOOL _downgradeState;
    bool_ignoreDowngradeStatusUpdates;
    bool_forceMMS;
}

@property(readonly) bool suppressAccountRetargetingForGroupConversation;
@property bool forceMMS;
@property unsigned long long numberOfMessagesToKeepLoaded;
@property(readonly) bool hasMoreMessagesToLoad;
@property(copy,readonly) NSArray * attachments;
@property <IMChatSendProgressDelegate> * sendProgressDelegate;
@property(retain,readonly) NSSet * fmfHandles;
@property(retain,readonly) NSSet * allSiblingFMFHandles;
@property(readonly) bool hasRecipientsFollowingLocation;
@property(readonly) bool hasSiblingRecipientsSharingLocation;
@property(readonly) bool allRecipientsFollowingLocation;
@property(readonly) bool hasRecipientsSharingLocation;
@property(readonly) bool allRecipientsSharingLocation;
@property(retain,readonly) IMChatRegistry * chatRegistry;
@property(readonly) NSString * guid;
@property(readonly) IMAccount * account;
@property(readonly) unsigned char chatStyle;
@property(readonly) NSString * chatIdentifier;
@property(retain,readonly) NSString * persistentID;
@property(readonly) unsigned long long messageCount;
@property(readonly) unsigned long long unreadMessageCount;
@property(readonly) unsigned long long messageFailureCount;
@property(readonly) bool canLeaveChat;
@property(readonly) bool canHaveMultipleParticipants;
@property(readonly) unsigned long long overallChatStatus;
@property NSString * displayName;
@property(readonly) NSString * roomName;
@property(readonly) NSString * roomNameWithoutSuffix;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateModified;
@property(retain) NSArray * frequentReplies;
@property(readonly) long long joinState;
@property(readonly) bool hasUnhandledInvitation;
@property bool localUserIsTyping;
@property bool localUserIsRecording;
@property(readonly) NSString * localTypingMessageGUID;
@property(readonly) IMMessage * lastMessage;
@property(readonly) IMMessage * lastFinishedMessage;
@property(readonly) IMMessage * lastIncomingMessage;
@property(readonly) IMMessage * lastIncomingFinishedMessage;
@property(readonly) NSArray * participants;
@property(retain) IMHandle * recipient;
@property(retain) IMMessage * invitationForPendingParticipants;
@property(readonly) bool _shouldRegisterChat;
@property(retain,readonly) NSString * lastAddressedHandleID;
@property(retain,readonly) NSString * groupID;
@property void* contextInfo;
@property(setter=_setGUIDs:,retain) NSMutableSet * _guids;
@property(getter=_nextStaleChatItem,setter=_setNextStaleChatItem:,retain) IMChatItem * nextStaleChatItem;

+ (void)setChatItemRulesClass:(Class)arg1;
+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;

- (id)dateCreated;
- (void)_setAccount:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (id)testChatItems;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)stopTrackingParticipantLocations;
- (void)startTrackingParticipantLocations;
- (void)stopSharingLocation;
- (void)shareLocationUntilDate:(id)arg1;
- (bool)allRecipientsSharingLocation;
- (bool)hasSiblingRecipientsSharingLocation;
- (bool)hasRecipientsSharingLocation;
- (bool)allRecipientsFollowingLocation;
- (bool)hasRecipientsFollowingLocation;
- (id)allSiblingFMFHandles;
- (id)fmfHandles;
- (id)sendProgressDelegate;
- (void)setSendProgressDelegate:(id)arg1;
- (void)_sendProgressTimerFired:(id)arg1;
- (float)_progressSending:(unsigned long long*)arg1 of:(unsigned long long*)arg2;
- (void)_updateSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;
- (id)chatItemsForItems:(id)arg1;
- (id)chatItemsForMessages:(id)arg1;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)updateChatItemsIfNeeded;
- (void)_replaceStaleChatItems;
- (void)_unmapSendingItem:(id)arg1;
- (void)_queueReplaceStaleChatItems;
- (void)_resetSendProgress;
- (bool)_hasSendingMessages;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_setTypingIndicatorTimeout;
- (void)deleteTransfers:(id)arg1;
- (id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(bool)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
- (bool)hasMoreMessagesToLoad;
- (void)deleteChatItems:(id)arg1;
- (void)_setAttachments:(id)arg1;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(bool)arg4;
- (void)_trimMessagesAsNeeded;
- (void)_trimItemsLeavingNumber:(unsigned long long)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5;
- (id)dateModified;
- (void)setContextInfo:(void*)arg1;
- (void)_setGUIDs:(id)arg1;
- (id)_guids;
- (void)_setNextStaleChatItem:(id)arg1;
- (id)_nextStaleChatItem;
- (void)setFrequentReplies:(id)arg1;
- (id)frequentReplies;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (void)addPendingParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (bool)canAddParticipants:(id)arg1;
- (bool)canLeaveChat;
- (bool)_hasCommunicatedOnService:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (void)markAllMessagesAsRead;
- (void)markMessagesAsRead:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (bool)authorizedToSendCurrentLocationMessage;
- (bool)canSendCurrentLocationMessage;
- (bool)canSendMessage:(id)arg1;
- (void)setLocalUserIsRecording:(bool)arg1;
- (id)localTypingMessageGUID;
- (bool)localUserIsRecording;
- (bool)localUserIsTyping;
- (void)sendCurrentLocationMessage;
- (bool)hasUnhandledInvitation;
- (id)roomNameWithoutSuffix;
- (unsigned long long)overallChatStatus;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (bool)_handleIncomingItem:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_endTiming;
- (void)_startTiming:(id)arg1;
- (id)_timingCollection;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(bool)arg1;
- (bool)deleteAllHistory;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4;
- (bool)_shouldAnnouncePeopleJoin;
- (id)_IMUnfinishedMapSenderGUIDToRemove:(id)arg1 requireFinished:(bool)arg2;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (id)_messageActionsMap;
- (void)_unmapItem:(id)arg1;
- (void)_mapItem:(id)arg1;
- (bool)_shouldRegisterChat;
- (void)_setupObservation;
- (id)lastAddressedHandleID;
- (bool)_sanityCheckAccounts;
- (void)leave;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (id)invitationForPendingParticipants;
- (id)_pendingParticipants;
- (id)participantsWithState:(unsigned long long)arg1;
- (bool)canAddParticipant:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_addParticipant:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(bool)arg2;
- (void)_setAccount:(id)arg1 locally:(bool)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)_clearUnreadCount;
- (id)_itemsForGUIDs:(id)arg1;
- (void)_markItemsAsRead:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)__clearReadMessageCache;
- (bool)canSendTransfer:(id)arg1;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)_setLocalUserIsTyping:(bool)arg1 recording:(bool)arg2 suppliedGUID:(id)arg3;
- (id)chatRegistry;
- (void)join;
- (void)_setJoinState:(long long)arg1;
- (long long)joinState;
- (void)_setDisplayName:(id)arg1;
- (void)_clearCachedIdentifier;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(bool)arg3;
- (void)_sendMessage:(id)arg1 adjustingSender:(bool)arg2 shouldQueue:(bool)arg3;
- (void)_setJoinState:(long long)arg1 quietly:(bool)arg2;
- (void)_updateTypingIndicatorTimeout;
- (void)_clearTypingIndicatorTimeout;
- (void)_clearIncomingTypingIndicators;
- (void)_replaceChatItemsForItem:(id)arg1 withChatItemsForItem:(id)arg2;
- (void)_mapSendingItem:(id)arg1;
- (bool)_isDuplicate:(id)arg1;
- (bool)_handleIncomingItem:(id)arg1 shouldQueue:(bool)arg2;
- (void)_queueChatItemsUpdate:(id)arg1;
- (void)_removeChatItemsForItem:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (unsigned long long)stateForParticipant:(id)arg1;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(bool)arg3;
- (void)_removeChatItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)chatItems;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(bool)arg2 block:(id)arg3;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastFinishedMessage;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned long long)arg1;
- (void)_replaceChatItemsWithChatItemsForItems:(id)arg1 isRefresh:(bool)arg2;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4 limit:(unsigned long long)arg5;
- (unsigned long long)numberOfMessagesToKeepLoaded;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id)arg2;
- (void)_appendChatItemsForItem:(id)arg1;
- (void)_configureLocationShareItem:(id)arg1;
- (unsigned long long)messageFailureCount;
- (unsigned long long)unreadMessageCount;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7;
- (void)_initialize;
- (void)_buildInitialChatItems:(id)arg1;
- (id)chatIdentifier;
- (void)_updateChatItems;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (bool)canHaveMultipleParticipants;
- (void)_accountControllerUpdated:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)_updateDisplayName:(id)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)_cleanupIDSListeners;
- (void)_setupIDSListeners;
- (void)_delayedInvalidateDowngradeState;
- (void)_handleIncomingCommand:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(bool)arg2;
- (void)refreshServiceForSending;
- (void)_clearDowngradeMarkers;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(bool)arg1;
- (id)recipient;
- (unsigned char)chatStyle;
- (void)_calculateDowngradeStateTimerFired;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)_calculateDowngradeState;
- (void)_setupPreferredServiceChangeHandlers;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)_previousAccountForService:(id)arg1;
- (bool)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)valueForChatProperty:(id)arg1;
- (bool)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_invalidateDowngradeState;
- (bool)sendDowngradeNotificationTo:(id)arg1;
- (void)_setAndIncrementDowngradeMarkersForManual:(bool)arg1;
- (id)lastMessage;
- (void)_targetToService:(id)arg1 newComposition:(bool)arg2;
- (bool)forceMMS;
- (bool)isDowngraded;
- (bool)suppressAccountRetargetingForGroupConversation;
- (id)participants;
- (void)cancelMessage:(id)arg1;
- (id)groupID;
- (id)persistentID;
- (void)setDisplayName:(id)arg1;
- (id)account;
- (void)setRoomName:(id)arg1;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (id)guid;
- (id)roomName;
- (void)setRecipient:(id)arg1;
- (id)attachments;
- (void*)contextInfo;
- (void)clear;
- (void)declineInvitation;
- (void)acceptInvitation;
- (id)init;
- (void)sendMessage:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)remove;
- (unsigned long long)messageCount;

@end
