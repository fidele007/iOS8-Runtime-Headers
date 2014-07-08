/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKContainerID;

@interface CKDAppContainerTuple : NSObject <NSCopying> {
    NSString *_applicationBundleID;
    CKContainerID *_containerID;
}

@property(retain) NSString * applicationBundleID;
@property(retain) CKContainerID * containerID;


- (void)setApplicationBundleID:(id)arg1;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2;
- (id)applicationBundleID;
- (id)containerID;
- (id)CKPropertiesDescription;
- (void)setContainerID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
