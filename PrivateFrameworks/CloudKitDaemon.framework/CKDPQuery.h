/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {
    NSMutableArray *_filters;
    int _queryOperator;
    NSMutableArray *_sorts;
    NSMutableArray *_types;
    bool_distinct;
    struct { 
        unsigned int queryOperator : 1; 
        unsigned int distinct : 1; 
    } _has;
}

@property(retain) NSMutableArray * types;
@property(retain) NSMutableArray * filters;
@property(retain) NSMutableArray * sorts;
@property bool hasDistinct;
@property bool distinct;
@property bool hasQueryOperator;
@property int queryOperator;


- (bool)distinct;
- (void)setSorts:(id)arg1;
- (id)sorts;
- (void)setTypes:(id)arg1;
- (bool)hasQueryOperator;
- (void)setHasQueryOperator:(bool)arg1;
- (void)setQueryOperator:(int)arg1;
- (int)queryOperator;
- (bool)hasDistinct;
- (void)setHasDistinct:(bool)arg1;
- (void)setDistinct:(bool)arg1;
- (id)sortsAtIndex:(unsigned long long)arg1;
- (void)clearSorts;
- (unsigned long long)sortsCount;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (void)clearFilters;
- (unsigned long long)filtersCount;
- (id)typesAtIndex:(unsigned long long)arg1;
- (void)clearTypes;
- (unsigned long long)typesCount;
- (void)addSorts:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)addTypes:(id)arg1;
- (id)types;
- (void)setFilters:(id)arg1;
- (id)filters;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
