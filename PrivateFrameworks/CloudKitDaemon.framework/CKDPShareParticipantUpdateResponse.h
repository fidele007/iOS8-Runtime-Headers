/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShare;

@interface CKDPShareParticipantUpdateResponse : PBCodable <NSCopying> {
    CKDPShare *_share;
}

@property(readonly) bool hasShare;
@property(retain) CKDPShare * share;


- (bool)hasShare;
- (void)setShare:(id)arg1;
- (id)share;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
