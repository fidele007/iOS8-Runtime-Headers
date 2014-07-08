/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOBusinessOptions : PBCodable <NSCopying> {
    NSMutableArray *_attributeKeys;
    int _maxBusinessResults;
    NSMutableArray *_photoOptions;
    bool_includeBusinessHours;
    bool_includeCenter;
    struct { 
        unsigned int maxBusinessResults : 1; 
        unsigned int includeBusinessHours : 1; 
        unsigned int includeCenter : 1; 
    } _has;
}

@property(retain) NSMutableArray * photoOptions;
@property(retain) NSMutableArray * attributeKeys;
@property bool hasIncludeBusinessHours;
@property bool includeBusinessHours;
@property bool hasMaxBusinessResults;
@property int maxBusinessResults;
@property bool hasIncludeCenter;
@property bool includeCenter;


- (bool)includeCenter;
- (bool)includeBusinessHours;
- (id)photoOptions;
- (bool)hasIncludeCenter;
- (void)setHasIncludeCenter:(bool)arg1;
- (void)setIncludeCenter:(bool)arg1;
- (bool)hasMaxBusinessResults;
- (void)setHasMaxBusinessResults:(bool)arg1;
- (void)setMaxBusinessResults:(int)arg1;
- (int)maxBusinessResults;
- (bool)hasIncludeBusinessHours;
- (void)setHasIncludeBusinessHours:(bool)arg1;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (void)clearAttributeKeys;
- (unsigned long long)attributeKeysCount;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (void)clearPhotoOptions;
- (unsigned long long)photoOptionsCount;
- (void)setAttributeKeys:(id)arg1;
- (void)setPhotoOptions:(id)arg1;
- (void)addPhotoOptions:(id)arg1;
- (void)addAttributeKey:(id)arg1;
- (void)setIncludeBusinessHours:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)attributeKeys;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
