/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {
    double _timeSinceBoot;
    unsigned long long _timestamp;
    unsigned int _deviceCount;
    unsigned int _deviceIdentifierMap;
    struct { 
        unsigned int timeSinceBoot : 1; 
        unsigned int timestamp : 1; 
        unsigned int deviceCount : 1; 
        unsigned int deviceIdentifierMap : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasDeviceCount;
@property unsigned int deviceCount;
@property bool hasTimeSinceBoot;
@property double timeSinceBoot;
@property bool hasDeviceIdentifierMap;
@property unsigned int deviceIdentifierMap;


- (double)timeSinceBoot;
- (bool)hasTimeSinceBoot;
- (void)setHasTimeSinceBoot:(bool)arg1;
- (void)setTimeSinceBoot:(double)arg1;
- (unsigned int)deviceIdentifierMap;
- (bool)hasDeviceIdentifierMap;
- (void)setHasDeviceIdentifierMap:(bool)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (unsigned int)deviceCount;
- (bool)hasDeviceCount;
- (void)setHasDeviceCount:(bool)arg1;
- (void)setDeviceCount:(unsigned int)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
