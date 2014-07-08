/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOStructuredAddress;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress *_structuredAddress;
    struct { 
        unsigned int formattedAddressType : 1; 
    } _has;
}

@property(retain) NSMutableArray * formattedAddressLines;
@property(readonly) bool hasStructuredAddress;
@property(retain) GEOStructuredAddress * structuredAddress;
@property bool hasFormattedAddressType;
@property int formattedAddressType;

+ (id)geoAddressForPlaceData:(id)arg1;

- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)hasFormattedAddressType;
- (void)setHasFormattedAddressType:(bool)arg1;
- (void)setFormattedAddressType:(int)arg1;
- (int)formattedAddressType;
- (id)formattedAddressLineAtIndex:(unsigned long long)arg1;
- (void)clearFormattedAddressLines;
- (unsigned long long)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (id)bestName;
- (id)addressDictionary;
- (id)initWithAddressString:(id)arg1;
- (id)structuredAddress;
- (bool)hasStructuredAddress;
- (id)formattedAddressLines;
- (void)setStructuredAddress:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (id)initWithAddressDictionary:(id)arg1;
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
- (id)singleLineAddress;

@end
