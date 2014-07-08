/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOPDFlyover, GEOMapRegion;

@interface GEOAnnouncement : PBCodable <NSCopying> {
    unsigned int _announcementID;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    unsigned int _displayDestinations;
    GEOPDFlyover *_flyoverInfo;
    GEOMapRegion *_mapRegion;
    int _releasePhase;
    NSString *_userMessage;
    struct { 
        unsigned int announcementID : 1; 
        unsigned int displayDestinations : 1; 
        unsigned int releasePhase : 1; 
    } _has;
}

@property bool hasAnnouncementID;
@property unsigned int announcementID;
@property(readonly) bool hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) bool hasUserMessage;
@property(retain) NSString * userMessage;
@property(readonly) bool hasButtonOneMessage;
@property(retain) NSString * buttonOneMessage;
@property(readonly) bool hasButtonOneAppURI;
@property(retain) NSString * buttonOneAppURI;
@property(readonly) bool hasButtonTwoMessage;
@property(retain) NSString * buttonTwoMessage;
@property(readonly) bool hasButtonTwoAppURI;
@property(retain) NSString * buttonTwoAppURI;
@property bool hasDisplayDestinations;
@property unsigned int displayDestinations;
@property bool hasReleasePhase;
@property int releasePhase;
@property(readonly) bool hasFlyoverInfo;
@property(retain) GEOPDFlyover * flyoverInfo;


- (id)flyoverInfo;
- (int)releasePhase;
- (unsigned int)displayDestinations;
- (id)buttonTwoAppURI;
- (id)buttonTwoMessage;
- (id)buttonOneAppURI;
- (id)buttonOneMessage;
- (unsigned int)announcementID;
- (bool)hasFlyoverInfo;
- (bool)hasReleasePhase;
- (void)setHasReleasePhase:(bool)arg1;
- (void)setReleasePhase:(int)arg1;
- (bool)hasDisplayDestinations;
- (void)setHasDisplayDestinations:(bool)arg1;
- (void)setDisplayDestinations:(unsigned int)arg1;
- (bool)hasButtonTwoAppURI;
- (bool)hasButtonTwoMessage;
- (bool)hasButtonOneAppURI;
- (bool)hasButtonOneMessage;
- (bool)hasUserMessage;
- (bool)hasAnnouncementID;
- (void)setHasAnnouncementID:(bool)arg1;
- (void)setAnnouncementID:(unsigned int)arg1;
- (void)setFlyoverInfo:(id)arg1;
- (void)setButtonTwoAppURI:(id)arg1;
- (void)setButtonTwoMessage:(id)arg1;
- (void)setButtonOneAppURI:(id)arg1;
- (void)setButtonOneMessage:(id)arg1;
- (void)setUserMessage:(id)arg1;
- (id)mapRegion;
- (bool)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)userMessage;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
