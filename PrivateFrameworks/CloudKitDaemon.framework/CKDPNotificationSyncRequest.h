/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    unsigned int _maxChanges;
    NSData *_serverChangeToken;
    struct { 
        unsigned int maxChanges : 1; 
    } _has;
}

@property(readonly) bool hasServerChangeToken;
@property(retain) NSData * serverChangeToken;
@property bool hasMaxChanges;
@property unsigned int maxChanges;

+ (id)options;

- (unsigned int)maxChanges;
- (bool)hasMaxChanges;
- (void)setHasMaxChanges:(bool)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (bool)hasServerChangeToken;
- (void)setServerChangeToken:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)serverChangeToken;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
