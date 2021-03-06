/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class UIColor, NSString;

@interface BBColor : NSObject <BBUniquableObject, NSSecureCoding, NSCopying> {
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property(copy,readonly) UIColor * uiColor;
@property(readonly) double red;
@property(readonly) double green;
@property(readonly) double blue;
@property(readonly) double alpha;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)_initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)alpha;
- (double)blue;
- (double)green;
- (double)red;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)uiColor;

@end
