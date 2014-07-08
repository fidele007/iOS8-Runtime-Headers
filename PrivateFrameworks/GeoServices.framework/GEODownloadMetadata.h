/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEODownloadMetadata : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_etag;
    NSString *_url;
}

@property double timestamp;
@property(readonly) bool hasEtag;
@property(retain) NSString * etag;
@property(readonly) bool hasUrl;
@property(retain) NSString * url;


- (bool)hasUrl;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)url;
- (void)setUrl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
