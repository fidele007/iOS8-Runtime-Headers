/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOPDLocalizedString : PBCodable <NSCopying> {
    NSString *_locale;
    NSString *_stringValue;
}

@property(readonly) bool hasLocale;
@property(retain) NSString * locale;
@property(readonly) bool hasStringValue;
@property(retain) NSString * stringValue;


- (bool)hasStringValue;
- (bool)hasLocale;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)stringValue;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
