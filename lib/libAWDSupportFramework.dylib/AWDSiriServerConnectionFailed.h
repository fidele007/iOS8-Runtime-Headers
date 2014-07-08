/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSiriServerConnectionFailed : PBCodable <NSCopying> {
    long long _errorCode;
    unsigned long long _timestamp;
    int _connectionType;
    NSString *_errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasErrorDomain;
@property(retain) NSString * errorDomain;
@property bool hasErrorCode;
@property long long errorCode;
@property bool hasConnectionType;
@property int connectionType;


- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (void)setConnectionType:(int)arg1;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (bool)hasErrorDomain;
- (void)setErrorDomain:(id)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)connectionType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)errorDomain;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setErrorCode:(long long)arg1;
- (long long)errorCode;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
