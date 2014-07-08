/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    unsigned int _badgeCount;
    bool_forDevice;
    struct { 
        unsigned int badgeCount : 1; 
        unsigned int forDevice : 1; 
    } _has;
}

@property bool hasBadgeCount;
@property unsigned int badgeCount;
@property bool hasForDevice;
@property bool forDevice;

+ (id)options;

- (bool)forDevice;
- (unsigned int)badgeCount;
- (bool)hasForDevice;
- (void)setHasForDevice:(bool)arg1;
- (void)setForDevice:(bool)arg1;
- (bool)hasBadgeCount;
- (void)setHasBadgeCount:(bool)arg1;
- (void)setBadgeCount:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
