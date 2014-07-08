/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {
    unsigned long long _durationFromVoiceRecordingEnd;
    unsigned long long _durationFromVoiceSendEnd;
    unsigned long long _timestamp;
    struct { 
        unsigned int durationFromVoiceRecordingEnd : 1; 
        unsigned int durationFromVoiceSendEnd : 1; 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasDurationFromVoiceRecordingEnd;
@property unsigned long long durationFromVoiceRecordingEnd;
@property bool hasDurationFromVoiceSendEnd;
@property unsigned long long durationFromVoiceSendEnd;


- (unsigned long long)durationFromVoiceSendEnd;
- (unsigned long long)durationFromVoiceRecordingEnd;
- (bool)hasDurationFromVoiceSendEnd;
- (void)setHasDurationFromVoiceSendEnd:(bool)arg1;
- (void)setDurationFromVoiceSendEnd:(unsigned long long)arg1;
- (bool)hasDurationFromVoiceRecordingEnd;
- (void)setHasDurationFromVoiceRecordingEnd:(bool)arg1;
- (void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
