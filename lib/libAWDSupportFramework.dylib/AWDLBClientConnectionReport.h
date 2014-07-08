/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBClientConnectionReport : PBCodable <NSCopying> {
    long long _bytesReceived;
    long long _bytesSent;
    long long _connectionDuration;
    unsigned long long _connectionServiceId;
    long long _timeToConnectionFailure;
    long long _timeToFirstResponse;
    unsigned long long _timestamp;
    int _connectionJoiningFailure;
    int _connectionJoiningLbConnectionMigration;
    int _connectionJoiningLbConnectionState;
    int _dataPathResult;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int connectionServiceId : 1; 
        unsigned int timeToConnectionFailure : 1; 
        unsigned int timeToFirstResponse : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionJoiningFailure : 1; 
        unsigned int connectionJoiningLbConnectionMigration : 1; 
        unsigned int connectionJoiningLbConnectionState : 1; 
        unsigned int dataPathResult : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasConnectionJoiningFailure;
@property int connectionJoiningFailure;
@property bool hasConnectionJoiningLbConnectionState;
@property int connectionJoiningLbConnectionState;
@property bool hasConnectionJoiningLbConnectionMigration;
@property int connectionJoiningLbConnectionMigration;
@property bool hasConnectionServiceId;
@property unsigned long long connectionServiceId;
@property bool hasConnectionDuration;
@property long long connectionDuration;
@property bool hasDataPathResult;
@property int dataPathResult;
@property bool hasBytesSent;
@property long long bytesSent;
@property bool hasBytesReceived;
@property long long bytesReceived;
@property bool hasTimeToFirstResponse;
@property long long timeToFirstResponse;
@property bool hasTimeToConnectionFailure;
@property long long timeToConnectionFailure;


- (long long)timeToConnectionFailure;
- (long long)timeToFirstResponse;
- (int)dataPathResult;
- (long long)connectionDuration;
- (unsigned long long)connectionServiceId;
- (int)connectionJoiningLbConnectionMigration;
- (int)connectionJoiningLbConnectionState;
- (int)connectionJoiningFailure;
- (bool)hasTimeToConnectionFailure;
- (void)setHasTimeToConnectionFailure:(bool)arg1;
- (void)setTimeToConnectionFailure:(long long)arg1;
- (bool)hasTimeToFirstResponse;
- (void)setHasTimeToFirstResponse:(bool)arg1;
- (void)setTimeToFirstResponse:(long long)arg1;
- (bool)hasBytesReceived;
- (void)setHasBytesReceived:(bool)arg1;
- (void)setBytesReceived:(long long)arg1;
- (bool)hasBytesSent;
- (void)setHasBytesSent:(bool)arg1;
- (bool)hasDataPathResult;
- (void)setHasDataPathResult:(bool)arg1;
- (void)setDataPathResult:(int)arg1;
- (bool)hasConnectionDuration;
- (void)setHasConnectionDuration:(bool)arg1;
- (void)setConnectionDuration:(long long)arg1;
- (bool)hasConnectionServiceId;
- (void)setHasConnectionServiceId:(bool)arg1;
- (void)setConnectionServiceId:(unsigned long long)arg1;
- (bool)hasConnectionJoiningLbConnectionMigration;
- (void)setHasConnectionJoiningLbConnectionMigration:(bool)arg1;
- (void)setConnectionJoiningLbConnectionMigration:(int)arg1;
- (bool)hasConnectionJoiningLbConnectionState;
- (void)setHasConnectionJoiningLbConnectionState:(bool)arg1;
- (void)setConnectionJoiningLbConnectionState:(int)arg1;
- (bool)hasConnectionJoiningFailure;
- (void)setHasConnectionJoiningFailure:(bool)arg1;
- (void)setConnectionJoiningFailure:(int)arg1;
- (long long)bytesSent;
- (void)setBytesSent:(long long)arg1;
- (long long)bytesReceived;
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
