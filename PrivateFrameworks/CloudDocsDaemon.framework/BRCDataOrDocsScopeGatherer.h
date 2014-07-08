/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString, NSMutableArray, BRCItemID;

@interface BRCDataOrDocsScopeGatherer : BRCNotificationGatherer  {
    NSMutableArray *_gatheringContainers;
    unsigned long long _gatheringRankCur;
    unsigned long long _gatheringRankMax;
    NSString *_gatheringNamePrefix;
    BRCItemID *_gatheredChildrenItemID;
}

@property(retain) BRCItemID * gatheredChildrenItemID;


- (void)setGatheredChildrenItemID:(id)arg1;
- (id)gatheredChildrenItemID;
- (id)_gatheringNotDescendantOfContainerWithID:(id)arg1;
- (id)_gatheringDescendantOfContainerWithID:(id)arg1;
- (bool)continueGatheringWithBatchSize:(unsigned long long)arg1;
- (id)initWithNotificationPipe:(id)arg1 reply:(id)arg2;
- (void).cxx_destruct;

@end
