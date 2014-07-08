/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBSectionInfo, NSString, NSArray, NSData, BBSectionIcon;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_sectionID;
    NSString *_subsectionID;
    long long _sectionType;
    long long _sectionCategory;
    bool_showsInNotificationCenter;
    unsigned long long _suppressedSettings;
    unsigned long long _pushSettings;
    unsigned long long _alertType;
    unsigned long long _notificationCenterLimit;
    bool_showsInLockScreen;
    bool_showsOnBluetoothDevices;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    bool_suppressFromSettings;
    bool_displaysCriticalBulletins;
    bool_allowsNotifications;
    bool_showsOnExternalDevices;
    bool_hideWeeApp;
    bool_showsMessagePreview;
    long long _subsectionPriority;
    unsigned long long _version;
}

@property(copy) NSString * sectionID;
@property(copy) NSString * subsectionID;
@property long long sectionType;
@property long long sectionCategory;
@property bool suppressFromSettings;
@property bool showsInNotificationCenter;
@property bool showsInLockScreen;
@property bool showsOnExternalDevices;
@property unsigned long long notificationCenterLimit;
@property unsigned long long pushSettings;
@property unsigned long long alertType;
@property bool showsMessagePreview;
@property bool allowsNotifications;
@property unsigned long long suppressedSettings;
@property bool hideWeeApp;
@property(copy) NSString * pathToWeeAppPluginBundle;
@property(copy) NSString * displayName;
@property(copy) BBSectionIcon * icon;
@property bool displaysCriticalBulletins;
@property(copy) NSArray * subsections;
@property BBSectionInfo * parentSection;
@property long long subsectionPriority;
@property unsigned long long version;
@property bool enabled;
@property unsigned long long bulletinCount;
@property(copy,readonly) NSData * iconData;
@property(copy) NSString * factorySectionID;
@property(copy) NSArray * dataProviderIDs;

+ (id)defaultSectionInfoForSection:(id)arg1;
+ (id)defaultSectionInfoForType:(long long)arg1;
+ (bool)defaultStateForSetting:(unsigned long long)arg1 inSectionType:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void)updateWithDefaultSectionInfo:(id)arg1;
- (unsigned long long)bulletinCount;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (void)setSubsectionPriority:(long long)arg1;
- (long long)subsectionPriority;
- (void)_addSubsection:(id)arg1;
- (void)setDisplaysCriticalBulletins:(bool)arg1;
- (bool)displaysCriticalBulletins;
- (void)setPathToWeeAppPluginBundle:(id)arg1;
- (bool)showsOnExternalDevices;
- (bool)suppressFromSettings;
- (void)setSectionCategory:(long long)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setNotificationCenterLimit:(unsigned long long)arg1;
- (void)setDataProviderIDs:(id)arg1;
- (void)setSubsections:(id)arg1;
- (bool)allowsNotifications;
- (id)parentSection;
- (void)setBulletinCount:(unsigned long long)arg1;
- (void)setAlertType:(unsigned long long)arg1;
- (void)setPushSettings:(unsigned long long)arg1;
- (void)setShowsOnExternalDevices:(bool)arg1;
- (void)setShowsInLockScreen:(bool)arg1;
- (void)setShowsInNotificationCenter:(bool)arg1;
- (void)setSuppressedSettings:(unsigned long long)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setParentSection:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(long long)arg1;
- (long long)sectionCategory;
- (void)setAllowsNotifications:(bool)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setSuppressFromSettings:(bool)arg1;
- (void)setHideWeeApp:(bool)arg1;
- (bool)hideWeeApp;
- (unsigned long long)pushSettings;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (id)factorySectionID;
- (bool)showsInLockScreen;
- (unsigned long long)alertType;
- (id)dataProviderIDs;
- (unsigned long long)notificationCenterLimit;
- (void)setShowsMessagePreview:(bool)arg1;
- (bool)showsMessagePreview;
- (void)setSectionID:(id)arg1;
- (bool)showsInNotificationCenter;
- (id)subsections;
- (id)subsectionID;
- (unsigned long long)suppressedSettings;
- (id)pathToWeeAppPluginBundle;
- (long long)sectionType;
- (id)sectionID;
- (bool)enabled;
- (id)icon;
- (void)setDisplayName:(id)arg1;
- (unsigned long long)version;
- (void)setEnabled:(bool)arg1;
- (id)iconData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)setVersion:(unsigned long long)arg1;
- (void)setIcon:(id)arg1;

@end
