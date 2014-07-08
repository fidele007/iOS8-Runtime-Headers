/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSignatures : NSObject  {
}

+ (id)sharedInstance;

- (id)signaturePlainTextForSendingEmailAddress:(id)arg1;
- (void)setSignature:(id)arg1 forEmailAddress:(id)arg2;
- (void)setUseAccountSignatures:(bool)arg1;
- (void)clearSignature;
- (id)signaturePlainTextFormat:(id)arg1;
- (id)signatureMarkupFormat:(id)arg1;
- (id)signatureForSendingEmailAddress:(id)arg1;
- (void)setSignature:(id)arg1 forAccount:(id)arg2;
- (bool)useAccountSignatures;
- (id)signatureForAccount:(id)arg1;
- (void)_setValue:(id)arg1 value:(void*)arg2;
- (id)defaultSignature;
- (id)_getValue:(id)arg1;
- (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
- (id)signatureMarkupForSendingEmailAddress:(id)arg1;
- (id)stripSignatureMarkup:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)signature;

@end
