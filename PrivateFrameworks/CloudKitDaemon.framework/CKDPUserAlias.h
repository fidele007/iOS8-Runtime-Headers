/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString;

@interface CKDPUserAlias : PBCodable <NSCopying> {
    NSString *_identifier;
    int _type;
    struct { 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) bool hasIdentifier;
@property(retain) NSString * identifier;
@property bool hasType;
@property int type;


- (bool)hasIdentifier;
- (void)copyTo:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
