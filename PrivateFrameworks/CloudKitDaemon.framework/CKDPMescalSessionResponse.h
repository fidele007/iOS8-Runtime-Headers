/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPMescalSessionResponse : PBCodable <NSCopying> {
    NSData *_responseData;
}

@property(readonly) bool hasResponseData;
@property(retain) NSData * responseData;


- (bool)hasResponseData;
- (void)copyTo:(id)arg1;
- (void)setResponseData:(id)arg1;
- (id)responseData;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
