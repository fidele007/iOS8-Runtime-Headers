/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayerViewController, NSArray, AVPlayerControllerTimeResolver, AVPlayerController;

@interface AVPlaybackControlsViewController : UIViewController  {
    AVPlayerController *_playerController;
    AVPlayerControllerTimeResolver *_intervalTimeResolver;
    AVPlayerControllerTimeResolver *_resolutionTimeResolver;
    id _AVSystemControllerCurrentRouteHasVolumeControlDidChangeObserver;
    bool_showsDoneButton;
    bool_playing;
    bool_scrubberEnabled;
    bool_scanBackwardButtonEnabled;
    bool_playPauseButtonEnabled;
    bool_scanForwardButtonEnabled;
    bool_showsStreamingControls;
    bool_skipBackwardThirtySecondsButtonEnabled;
    bool_gotoEndOfSeekableRangesButtonEnabled;
    bool_showsScaleButton;
    bool_showsLoadingIndicator;
    bool_showsMediaSelectionButton;
    bool_showsExitFullScreenButton;
    bool_showsVolumeSlider;
    AVPlayerViewController *_playerViewController;
    double _scrubberWidth;
    NSArray *_scrubberLoadedTimeRanges;
    long long _scaleButtonType;
}

@property(retain) AVPlayerController * playerController;
@property AVPlayerViewController * playerViewController;
@property(readonly) double scrubberWidth;
@property bool showsDoneButton;
@property(getter=isPlaying) bool playing;
@property(getter=isScrubberEnabled) bool scrubberEnabled;
@property(retain) NSArray * scrubberLoadedTimeRanges;
@property(getter=isScanBackwardButtonEnabled) bool scanBackwardButtonEnabled;
@property(getter=isPlayPauseButtonEnabled) bool playPauseButtonEnabled;
@property(getter=isScanForwardButtonEnabled) bool scanForwardButtonEnabled;
@property bool showsStreamingControls;
@property(getter=isSkipBackwardThirtySecondsButtonEnabled) bool skipBackwardThirtySecondsButtonEnabled;
@property(getter=isGotoEndOfSeekableRangesButtonEnabled) bool gotoEndOfSeekableRangesButtonEnabled;
@property bool showsScaleButton;
@property long long scaleButtonType;
@property bool showsLoadingIndicator;
@property bool showsMediaSelectionButton;
@property bool showsExitFullScreenButton;
@property bool showsVolumeSlider;


- (bool)showsVolumeSlider;
- (bool)showsMediaSelectionButton;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (bool)showsLoadingIndicator;
- (void)setScaleButtonType:(long long)arg1;
- (long long)scaleButtonType;
- (void)setShowsScaleButton:(bool)arg1;
- (bool)showsScaleButton;
- (bool)isGotoEndOfSeekableRangesButtonEnabled;
- (bool)isSkipBackwardThirtySecondsButtonEnabled;
- (bool)showsStreamingControls;
- (bool)isScanForwardButtonEnabled;
- (bool)isPlayPauseButtonEnabled;
- (bool)isScanBackwardButtonEnabled;
- (id)scrubberLoadedTimeRanges;
- (bool)isScrubberEnabled;
- (bool)showsDoneButton;
- (void)volumeSliderValueChanged:(id)arg1;
- (void)scrubberValueChanged:(id)arg1;
- (void)removeControlForUserInteractionObservation:(id)arg1;
- (void)addControlForUserInteractionObservation:(id)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)scaleButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)setShowsVolumeSlider:(bool)arg1;
- (void)updateScrubberValue:(float)arg1;
- (void)setGotoEndOfSeekableRangesButtonEnabled:(bool)arg1;
- (void)setSkipBackwardThirtySecondsButtonEnabled:(bool)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (double)scrubberWidth;
- (void)setShowsMediaSelectionButton:(bool)arg1;
- (void)setShowsStreamingControls:(bool)arg1;
- (void)setScanForwardButtonEnabled:(bool)arg1;
- (void)setPlayPauseButtonEnabled:(bool)arg1;
- (void)setScanBackwardButtonEnabled:(bool)arg1;
- (void)updateVolumeSliderValue:(float)arg1;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)setScrubberEnabled:(bool)arg1;
- (void)setShowsExitFullScreenButton:(bool)arg1;
- (bool)showsExitFullScreenButton;
- (id)playerViewController;
- (void)setShowsDoneButton:(bool)arg1;
- (void)_updateVolumeSliderVisibility;
- (id)playerController;
- (bool)isPlaying;
- (void)didMoveToParentViewController:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekChapterBackward:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)togglePlayback:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
