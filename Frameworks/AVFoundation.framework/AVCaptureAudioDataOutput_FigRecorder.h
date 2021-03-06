/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioDataOutputInternal_FigRecorder, <AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder>, NSObject<OS_dispatch_queue>;

@interface AVCaptureAudioDataOutput_FigRecorder : AVCaptureOutput_FigRecorder  {
    AVCaptureAudioDataOutputInternal_FigRecorder *_internal;
}

@property(readonly) <AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder> * sampleBufferDelegate;
@property(readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;

+ (void)initialize;

- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
- (bool)isTheOnlyDataOutput;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)setSession:(id)arg1;
- (void)dealloc;

@end
