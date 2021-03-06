/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
    NSString *_digits;
    NSString *_countryCode;
    bool_isShortCode;
}

@property(readonly) NSString * digits;
@property(readonly) NSString * countryCode;
@property bool isShortCode;

+ (bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (bool)isValidPhoneNumber:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;

- (id)countryCode;
- (void)setIsShortCode:(bool)arg1;
- (long long)numberOfDigitsForShortCodeNumber;
- (id)formatForCallingCountry:(id)arg1;
- (id)canonicalFormat;
- (bool)isShortCode;
- (id)encodedString;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)digits;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
