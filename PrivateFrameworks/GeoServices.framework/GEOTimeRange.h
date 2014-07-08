/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeRange : PBCodable <NSCopying> {
    unsigned int _from;
    unsigned int _to;
    bool_allDay;
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
        unsigned int allDay : 1; 
    } _has;
}

@property bool hasFrom;
@property unsigned int from;
@property bool hasTo;
@property unsigned int to;
@property bool hasAllDay;
@property bool allDay;


- (bool)allDay;
- (bool)hasAllDay;
- (void)setHasAllDay:(bool)arg1;
- (bool)hasTo;
- (void)setHasTo:(bool)arg1;
- (bool)hasFrom;
- (void)setHasFrom:(bool)arg1;
- (bool)isAdjacentToTimeRange:(id)arg1;
- (unsigned int)from;
- (unsigned int)to;
- (id)initWithPlaceDataTimeRange:(struct { unsigned int x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setTo:(unsigned int)arg1;
- (void)setFrom:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
