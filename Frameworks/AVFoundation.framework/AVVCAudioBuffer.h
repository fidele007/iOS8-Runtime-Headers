/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVVCAudioBuffer : NSObject  {
    void *_impl;
}

@property(readonly) int channels;
@property(readonly) int bytesCapacity;
@property int bytesDataSize;
@property(readonly) void* data;
@property(readonly) int packetDescriptionCapacity;
@property(readonly) int packetDescriptionCount;
@property(readonly) struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }* packetDescriptions;


- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg1 count:(int)arg2;
- (struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)packetDescriptions;
- (int)packetDescriptionCount;
- (int)packetDescriptionCapacity;
- (void)setBytesDataSize:(int)arg1;
- (int)bytesDataSize;
- (int)bytesCapacity;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1 channels:(int)arg2;
- (int)channels;
- (void*)data;
- (void)finalize;
- (void)dealloc;

@end
