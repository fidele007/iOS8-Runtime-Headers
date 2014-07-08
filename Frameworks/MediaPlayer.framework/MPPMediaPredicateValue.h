/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSData, NSString;

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {
    double _doublePredicateValue;
    long long _integerPredicateValue;
    NSData *_bytesPredicateValue;
    float _floatPredicateValue;
    NSString *_stringPredicateValue;
    int _type;
    bool_boolPredicateValue;
    struct { 
        unsigned int doublePredicateValue : 1; 
        unsigned int integerPredicateValue : 1; 
        unsigned int floatPredicateValue : 1; 
        unsigned int boolPredicateValue : 1; 
    } _has;
}

@property int type;
@property bool hasIntegerPredicateValue;
@property long long integerPredicateValue;
@property bool hasDoublePredicateValue;
@property double doublePredicateValue;
@property bool hasFloatPredicateValue;
@property float floatPredicateValue;
@property bool hasBoolPredicateValue;
@property bool boolPredicateValue;
@property(readonly) bool hasStringPredicateValue;
@property(retain) NSString * stringPredicateValue;
@property(readonly) bool hasBytesPredicateValue;
@property(retain) NSData * bytesPredicateValue;


- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasBoolPredicateValue:(bool)arg1;
- (void)setHasFloatPredicateValue:(bool)arg1;
- (void)setHasDoublePredicateValue:(bool)arg1;
- (void)setHasIntegerPredicateValue:(bool)arg1;
- (bool)hasBytesPredicateValue;
- (bool)hasStringPredicateValue;
- (void)setBoolPredicateValue:(bool)arg1;
- (bool)hasBoolPredicateValue;
- (bool)hasFloatPredicateValue;
- (bool)hasDoublePredicateValue;
- (bool)hasIntegerPredicateValue;
- (void)setBytesPredicateValue:(id)arg1;
- (void)setStringPredicateValue:(id)arg1;
- (void)setDoublePredicateValue:(double)arg1;
- (void)setFloatPredicateValue:(float)arg1;
- (void)setIntegerPredicateValue:(long long)arg1;
- (id)bytesPredicateValue;
- (id)stringPredicateValue;
- (bool)boolPredicateValue;
- (float)floatPredicateValue;
- (double)doublePredicateValue;
- (long long)integerPredicateValue;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
