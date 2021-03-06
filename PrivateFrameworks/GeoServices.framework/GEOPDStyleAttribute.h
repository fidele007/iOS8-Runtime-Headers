/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDStyleAttribute : PBCodable <NSCopying> {
    unsigned int _key;
    unsigned int _value;
    struct { 
        unsigned int key : 1; 
        unsigned int value : 1; 
    } _has;
}

@property bool hasKey;
@property unsigned int key;
@property bool hasValue;
@property unsigned int value;


- (void)setHasValue:(bool)arg1;
- (void)setHasKey:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasValue;
- (unsigned int)value;
- (void)setValue:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)key;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setKey:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasKey;

@end
