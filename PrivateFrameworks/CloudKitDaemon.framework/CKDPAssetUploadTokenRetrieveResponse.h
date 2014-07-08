/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray *_uploadTokens;
}

@property(retain) NSMutableArray * uploadTokens;


- (void)setUploadTokens:(id)arg1;
- (id)uploadTokens;
- (void)clearUploadTokens;
- (unsigned long long)uploadTokensCount;
- (void)addUploadTokens:(id)arg1;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
