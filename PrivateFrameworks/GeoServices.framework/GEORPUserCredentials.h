/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {
    NSString *_icloudUserMapsAuthToken;
    NSString *_icloudUserPersonId;
}

@property(readonly) bool hasIcloudUserPersonId;
@property(retain) NSString * icloudUserPersonId;
@property(readonly) bool hasIcloudUserMapsAuthToken;
@property(retain) NSString * icloudUserMapsAuthToken;

+ (id)_credentialsForPrimaryICloudAccount;

- (id)icloudUserMapsAuthToken;
- (id)icloudUserPersonId;
- (bool)hasIcloudUserMapsAuthToken;
- (bool)hasIcloudUserPersonId;
- (void)setIcloudUserMapsAuthToken:(id)arg1;
- (void)setIcloudUserPersonId:(id)arg1;
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
