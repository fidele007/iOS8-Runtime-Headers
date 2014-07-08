/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {
    long long primaryType;
    NSCountedSet *_additionalAttachments;
    NSMutableDictionary *_clientSideComposedImageInfos;
}

@property long long primaryType;
@property(retain) NSCountedSet * additionalAttachments;
@property(retain) NSMutableDictionary * clientSideComposedImageInfos;

+ (bool)supportsSecureCoding;

- (void)setClientSideComposedImageInfos:(id)arg1;
- (id)clientSideComposedImageInfos;
- (void)setAdditionalAttachments:(id)arg1;
- (id)additionalAttachments;
- (bool)isEqualToAttachments:(id)arg1;
- (void)addAttachmentOfType:(long long)arg1;
- (void)setPrimaryType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (long long)primaryType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
