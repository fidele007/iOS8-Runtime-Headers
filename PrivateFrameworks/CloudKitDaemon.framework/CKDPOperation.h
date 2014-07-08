/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString;

@interface CKDPOperation : PBCodable <NSCopying> {
    NSString *_operationUUID;
    int _type;
    bool_last;
    bool_synchronousMode;
    struct { 
        unsigned int type : 1; 
        unsigned int last : 1; 
        unsigned int synchronousMode : 1; 
    } _has;
}

@property(readonly) bool hasOperationUUID;
@property(retain) NSString * operationUUID;
@property bool hasType;
@property int type;
@property bool hasSynchronousMode;
@property bool synchronousMode;
@property bool hasLast;
@property bool last;


- (bool)last;
- (bool)synchronousMode;
- (bool)hasLast;
- (void)setHasLast:(bool)arg1;
- (bool)hasSynchronousMode;
- (void)setHasSynchronousMode:(bool)arg1;
- (void)setSynchronousMode:(bool)arg1;
- (bool)hasOperationUUID;
- (id)operationUUID;
- (void)setOperationUUID:(id)arg1;
- (void)setLast:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
