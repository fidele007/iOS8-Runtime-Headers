/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString;

@interface CKDMMCSRequestOptions : NSObject  {
    bool_usesBackgroundSession;
    bool_allowsCellularAccess;
    NSString *_applicationBundleID;
    NSString *_secondaryApplicationBundleID;
    NSString *_containerID;
}

@property(retain) NSString * applicationBundleID;
@property(retain) NSString * secondaryApplicationBundleID;
@property(retain) NSString * containerID;
@property bool usesBackgroundSession;
@property bool allowsCellularAccess;


- (id)MMCSOptions;
- (void)setApplicationBundleID:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)secondaryApplicationBundleID;
- (void)setSecondaryApplicationBundleID:(id)arg1;
- (bool)usesBackgroundSession;
- (void)setUsesBackgroundSession:(bool)arg1;
- (id)applicationBundleID;
- (id)containerID;
- (id)CKPropertiesDescription;
- (void)setContainerID:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (bool)allowsCellularAccess;
- (void).cxx_destruct;
- (id)description;

@end
