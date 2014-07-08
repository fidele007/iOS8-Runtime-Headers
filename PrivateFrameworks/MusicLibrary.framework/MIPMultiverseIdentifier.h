/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSMutableArray;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {
    long long _accountId;
    long long _purchaseHistoryId;
    long long _sagaId;
    long long _storeId;
    NSMutableArray *_libraryIdentifiers;
    int _mediaObjectType;
    int _mediaType;
    NSString *_name;
    struct { 
        unsigned int accountId : 1; 
        unsigned int purchaseHistoryId : 1; 
        unsigned int sagaId : 1; 
        unsigned int storeId : 1; 
        unsigned int mediaObjectType : 1; 
        unsigned int mediaType : 1; 
    } _has;
}

@property bool hasMediaObjectType;
@property int mediaObjectType;
@property bool hasMediaType;
@property int mediaType;
@property(readonly) bool hasName;
@property(retain) NSString * name;
@property bool hasAccountId;
@property long long accountId;
@property bool hasStoreId;
@property long long storeId;
@property bool hasSagaId;
@property long long sagaId;
@property bool hasPurchaseHistoryId;
@property long long purchaseHistoryId;
@property(retain) NSMutableArray * libraryIdentifiers;


- (void)setLibraryIdentifiers:(id)arg1;
- (bool)hasName;
- (void)copyTo:(id)arg1;
- (long long)purchaseHistoryId;
- (long long)sagaId;
- (long long)accountId;
- (bool)hasPurchaseHistoryId;
- (void)setHasPurchaseHistoryId:(bool)arg1;
- (void)setPurchaseHistoryId:(long long)arg1;
- (bool)hasSagaId;
- (void)setHasSagaId:(bool)arg1;
- (void)setSagaId:(long long)arg1;
- (bool)hasAccountId;
- (void)setHasAccountId:(bool)arg1;
- (void)setAccountId:(long long)arg1;
- (bool)hasMediaType;
- (void)setHasMediaType:(bool)arg1;
- (bool)hasMediaObjectType;
- (void)setHasMediaObjectType:(bool)arg1;
- (void)setMediaObjectType:(int)arg1;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (void)clearLibraryIdentifiers;
- (unsigned long long)libraryIdentifiersCount;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setStoreId:(long long)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (long long)storeId;
- (bool)hasStoreId;
- (id)libraryIdentifiers;
- (int)mediaObjectType;
- (void)setMediaType:(int)arg1;
- (void)setName:(id)arg1;
- (int)mediaType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
