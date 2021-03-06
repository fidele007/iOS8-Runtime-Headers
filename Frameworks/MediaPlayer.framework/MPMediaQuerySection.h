/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying> {
    NSString *_title;
    unsigned long long _sectionIndexTitleIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
}

@property(copy) NSString * title;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property unsigned long long sectionIndexTitleIndex;

+ (bool)supportsSecureCoding;

- (void)setSectionIndexTitleIndex:(unsigned long long)arg1;
- (unsigned long long)sectionIndexTitleIndex;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_init;

@end
