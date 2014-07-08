/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {
    int _lastZilchStitchedIndex;
    GEONameInfo *_nameInfo;
    struct { 
        unsigned int lastZilchStitchedIndex : 1; 
    } _has;
}

@property(readonly) bool hasNameInfo;
@property(retain) GEONameInfo * nameInfo;
@property bool hasLastZilchStitchedIndex;
@property int lastZilchStitchedIndex;


- (id)nameInfo;
- (bool)hasLastZilchStitchedIndex;
- (void)setHasLastZilchStitchedIndex:(bool)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (int)lastZilchStitchedIndex;
- (bool)hasNameInfo;
- (void)setNameInfo:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (struct CGImage { }*)_mapKitImage;

@end
