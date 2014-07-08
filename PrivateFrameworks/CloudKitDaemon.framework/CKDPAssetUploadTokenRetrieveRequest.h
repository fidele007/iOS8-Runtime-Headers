/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordFieldIdentifier, NSMutableArray, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
}

@property(readonly) bool hasType;
@property(retain) CKDPRecordType * type;
@property(readonly) bool hasField;
@property(retain) CKDPRecordFieldIdentifier * field;
@property(retain) NSMutableArray * assets;

+ (id)options;

- (id)assetsAtIndex:(unsigned long long)arg1;
- (void)clearAssets;
- (void)addAssets:(id)arg1;
- (unsigned long long)assetsCount;
- (bool)hasField;
- (void)setField:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (id)field;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(id)arg1;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
