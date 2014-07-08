/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPComment;

@interface CKDPGetCommentResponse : PBCodable <NSCopying> {
    CKDPComment *_comment;
}

@property(readonly) bool hasComment;
@property(retain) CKDPComment * comment;


- (bool)hasComment;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setComment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)comment;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
