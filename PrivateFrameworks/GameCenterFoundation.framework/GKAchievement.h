/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKAchievementInternal, GKPlayer, GKGame, NSString, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    bool_showsCompletionBanner;
    bool_hidden;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

@property(copy) NSString * identifier;
@property double percentComplete;
@property(getter=isCompleted,readonly) bool completed;
@property(copy) NSDate * lastReportedDate;
@property bool showsCompletionBanner;
@property(retain,readonly) GKPlayer * player;
@property(getter=isHidden) bool hidden;
@property(copy,readonly) NSString * groupIdentifier;
@property GKGame * game;
@property(retain) GKAchievementInternal * internal;
@property(copy) NSString * playerID;

+ (void)resetAchievementsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id)arg4;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(id)arg5;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(id)arg5;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3;

- (id)playerID;
- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (void)setGame:(id)arg1;
- (bool)showsCompletionBanner;
- (void)setShowsCompletionBanner:(bool)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)game;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (bool)isCompleted;
- (void)setHidden:(bool)arg1;
- (id)player;
- (bool)isHidden;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)canBeShared;
- (id)_gkSharingInfo;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)showBanner;
- (id)imageURL;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(id)arg2;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id)arg3;

@end
