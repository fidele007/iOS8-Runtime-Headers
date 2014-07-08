/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBCallMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _bBAndDataPowerMicroWatt;
    unsigned int _bBPowerMicroWatt;
    unsigned int _bBTotalAndDataDuration;
    unsigned int _bBTotalCallDuration;
    unsigned int _connectedSleepDuration;
    unsigned int _connectedSleepDurationData;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bBAndDataPowerMicroWatt : 1; 
        unsigned int bBPowerMicroWatt : 1; 
        unsigned int bBTotalAndDataDuration : 1; 
        unsigned int bBTotalCallDuration : 1; 
        unsigned int connectedSleepDuration : 1; 
        unsigned int connectedSleepDurationData : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasBBTotalCallDuration;
@property unsigned int bBTotalCallDuration;
@property bool hasBBPowerMicroWatt;
@property unsigned int bBPowerMicroWatt;
@property bool hasBBTotalAndDataDuration;
@property unsigned int bBTotalAndDataDuration;
@property bool hasBBAndDataPowerMicroWatt;
@property unsigned int bBAndDataPowerMicroWatt;
@property bool hasConnectedSleepDuration;
@property unsigned int connectedSleepDuration;
@property bool hasConnectedSleepDurationData;
@property unsigned int connectedSleepDurationData;


- (unsigned int)connectedSleepDurationData;
- (unsigned int)connectedSleepDuration;
- (unsigned int)bBAndDataPowerMicroWatt;
- (unsigned int)bBTotalAndDataDuration;
- (unsigned int)bBPowerMicroWatt;
- (unsigned int)bBTotalCallDuration;
- (bool)hasConnectedSleepDurationData;
- (void)setHasConnectedSleepDurationData:(bool)arg1;
- (void)setConnectedSleepDurationData:(unsigned int)arg1;
- (bool)hasConnectedSleepDuration;
- (void)setHasConnectedSleepDuration:(bool)arg1;
- (void)setConnectedSleepDuration:(unsigned int)arg1;
- (bool)hasBBAndDataPowerMicroWatt;
- (void)setHasBBAndDataPowerMicroWatt:(bool)arg1;
- (void)setBBAndDataPowerMicroWatt:(unsigned int)arg1;
- (bool)hasBBTotalAndDataDuration;
- (void)setHasBBTotalAndDataDuration:(bool)arg1;
- (void)setBBTotalAndDataDuration:(unsigned int)arg1;
- (bool)hasBBPowerMicroWatt;
- (void)setHasBBPowerMicroWatt:(bool)arg1;
- (void)setBBPowerMicroWatt:(unsigned int)arg1;
- (bool)hasBBTotalCallDuration;
- (void)setHasBBTotalCallDuration:(bool)arg1;
- (void)setBBTotalCallDuration:(unsigned int)arg1;
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
