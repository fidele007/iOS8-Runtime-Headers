/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {
    NSString *_categoryId;
    int _level;
    NSMutableArray *_localizedNames;
    struct { 
        unsigned int level : 1; 
    } _has;
}

@property bool hasLevel;
@property int level;
@property(retain) NSMutableArray * localizedNames;
@property(readonly) bool hasCategoryId;
@property(retain) NSString * categoryId;

+ (bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryKeysForPlaceData:(id)arg1;
+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;

- (void)setHasLevel:(bool)arg1;
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (void)addLocalizedName:(id)arg1;
- (void)setCategoryId:(id)arg1;
- (void)clearLocalizedNames;
- (void)setLocalizedNames:(id)arg1;
- (unsigned long long)localizedNamesCount;
- (id)categoryId;
- (bool)hasCategoryId;
- (id)localizedNames;
- (bool)hasLevel;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setLevel:(int)arg1;
- (int)level;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
