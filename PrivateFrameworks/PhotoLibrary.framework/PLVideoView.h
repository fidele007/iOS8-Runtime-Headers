/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, UIMovieScrubber, PLSlalomRegionEditor, PLProgressStack, NSMutableArray, NSString, PLPhotoBakedThumbnails, UIImage, UIActivityIndicatorView, NSTimer, PLVideoPosterFrameView, NSArray, <PLVideoViewDelegate>, PLMoviePlayerController, NSMutableDictionary, PLVideoEditingOverlayView, UIView<PLVideoOverlayButton>, NSLock, UIView, PFVideoAVObjectBuilder, AVAssetExportSession, NSObject<OS_dispatch_queue>, PLPhotoTileViewController, UIImageView, PLManagedAsset, NSURL;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate> {
    PLManagedAsset *_videoCameraImage;
    NSString *_pathToOriginalVideo;
    NSURL *_videoURL;
    PLPhotoTileViewController *_imageTile;
    PLVideoPosterFrameView *_posterFrameView;
    UIView *_videoOverlayBackgroundView;
    PLVideoEditingOverlayView *_trimMessageView;
    UIImage *_posterFrameImage;
    UIImage *_snapshotImage;
    double _scrubberWidth;
    unsigned long long _scaleMode;
    UIView *_scrubberBackgroundView;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    struct CGSize { 
        double width; 
        double height; 
    } _thumbnailSize;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    AVAssetExportSession *_exportSession;
    double _remakerStartTime;
    double _remakerEndTime;
    NSString *_trimmedPath;
    NSString *_videoPathAfterTrim;
    NSTimer *_trimProgressTimer;
    PLManagedAsset *_trimmedVideoClip;
    PLProgressStack *_trimProgressStack;
    float _progress;
    long long _interfaceOrientation;
    PLMoviePlayerController *_moviePlayer;
    long long _orientationWhenLastDisplayed;
    <PLVideoViewDelegate> *_delegate;
    double _maximumTrimLength;
    double _lastScrubbedValue;
    double _lastActualValue;
    double _duration;
    double _cachedCurrentPlaybackTime;
    NSArray *_imageGenerators;
    NSLock *_thumbnailReqlock;
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;
    AVAssetExportSession *_airplayExportSession;
    bool_isAirPlay;
    unsigned int _showsPlayButton : 1;
    unsigned int _showsScrubber : 1;
    unsigned int _canEdit : 1;
    unsigned int _loadMediaImmediately : 1;
    unsigned int _scrubberIsSubview : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didLayout : 1;
    unsigned int _wasPlayingBeforeScrub : 1;
    unsigned int _playFromBeginning : 1;
    unsigned int _needsReloadScrubberThumbnails : 1;
    unsigned int _playing : 1;
    unsigned int _editing : 1;
    unsigned int _disableEditAfterTrim : 1;
    unsigned int _scrubbing : 1;
    unsigned int _scrubbingToRight : 1;
    unsigned int _deleteOriginalFile : 1;
    unsigned int _passthroughTrimming : 1;
    unsigned int _preparingMoviePlayer : 1;
    unsigned int _preparedMoviePlayer : 1;
    unsigned int _isMoviePlayerActive : 1;
    unsigned int _moviePlayerIsReady : 1;
    unsigned int _moviePlayerIsReadyForDisplay : 1;
    unsigned int _moviePlayerDidBuffer : 1;
    unsigned int _showingOverlay : 1;
    unsigned int _showingScrubber : 1;
    unsigned int _showScrubberWhenMovieIsReady : 1;
    unsigned int _playbackDidBegin : 1;
    unsigned int _loadScrubberThumbnails : 1;
    unsigned int _videoIsLandscape : 1;
    unsigned int _canCreateMetadata : 1;
    unsigned int _createPreviewPosterFrame : 1;
    unsigned int _isTrimming : 1;
    unsigned int _wasTrimmedInPlace : 1;
    unsigned int _remakingFailed : 1;
    NSMutableArray *_summaryThumbnailRequestTimestamps;
    NSMutableArray *_detailThumbnailRequestTimestamps;
    UIMovieScrubber *_scrubber;
    PLSlalomRegionEditor *_slalomRegionEditor;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIActivityIndicatorView *_spinner;
    UIActivityIndicatorView *_shadowSpinner;
    UIView<PLVideoOverlayButton> *_videoOverlayPlayButton;
    bool_allowSlalomEditor;
    bool_prepareMoviePlayerForScrubberAutomatically;
    bool_shouldPlayVideoWhenViewAppears;
    bool__didInsertMoviePlayerView;
    bool__didEditSlalom;
    bool__isFetchingVideo;
    bool__localVideoUnavailable;
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
    long long __expectedNotificationsCount;
}

