/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload  {
    NSData *_pemData;
}

@property(retain,readonly) NSData * pemData;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)pemData;
- (bool)isIdentity;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (struct __SecCertificate { }*)copyCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end
