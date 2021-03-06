/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPStyleAttribute : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _intValues;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _longIntValues;
    int _key;
    int _score;
    struct { 
        unsigned int score : 1; 
    } _has;
}

@property int key;
@property(readonly) unsigned long long intValuesCount;
@property(readonly) int* intValues;
@property bool hasScore;
@property int score;
@property(readonly) unsigned long long longIntValuesCount;
@property(readonly) unsigned long long* longIntValues;


- (void)setLongIntValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setIntValues:(int*)arg1 count:(unsigned long long)arg2;
- (void)addLongIntValue:(unsigned long long)arg1;
- (unsigned long long)longIntValueAtIndex:(unsigned long long)arg1;
- (void)clearLongIntValues;
- (void)addIntValue:(int)arg1;
- (int)intValueAtIndex:(unsigned long long)arg1;
- (void)clearIntValues;
- (unsigned long long*)longIntValues;
- (unsigned long long)longIntValuesCount;
- (int*)intValues;
- (unsigned long long)intValuesCount;
- (bool)hasScore;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)key;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)score;
- (void)setKey:(int)arg1;
- (id)dictionaryRepresentation;

@end
