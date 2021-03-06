/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPSearchStringPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPCompoundPredicate, MPPConditionalPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying> {
    MPPCompoundPredicate *_compoundPredicate;
    MPPConditionalPredicate *_conditionalPredicate;
    MPPPersistentIDsPredicate *_persistentIDsPredicate;
    MPPPropertyPredicate *_propertyPredicate;
    MPPSearchStringPredicate *_searchStringPredicate;
    int _type;
    struct { 
        unsigned int type : 1; 
    } _has;
}

@property bool hasType;
@property int type;
@property(readonly) bool hasPropertyPredicate;
@property(retain) MPPPropertyPredicate * propertyPredicate;
@property(readonly) bool hasCompoundPredicate;
@property(retain) MPPCompoundPredicate * compoundPredicate;
@property(readonly) bool hasConditionalPredicate;
@property(retain) MPPConditionalPredicate * conditionalPredicate;
@property(readonly) bool hasPersistentIDsPredicate;
@property(retain) MPPPersistentIDsPredicate * persistentIDsPredicate;
@property(readonly) bool hasSearchStringPredicate;
@property(retain) MPPSearchStringPredicate * searchStringPredicate;


- (void)copyTo:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasSearchStringPredicate;
- (bool)hasPersistentIDsPredicate;
- (bool)hasCompoundPredicate;
- (bool)hasPropertyPredicate;
- (void)setSearchStringPredicate:(id)arg1;
- (id)searchStringPredicate;
- (void)setPersistentIDsPredicate:(id)arg1;
- (id)persistentIDsPredicate;
- (void)setCompoundPredicate:(id)arg1;
- (id)compoundPredicate;
- (void)setConditionalPredicate:(id)arg1;
- (bool)hasConditionalPredicate;
- (id)conditionalPredicate;
- (void)setPropertyPredicate:(id)arg1;
- (id)propertyPredicate;
- (bool)hasType;
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
