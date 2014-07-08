/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {
    long long _selectedButtonIndex;
    NSArray *_textFieldValues;
}

@property long long selectedButtonIndex;
@property(copy) NSArray * textFieldValues;


- (void)setTextFieldValues:(id)arg1;
- (void)setSelectedButtonIndex:(long long)arg1;
- (long long)selectedButtonIndex;
- (id)textFieldValues;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
