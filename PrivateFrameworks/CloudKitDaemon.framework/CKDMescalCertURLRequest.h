/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDMescalCertURLRequest : CKDURLRequest  {
    NSData *_mescalCert;
}

@property(retain) NSData * mescalCert;


- (void)setMescalCert:(id)arg1;
- (void)_handleParsedObject:(id)arg1;
- (bool)hasRequestBody;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (long long)partitionType;
- (long long)serverType;
- (id)mescalCert;
- (id)httpMethod;
- (id)responseBodyParser;
- (id)url;
- (void).cxx_destruct;

@end
