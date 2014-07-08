/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBContent, NSString, NSDate, NSArray, NSSet, BBAccessoryIcon, BBSound, BBAction, NSTimeZone;

@interface BBBulletinRequest : BBBulletin  {
    unsigned long long _expirationEvents;
}

@property(copy) NSString * bulletinID;
@property(copy) NSString * sectionID;
@property(copy) NSSet * subsectionIDs;
@property(copy) NSString * recordID;
@property(copy) NSString * publisherBulletinID;
@property(copy) NSString * dismissalID;
@property long long addressBookRecordID;
@property long long sectionSubtype;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(copy) NSString * message;
@property(retain) BBContent * modalAlertContent;
@property bool hasEventDate;
@property(retain) NSDate * date;
@property(retain) NSDate * endDate;
@property(retain) NSDate * recencyDate;
@property long long dateFormatStyle;
@property bool dateIsAllDay;
@property(retain) NSTimeZone * timeZone;
@property(retain) BBAccessoryIcon * accessoryIconMask;
@property bool clearable;
@property(retain) BBSound * sound;
@property long long primaryAttachmentType;
@property bool wantsFullscreenPresentation;
@property(copy) NSSet * alertSuppressionContexts;
@property(copy) BBAction * defaultAction;
@property(copy) BBAction * alternateAction;
@property(copy) BBAction * acknowledgeAction;
@property(copy) BBAction * dismissAction;
@property(copy) BBAction * snoozeAction;
@property(copy) BBAction * raiseAction;
@property(copy) NSArray * supplementaryActions;
@property(retain) NSDate * expirationDate;
@property unsigned long long expirationEvents;
@property(copy) BBAction * expireAction;
@property bool usesExternalSync;
@property(copy) NSArray * buttons;
@property(retain) BBContent * starkBannerContent;
@property bool expiresOnPublisherDeath;
@property(copy) NSString * section;
@property unsigned long long realertCount;
@property bool showsUnreadIndicator;
@property bool tentative;


- (void)generateNewBulletinID;
- (id)publisherMatchID;
- (bool)hasContentModificationsRelativeTo:(id)arg1;
- (void)setTentative:(bool)arg1;
- (bool)showsUnreadIndicator;
- (void)setShowsUnreadIndicator:(bool)arg1;
- (void)generateBulletinID;
- (void)addAlertSuppressionAppID:(id)arg1;
- (void)setRealertCount:(unsigned long long)arg1;
- (unsigned long long)realertCount;
- (void)setUnlockActionLabel:(id)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)withdraw;
- (void)addButton:(id)arg1;
- (void)setPrimaryAttachmentType:(long long)arg1;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)_updateSupplementaryAction:(id)arg1;
- (void)setSupplementaryActions:(id)arg1 forLayout:(long long)arg2;
- (void)publish:(bool)arg1;
- (void)addAttachmentOfType:(long long)arg1;
- (void)setExpirationEvents:(unsigned long long)arg1;
- (unsigned long long)expirationEvents;
- (bool)tentative;
- (void)publish;

@end
