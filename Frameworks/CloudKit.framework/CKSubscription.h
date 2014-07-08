/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, NSPredicate, CKNotificationInfo, CKRecordZoneID;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying> {
    NSString *_subscriptionID;
    long long _subscriptionType;
    NSString *_recordType;
    NSPredicate *_predicate;
    unsigned long long _subscriptionOptions;
    CKNotificationInfo *_notificationInfo;
    CKRecordZoneID *_zoneID;
}

@property(copy) NSString * subscriptionID;
@property long long subscriptionType;
@property(copy) NSString * recordType;
@property(copy) NSPredicate * predicate;
@property unsigned long long subscriptionOptions;
@property(copy) CKNotificationInfo * notificationInfo;
@property(copy) CKRecordZoneID * zoneID;

+ (bool)supportsSecureCoding;

- (void)setSubscriptionOptions:(unsigned long long)arg1;
- (void)setSubscriptionType:(long long)arg1;
- (void)setSubscriptionID:(id)arg1;
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;
- (long long)subscriptionType;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)subscriptionOptions;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (void)_validateSubscriptionOptions:(unsigned long long)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)subscriptionID;
- (void)setZoneID:(id)arg1;
- (id)_initBare;
- (id)recordType;
- (void)setRecordType:(id)arg1;
- (id)zoneID;
- (id)CKPropertiesDescription;
- (id)predicate;
- (id)init;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPredicate:(id)arg1;
- (void)setNotificationInfo:(id)arg1;
- (id)notificationInfo;

@end
