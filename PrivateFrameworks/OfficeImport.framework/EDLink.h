/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDLink : NSObject  {
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)arg1;

- (id)externalNames;
- (id)initWithType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;

@end
