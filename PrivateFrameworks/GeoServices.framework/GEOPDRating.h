/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRating : PBCodable <NSCopying> {
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct { 
        unsigned int maxScore : 1; 
        unsigned int score : 1; 
        unsigned int numRatingsUsedForScore : 1; 
        unsigned int ratingType : 1; 
    } _has;
}

@property bool hasRatingType;
@property int ratingType;
@property bool hasScore;
@property double score;
@property bool hasMaxScore;
@property double maxScore;
@property bool hasNumRatingsUsedForScore;
@property int numRatingsUsedForScore;

+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;

- (void)setHasNumRatingsUsedForScore:(bool)arg1;
- (void)setNumRatingsUsedForScore:(int)arg1;
- (bool)hasRatingType;
- (void)setHasRatingType:(bool)arg1;
- (void)setRatingType:(int)arg1;
- (int)ratingType;
- (int)numRatingsUsedForScore;
- (bool)hasNumRatingsUsedForScore;
- (bool)hasMaxScore;
- (void)setHasMaxScore:(bool)arg1;
- (bool)hasScore;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setMaxScore:(double)arg1;
- (double)maxScore;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)score;
- (id)dictionaryRepresentation;

@end
