/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse  {
    bool_unplayable;
    bool_didCompleteUnexpectedly;
    short _assetSubtype;
    int _recordingStoppedReason;
    NSString *_videoCapturePath;
    UIImage *_videoPreviewImage;
    double _duration;
}

@property(copy) NSString * videoCapturePath;
@property int recordingStoppedReason;
@property(retain) UIImage * videoPreviewImage;
@property(getter=isSuccessful,readonly) bool successful;
@property short assetSubtype;
@property double duration;
@property(getter=isUnplayable) bool unplayable;
@property bool didCompleteUnexpectedly;

+ (double)minimumVideoCaptureDuration;

- (void)setDidCompleteUnexpectedly:(bool)arg1;
- (bool)didCompleteUnexpectedly;
- (void)setUnplayable:(bool)arg1;
- (void)setRecordingStoppedReason:(int)arg1;
- (bool)isUnplayable;
- (id)videoPreviewImage;
- (int)recordingStoppedReason;
- (id)videoCapturePath;
- (void)setVideoPreviewImage:(id)arg1;
- (void)setVideoCapturePath:(id)arg1;
- (bool)isSuccessful;
- (short)assetSubtype;
- (void)setAssetSubtype:(short)arg1;
- (void)setDuration:(double)arg1;
- (id)init;
- (void).cxx_destruct;
- (double)duration;

@end
