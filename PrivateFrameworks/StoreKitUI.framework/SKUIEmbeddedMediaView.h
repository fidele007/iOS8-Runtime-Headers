/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImageView, UIImage, <SKUIEmbeddedMediaViewDelegate>, MPMoviePlayerController;

@interface SKUIEmbeddedMediaView : UIControl  {
    <SKUIEmbeddedMediaViewDelegate> *_delegate;
    long long _mediaType;
    NSString *_mediaURLString;
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    bool_usingInlinePlayback;
}

@property <SKUIEmbeddedMediaViewDelegate> * delegate;
@property long long mediaType;
@property(copy) NSString * mediaURLString;
@property(readonly) long long playbackState;
@property bool showsThumbnailReflection;
@property long long thumbnailContentMode;
@property(retain) UIImage * thumbnailImage;


- (void)_didFinishPlayback:(id)arg1;
- (void)_didExitFullscreen:(id)arg1;
- (void)_sendPlaybackStateChanged;
- (struct CGSize { double x1; double x2; })_sizeToFitImageSize:(struct CGSize { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)thumbnailContentMode;
- (id)_thumbnailView;
- (id)_newMoviePlayerControllerWithURL:(id)arg1;
- (void)_tearDownMoviePlayer;
- (void)beginInlinePlaybackWithURL:(id)arg1;
- (void)endPlaybackAnimated:(bool)arg1;
- (void)setMediaURLString:(id)arg1;
- (void)setShowsThumbnailReflection:(bool)arg1;
- (void)beginPlaybackAnimated:(bool)arg1;
- (bool)showsThumbnailReflection;
- (void)setThumbnailContentMode:(long long)arg1;
- (id)mediaURLString;
- (void)_playbackStateChanged:(id)arg1;
- (long long)playbackState;
- (void)setMediaType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (long long)mediaType;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)thumbnailImage;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
