/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendar, NSString, NSURL, NSDate, NSNumber, EKCalendarItem;

@interface EKResourceChange : EKObject <EKIdentityProtocol> {
}

@property(retain,readonly) EKCalendar * calendar;
@property(retain,readonly) EKCalendarItem * calendarItem;
@property(copy,readonly) NSString * changedByDisplayName;
@property(copy,readonly) NSURL * changedByAddress;
@property(copy,readonly) NSString * changedByFirstName;
@property(copy,readonly) NSString * changedByLastName;
@property(readonly) unsigned int changeType;
@property(copy,readonly) NSDate * timestamp;
@property(readonly) bool dateChanged;
@property(readonly) bool timeChanged;
@property(readonly) bool titleChanged;
@property(readonly) bool locationChanged;
@property(readonly) NSNumber * createCount;
@property(readonly) NSNumber * updateCount;
@property(readonly) NSNumber * deleteCount;
@property(readonly) NSString * deletedTitle;
@property(readonly) bool alerted;
@property(readonly) unsigned int publicStatus;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_calendarItemRelation;
- (id)_persistentResourceChange;
- (unsigned int)publicStatus;
- (id)changedByLastName;
- (id)changedByFirstName;
- (id)changedByAddress;
- (id)updateCount;
- (id)createCount;
- (id)changedByDisplayName;
- (id)deletedTitle;
- (bool)locationChanged;
- (bool)titleChanged;
- (bool)timeChanged;
- (bool)dateChanged;
- (id)lazyLoadRelationForKey:(id)arg1;
- (void)clearAlertedStatus;
- (id)calendarItem;
- (bool)alerted;
- (id)timestamp;
- (id)emailAddress;
- (unsigned int)changeType;
- (id)deleteCount;
- (id)calendar;
- (id)name;

@end
