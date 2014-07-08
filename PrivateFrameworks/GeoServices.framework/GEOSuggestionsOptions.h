/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {
    int _entriesType;
    int _listType;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    bool_includeRankingFeatures;
    bool_normalizePOIs;
    struct { 
        unsigned int entriesType : 1; 
        unsigned int listType : 1; 
        unsigned int includeRankingFeatures : 1; 
        unsigned int normalizePOIs : 1; 
    } _has;
}

@property bool hasListType;
@property int listType;
@property bool hasEntriesType;
@property int entriesType;
@property(readonly) bool hasSuggestionMetadata;
@property(retain) NSData * suggestionMetadata;
@property(readonly) bool hasSuggestionEntryMetadata;
@property(retain) NSData * suggestionEntryMetadata;
@property bool hasNormalizePOIs;
@property bool normalizePOIs;
@property bool hasIncludeRankingFeatures;
@property bool includeRankingFeatures;


- (int)listType;
- (int)entriesType;
- (bool)includeRankingFeatures;
- (bool)normalizePOIs;
- (bool)hasIncludeRankingFeatures;
- (void)setHasIncludeRankingFeatures:(bool)arg1;
- (void)setIncludeRankingFeatures:(bool)arg1;
- (bool)hasNormalizePOIs;
- (void)setHasNormalizePOIs:(bool)arg1;
- (void)setNormalizePOIs:(bool)arg1;
- (bool)hasEntriesType;
- (void)setHasEntriesType:(bool)arg1;
- (void)setEntriesType:(int)arg1;
- (bool)hasListType;
- (void)setHasListType:(bool)arg1;
- (void)setListType:(int)arg1;
- (id)suggestionEntryMetadata;
- (bool)hasSuggestionEntryMetadata;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (id)suggestionMetadata;
- (bool)hasSuggestionMetadata;
- (void)setSuggestionMetadata:(id)arg1;
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

@end