@property(retain,readonly) NSString * pathForVideoFile;
@property <PLVideoViewDelegate> * delegate;
@property PLPhotoTileViewController * imageTile;
@property(readonly) PLManagedAsset * videoCameraImage;
@property(readonly) long long interfaceOrientation;
@property(retain) PLManagedAsset * trimmedVideoClip;
@property bool allowSlalomEditor;
@property(readonly) UIView * scrubberBackgroundView;
@property(readonly) UIImage * posterFrameImage;
@property(readonly) PLVideoPosterFrameView * posterFrameView;
@property(readonly) double duration;
@property(getter=isEditing) bool editing;
@property(readonly) double startTime;
@property(readonly) double endTime;
@property(readonly) NSString * videoPathAfterTrim;
@property(readonly) UIImageView * previewImageView;
@property bool showsPlayOverlay;
@property bool showsScrubber;
@property bool prepareMoviePlayerForScrubberAutomatically;
@property bool loadMediaImmediately;
@property bool shouldPlayVideoWhenViewAppears;
@property bool canEdit;
@property bool scrubberIsSubview;
@property double scrubberWidth;
@property double currentTime;
@property(retain) PLProgressStack * trimProgressStack;
@property(retain,readonly) NSString * _pathForVideoPreviewFile;
@property(retain,readonly) NSString * _pathForPrebakedLandscapeScrubberThumbnails;
@property(retain,readonly) NSString * _pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) bool _mediaIsPlayable;
@property(readonly) bool _didSetPhotoData;
@property bool _didInsertMoviePlayerView;
@property(setter=_setDidEditSlalom:) bool _didEditSlalom;
@property(readonly) PFVideoAVObjectBuilder * _videoAVObjectBuilder;
@property(readonly) bool _isFetchingVideo;
@property(readonly) bool _localVideoUnavailable;
@property(readonly) long long _expectedNotificationsCount;

+ (id)_dequeueOverlayPlayButton;
+ (void)_enqueueOverlayPlayButton:(id)arg1;
+ (id)videoViewForVideoFileAtURL:(id)arg1;

