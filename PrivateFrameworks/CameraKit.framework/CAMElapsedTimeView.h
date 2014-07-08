/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView, NSTimer, UILabel, NSDate;

@interface CAMElapsedTimeView : UIView  {
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property(readonly) UILabel * _timeLabel;
@property(readonly) UIImageView * _recordingImageView;
@property(readonly) NSTimer * _updateTimer;
@property(readonly) NSDate * _startTime;


- (id)_updateTimer;
- (id)_recordingImageView;
- (id)_timeLabel;
- (void)_endRecordingAnimation;
- (void)_beginRecordingAnimation;
- (void)_setStartTime:(id)arg1;
- (void)_commonCAMElapsedTimeViewInitialization;
- (void)endTimer;
- (void)updateToContentSize:(id)arg1;
- (id)_startTime;
- (void)resetTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_update:(id)arg1;
- (void)startTimer;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
