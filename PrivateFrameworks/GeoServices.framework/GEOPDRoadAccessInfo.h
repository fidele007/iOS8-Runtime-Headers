/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {
    NSMutableArray *_roadAccessPoints;
}

@property(retain) NSMutableArray * roadAccessPoints;

+ (id)roadAccessInfoForPlaceData:(id)arg1;

- (id)roadAccessPoints;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (void)clearRoadAccessPoints;
- (unsigned long long)roadAccessPointsCount;
- (void)addRoadAccessPoint:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
