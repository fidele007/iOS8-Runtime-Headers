/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEContentFilterPlugin;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {
    bool_enabled;
    NEContentFilterPlugin *_plugin;
}

@property(getter=isEnabled) bool enabled;
@property(copy) NEContentFilterPlugin * plugin;

+ (bool)supportsSecureCoding;

- (id)descriptionWithIndent:(int)arg1;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