- (long long)_expectedNotificationsCount;
- (bool)_isFetchingVideo;
- (id)_videoAVObjectBuilder;
- (void)set_didInsertMoviePlayerView:(bool)arg1;
- (bool)prepareMoviePlayerForScrubberAutomatically;
- (void)setAllowSlalomEditor:(bool)arg1;
- (id)posterFrameView;
- (void)setScrubberWidth:(double)arg1;
- (id)_moviePlayer;
- (bool)scrubberIsSubview;
- (void)notifyRequiredResourcesDownloaded;
- (void)prepareMoviePlayer;
- (bool)showsScrubber;
- (bool)showsPlayOverlay;
- (id)posterFrameImage;
- (void)setPosterFrameImage:(id)arg1;
- (void)viewDidDisappear;
- (void)handleDoubleTap;
- (id)newPreviewImageData:(id*)arg1;
- (bool)wasTrimmedInPlace;
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;
- (void)updateScaleMode;
- (id)videoOverlayPlayButton;
- (id)slalomRegionEditor;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(bool)arg2;
- (id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;
- (void)moviePlayerDidChangeExternalPlaybackType:(id)arg1;
- (bool)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;
- (void)moviePlayerEncounteredAuthenticationError:(id)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
- (void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;
- (void)moviePlayerReadyToDisplay:(id)arg1;
- (void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
- (void)_writeMetadata:(id)arg1 toPath:(id)arg2;
- (void)_deleteFileAtPath:(id)arg1;
- (id)_metadataForFlattenedVideo;
- (id)_readMetadataFromPath:(id)arg1;
- (id)_filePathForFlattenedVideoMetadata;
- (void)_setDidEditSlalom:(bool)arg1;
- (bool)_didEditSlalom;
- (void)_scrubToSlalomRegionEditorStartHandle:(bool)arg1;
- (void)_handleScreenConnectionChange:(bool)arg1;
- (bool)_scrubberTimeNeedsMapping;
- (double)_scrubberTimeFromMovieTime:(double)arg1;
- (bool)_didSetPhotoData;
- (bool)_mediaIsVideo;
- (id)_videoSnapshot;
- (bool)loadMediaImmediately;
- (void)_updatePosterImageView;
- (void)_reloadScrubberThumbnailsIfNeeded;
- (void)_createScrubberIfNeeded;
- (void)_resetScrubberUpdateTimer;
- (void)_resetTrimProgressTimer;
- (void)_exportCompletedWithSuccess:(bool)arg1;
- (bool)_canEditDuration:(double)arg1;
- (void)_commitUpdatedAdjustmentsAndWait:(bool)arg1;
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3;
- (void)_removeTrimProgressTimer;
- (void)cancelTrim;
- (id)trimProgressStack;
- (void)_updateTrimProgress;
- (void)_informDelegateAboutProgressChange:(float)arg1;
- (void)setTrimmedVideoClip:(id)arg1;
- (void)_scrubberAnimationFinished;
- (void)_setPlaying:(bool)arg1;
- (void)_saveCachedThumbnailsIfNecessary;
- (double)_thumbnailTimeFromScrubberTime:(double)arg1;
- (void)_serviceImageGenerationRequests;
- (void)_didScrubToValue:(double)arg1 withHandle:(int)arg2;
- (void)_invalidateSnapshotImage;
- (void)_hideVideoOverlay:(bool)arg1;
- (void)_removeScrubberUpdateTimer;
- (void)_updateScrubberValue;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(bool)arg2 aspectRatio:(float)arg3;
- (void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(bool)arg2;
- (bool)_shouldStreamCloudPhotoLibraryVideo;
- (bool)_localVideoUnavailable;
- (id)_pathForPrebakedPortraitScrubberThumbnails;
- (id)_pathForPrebakedLandscapeScrubberThumbnails;
- (double)_scrubberStartTime;
- (double)_movieScrubberDuration;
- (bool)_canAirPlayCurrentVideo;
- (void)_showVideoOverlay;
- (void)setShowsScrubber:(bool)arg1 duration:(double)arg2;
- (void)_setPlaybackDidBegin:(bool)arg1;
- (void)_setMoviePlayerActive:(bool)arg1;
- (void)_scrubToMovieTime:(double)arg1;
- (double)_movieTimeFromScrubberTime:(double)arg1;
- (id)_optionsForAVURLAsset;
- (void)_updateScrubberForSlowMotion;
- (id)_assetForVideoPath:(id)arg1;
- (void)_configurePlayerForStreamedVideoIfNecessary;
- (bool)_canCreateMetadata;
- (id)_pathForOriginalFile;
- (void)_flattenVideoWithCompletionHandler:(id)arg1;
- (id)_filePathForFlattenedVideo;
- (bool)_isFlattenedVideoUpToDate;
- (bool)_shouldPlayFlattenedVideo;
- (void)_prepareAndResumePlayback;
- (void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)arg1;
- (bool)_canHandleAdjustmentData:(id)arg1;
- (id)_assetForVideoURL:(id)arg1;
- (bool)_canPlayCloudSharedStreamedVideoWithLocalVideo;
- (bool)_mediaIsCloudSharedStreamedVideo;
- (bool)_prepareMoviePlayerIfNeeded;
- (void)_updatePosterFrameVisibility;
- (void)_updateScrubberVisibilityWithDuration:(double)arg1;
- (void)_setNeedsReloadScrubberThumbnails:(bool)arg1;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_insertMoviePlayerViewIfNecessary;
- (id)_pathForVideoPreviewFile;
- (void)_savePreviewPosterFrameImage:(struct CGImage { }*)arg1;
- (void)_configureImageGenerator:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2 forSummaryThumbnails:(bool)arg3;
- (id)_thumbnailSourceAsset;
- (void)_removePlaySpinner;
- (void)_didBeginPlayback;
- (void)_updateSnapshotImage;
- (void)_displayPlaySpinner;
- (void)_verifyOrRestartPlayback;
- (bool)_shouldStreamVideo;
- (void)_playbackFinished;
- (void)_updateScrubberFrame;
- (void)_updateScaleModeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_videoOverlayFadeOutDidFinish;
- (void)playButtonClicked:(id)arg1;
- (bool)_mediaIsPlayable;
- (bool)allowSlalomEditor;
- (void)_updateForEditing;
- (void)_updateSlalomRegionEditorState;
- (void)_updateSlalomRegionEditorRange;
- (double)_scrubberBackgroundHeight;
- (bool)_shouldShowSlalomEditor;
- (void)_hideTrimMessageView:(bool)arg1;
- (bool)_didInsertMoviePlayerView;
- (void)_setupMoviePlayerIfNecessary;
- (bool)_playerIsAirplay;
- (void)_cancelAirplayExportSession;
- (void)_clearImageGenerators;
- (void)setTrimProgressStack:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (bool)_canAccessVideo;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3;
- (id)previewImageView;
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;
- (void)hideTrimMessage;
- (id)scrubberBackgroundView;
- (void)setScrubberIsSubview:(bool)arg1;
- (void)setImageTile:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3;
- (bool)shouldShowCopyCalloutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)trimmedVideoClip;
- (id)videoPathAfterTrim;
- (void)trimUsingMode:(int)arg1 saveACopy:(bool)arg2;
- (id)videoCameraImage;
- (id)videoScrubber;
- (id)imageTile;
- (void)setShouldPlayVideoWhenViewAppears:(bool)arg1;
- (bool)shouldPlayVideoWhenViewAppears;
- (void)setShowsScrubber:(bool)arg1;
- (void)notifyOfChange:(id)arg1 shouldReloadBlock:(id)arg2;
- (void)removeVideoOverlay;
- (bool)deleteOriginalFileAfterTrim;
- (bool)isTrimming;
- (void)forceStop;
- (bool)playingToVideoOut;
- (bool)playingToAirTunes;
- (void)setLoadMediaImmediately:(bool)arg1;
- (void)setShowsPlayOverlay:(bool)arg1;
- (void)setPrepareMoviePlayerForScrubberAutomatically:(bool)arg1;
- (void)setCanEdit:(bool)arg1;
- (void)_tearDownMoviePlayer;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)pathForVideoFile;
- (bool)canEdit;
- (void)viewDidAppear;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (bool)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerDurationAvailable:(id)arg1;
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (void)toggleScaleMode:(float)arg1;
- (double)scrubberWidth;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)play;
- (bool)isPlaying;
- (bool)isEditing;
- (double)endTime;
- (void)pause;
- (void)_setDuration:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (double)startTime;
- (void)dealloc;
- (id)description;
- (void)setProgress:(id)arg1;
- (void)stop;
- (double)duration;
- (void)_reset;
- (void)setMaximumTrimLength:(double)arg1;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidCancelEditing:(id)arg1;
- (void)movieScrubberWillBeginEditing:(id)arg1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(bool)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
