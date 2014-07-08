/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushReceivedSlow : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    unsigned int _isFromStorage;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _receiveOffset;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int isFromStorage : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int receiveOffset : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasReceiveOffset;
@property unsigned int receiveOffset;
@property bool hasPayloadSize;
@property unsigned int payloadSize;
@property bool hasIsFromStorage;
@property unsigned int isFromStorage;
@property bool hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)isFromStorage;
- (unsigned int)payloadSize;
- (unsigned int)receiveOffset;
- (bool)hasIsFromStorage;
- (void)setHasIsFromStorage:(bool)arg1;
- (void)setIsFromStorage:(unsigned int)arg1;
- (bool)hasPayloadSize;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (bool)hasReceiveOffset;
- (void)setHasReceiveOffset:(bool)arg1;
- (void)setReceiveOffset:(unsigned int)arg1;
- (unsigned int)dualChannelState;
- (bool)hasDualChannelState;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (bool)hasLinkQuality;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (bool)hasGuid;
- (void)setConnectionType:(unsigned int)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)linkQuality;
- (unsigned int)connectionType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
