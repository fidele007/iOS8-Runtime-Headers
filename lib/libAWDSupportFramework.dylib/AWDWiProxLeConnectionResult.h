/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeConnectionResult : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_peerId;
    unsigned int _result;
    NSString *_resultString;
    NSString *_sessionId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSessionId;
@property(retain) NSString * sessionId;
@property(readonly) bool hasPeerId;
@property(retain) NSString * peerId;
@property(readonly) bool hasResultString;
@property(retain) NSString * resultString;
@property bool hasResult;
@property unsigned int result;


- (id)peerId;
- (bool)hasPeerId;
- (void)setPeerId:(id)arg1;
- (id)resultString;
- (void)setHasResult:(bool)arg1;
- (bool)hasResultString;
- (void)setResultString:(id)arg1;
- (bool)hasResult;
- (void)setResult:(unsigned int)arg1;
- (void)setSessionId:(id)arg1;
- (bool)hasSessionId;
- (id)sessionId;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)result;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
