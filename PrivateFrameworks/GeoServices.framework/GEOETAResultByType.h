/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResultByType : PBCodable <NSCopying> {
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int travelTimeBestEstimate : 1; 
    } _has;
}

@property bool hasTransportType;
@property int transportType;
@property bool hasStatus;
@property int status;
@property bool hasTravelTimeBestEstimate;
@property unsigned int travelTimeBestEstimate;
@property bool hasHistoricTravelTime;
@property unsigned int historicTravelTime;
@property bool hasDistance;
@property unsigned int distance;


- (bool)hasStatus;
- (unsigned int)travelTimeBestEstimate;
- (bool)hasTravelTimeBestEstimate;
- (void)setHasTravelTimeBestEstimate:(bool)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (void)setHasStatus:(bool)arg1;
- (unsigned int)historicTravelTime;
- (bool)hasHistoricTravelTime;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (bool)hasDistance;
- (void)setHasDistance:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (bool)hasTransportType;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
