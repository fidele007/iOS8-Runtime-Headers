/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayPhotoSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _maxBPS;
    unsigned int _maxPhotoBytes;
    unsigned int _minBPS;
    unsigned int _minPhotoBytes;
    int _reason;
    NSString *_sessionUUID;
    unsigned int _totalPhotos;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int maxBPS : 1; 
        unsigned int maxPhotoBytes : 1; 
        unsigned int minBPS : 1; 
        unsigned int minPhotoBytes : 1; 
        unsigned int reason : 1; 
        unsigned int totalPhotos : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasReason;
@property int reason;
@property bool hasDuration;
@property unsigned int duration;
@property bool hasTotalPhotos;
@property unsigned int totalPhotos;
@property bool hasMinPhotoBytes;
@property unsigned int minPhotoBytes;
@property bool hasMaxPhotoBytes;
@property unsigned int maxPhotoBytes;
@property bool hasMinBPS;
@property unsigned int minBPS;
@property bool hasMaxBPS;
@property unsigned int maxBPS;


- (unsigned int)maxBPS;
- (unsigned int)minBPS;
- (unsigned int)maxPhotoBytes;
- (unsigned int)minPhotoBytes;
- (unsigned int)totalPhotos;
- (id)sessionUUID;
- (bool)hasMaxBPS;
- (void)setHasMaxBPS:(bool)arg1;
- (void)setMaxBPS:(unsigned int)arg1;
- (bool)hasMinBPS;
- (void)setHasMinBPS:(bool)arg1;
- (void)setMinBPS:(unsigned int)arg1;
- (bool)hasMaxPhotoBytes;
- (void)setHasMaxPhotoBytes:(bool)arg1;
- (void)setMaxPhotoBytes:(unsigned int)arg1;
- (bool)hasMinPhotoBytes;
- (void)setHasMinPhotoBytes:(bool)arg1;
- (void)setMinPhotoBytes:(unsigned int)arg1;
- (bool)hasTotalPhotos;
- (void)setHasTotalPhotos:(bool)arg1;
- (void)setTotalPhotos:(unsigned int)arg1;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (bool)hasDuration;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setReason:(int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (int)reason;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)duration;
- (id)dictionaryRepresentation;

@end
