/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationResult : CKOperationResult <NSSecureCoding> {
    bool_moreComing;
    CKServerChangeToken *_serverChangeToken;
}

@property(retain) CKServerChangeToken * serverChangeToken;
@property bool moreComing;

+ (bool)supportsSecureCoding;

- (void)setMoreComing:(bool)arg1;
- (void)setServerChangeToken:(id)arg1;
- (bool)moreComing;
- (id)serverChangeToken;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
