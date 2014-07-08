/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * displayName;
@property(copy) NSString * emailAddress;
@property(copy) NSURL * address;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * comment;

+ (id)defaultPropertiesToLoad;

- (void)setAddress:(id)arg1;
- (id)owner;
- (void)setComment:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)emailAddress;
- (id)lastName;
- (id)firstName;
- (void)setDisplayName:(id)arg1;
- (id)UUID;
- (id)init;
- (unsigned long long)hash;
- (id)comment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)address;

@end
