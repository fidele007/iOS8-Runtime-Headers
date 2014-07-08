/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    int _mapMode;
    GEOMapRegion *_mapRegion;
    unsigned int _timeSinceMapViewportChanged;
    struct { 
        unsigned int mapMode : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
    } _has;
}

@property(readonly) bool hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property bool hasTimeSinceMapViewportChanged;
@property unsigned int timeSinceMapViewportChanged;
@property bool hasMapMode;
@property int mapMode;

+ (id)viewportInfoForTraits:(id)arg1;

- (int)mapMode;
- (void)setMapMode:(int)arg1;
- (bool)hasMapMode;
- (void)setHasMapMode:(bool)arg1;
- (unsigned int)timeSinceMapViewportChanged;
- (bool)hasTimeSinceMapViewportChanged;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (id)mapRegion;
- (bool)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithTraits:(id)arg1;

@end
