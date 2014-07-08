/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPLocationCoordinate, CKDPLocationBound;

@interface CKDPLocation : PBCodable <NSCopying> {
    CKDPLocationBound *_bounds;
    CKDPLocationCoordinate *_coordinate;
}

@property(readonly) bool hasCoordinate;
@property(retain) CKDPLocationCoordinate * coordinate;
@property(readonly) bool hasBounds;
@property(retain) CKDPLocationBound * bounds;


- (bool)hasBounds;
- (bool)hasCoordinate;
- (void)setCoordinate:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)coordinate;
- (void)setBounds:(id)arg1;
- (id)bounds;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
