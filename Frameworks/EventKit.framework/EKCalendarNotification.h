/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSURL, EKObjectID;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {
    long long _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSURL *_URI;
    EKObjectID *_objectID;
    struct CGColor { } *_dotColor;
    bool_hiddenFromNotificationCenter;
    bool_alerted;
}

@property long long type;
@property(retain) NSString * title;
@property(retain) NSString * name;
@property(retain) NSString * emailAddress;
@property(retain) NSURL * URI;
@property(retain) EKObjectID * objectID;
@property struct CGColor { }* dotColor;
@property bool hiddenFromNotificationCenter;
@property bool alerted;
@property(readonly) bool needsAlert;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)hiddenFromNotificationCenter;
- (struct CGColor { }*)dotColor;
- (void)setURI:(id)arg1;
- (void)setDotColor:(struct CGColor { }*)arg1;
- (void)setAlerted:(bool)arg1;
- (void)setHiddenFromNotificationCenter:(bool)arg1;
- (bool)needsAlert;
- (bool)alerted;
- (id)URI;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (void)setEmailAddress:(id)arg1;
- (id)emailAddress;
- (void)setName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithType:(long long)arg1;
- (id)name;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)dealloc;

@end
