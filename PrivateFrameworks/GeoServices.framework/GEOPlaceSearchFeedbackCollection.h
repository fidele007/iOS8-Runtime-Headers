/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    unsigned long long _businessID;
    long long _placeID;
    NSMutableArray *_actionCaptures;
    int _localSearchProviderID;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int localSearchProviderID : 1; 
    } _has;
}

@property bool hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property bool hasBusinessID;
@property unsigned long long businessID;
@property bool hasPlaceID;
@property long long placeID;
@property(retain) NSMutableArray * actionCaptures;
@property bool hasLocalSearchProviderID;
@property int localSearchProviderID;


- (unsigned long long)businessID;
- (id)actionCaptures;
- (long long)placeID;
- (bool)hasPlaceID;
- (void)setHasPlaceID:(bool)arg1;
- (void)setPlaceID:(long long)arg1;
- (id)actionCaptureAtIndex:(unsigned long long)arg1;
- (void)clearActionCaptures;
- (unsigned long long)actionCapturesCount;
- (void)addActionCapture:(id)arg1;
- (void)setActionCaptures:(id)arg1;
- (bool)hasBusinessID;
- (void)setHasBusinessID:(bool)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (int)localSearchProviderID;
- (bool)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (bool)hasSessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
