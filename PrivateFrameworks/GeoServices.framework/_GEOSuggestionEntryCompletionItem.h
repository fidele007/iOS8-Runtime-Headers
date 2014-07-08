/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOMapServiceTraits, NSData, NSArray, GEOSuggestionEntry, <GEOMapItem>;

@interface _GEOSuggestionEntryCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint> {
    GEOSuggestionEntry *_entry;
    NSString *_query;
    int _entryListIndex;
    int _entryIndex;
    GEOMapServiceTraits *_traits;
    NSData *_completionMetaData;
}

@property(readonly) NSArray * displayLines;
@property(readonly) <GEOMapItem> * geoMapItem;
@property(readonly) NSData * entryMetadata;
@property(readonly) NSData * metadata;


- (void)applyToLegacySearch:(id)arg1;
- (void)sendFeedback;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)completionLocation;
- (id)entryMetadata;
- (id)geoMapItem;
- (id)queryLine;
- (id)calloutTitle;
- (id)displayLines;
- (id)initWithSuggestionEntry:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 completion:(id)arg5 traits:(id)arg6;
- (id)suggestionsOptions;
- (id)metadata;
- (id)query;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
