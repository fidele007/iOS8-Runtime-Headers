/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOAttribution : PBCodable <NSCopying> {
    NSString *_badge;
    NSString *_badgeChecksum;
    NSString *_logo;
    NSString *_logoChecksum;
    NSString *_name;
    NSString *_url;
}

@property(readonly) bool hasBadge;
@property(retain) NSString * badge;
@property(readonly) bool hasLogo;
@property(retain) NSString * logo;
@property(readonly) bool hasName;
@property(retain) NSString * name;
@property(readonly) bool hasUrl;
@property(retain) NSString * url;
@property(readonly) bool hasBadgeChecksum;
@property(retain) NSString * badgeChecksum;
@property(readonly) bool hasLogoChecksum;
@property(retain) NSString * logoChecksum;


- (bool)hasLogoChecksum;
- (bool)hasBadgeChecksum;
- (void)setLogoChecksum:(id)arg1;
- (void)setBadgeChecksum:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setBadge:(id)arg1;
- (id)logoChecksum;
- (id)badgeChecksum;
- (id)logo;
- (bool)hasLogo;
- (id)badge;
- (bool)hasBadge;
- (bool)hasUrl;
- (bool)hasName;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)url;
- (void)setName:(id)arg1;
- (void)setUrl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
