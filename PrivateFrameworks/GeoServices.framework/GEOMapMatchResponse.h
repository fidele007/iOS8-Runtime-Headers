/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEOMapMatchResponse : PBCodable <NSCopying> {
    int _matchingStatus;
    int _status;
    NSData *_zilchPoints;
    struct { 
        unsigned int matchingStatus : 1; 
        unsigned int status : 1; 
    } _has;
}

@property bool hasStatus;
@property int status;
@property bool hasMatchingStatus;
@property int matchingStatus;
@property(readonly) bool hasZilchPoints;
@property(retain) NSData * zilchPoints;


- (bool)hasStatus;
- (int)matchingStatus;
- (bool)hasMatchingStatus;
- (void)setHasMatchingStatus:(bool)arg1;
- (void)setMatchingStatus:(int)arg1;
- (void)setHasStatus:(bool)arg1;
- (id)zilchPoints;
- (bool)hasZilchPoints;
- (void)setZilchPoints:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
