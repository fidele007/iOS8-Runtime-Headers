/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class SBSUIWallpaperPreviewViewController, NSArray, PLWallpaperNavigationItem, NSString;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate, UIActionSheetDelegate> {
    PLWallpaperNavigationItem *_navItem;
    int _wallpaperMode;
    NSArray *_navigationToolbarItems;
    bool_saveWallpaperData;
    NSString *_wallpaperTitle;
    unsigned int _didSetImageMode : 1;
    bool_isWallpaperEdit;
    SBSUIWallpaperPreviewViewController *_wallpaperPreviewViewController;
    long long _previewVariant;
    long long _previewType;
}

@property(retain) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;
@property bool saveWallpaperData;
@property(copy) NSString * wallpaperTitle;
@property long long previewVariant;
@property long long previewType;
@property bool isWallpaperEdit;


- (void)setIsWallpaperEdit:(bool)arg1;
- (bool)isWallpaperEdit;
- (long long)previewVariant;
- (void)setWallpaperTitle:(id)arg1;
- (void)setSaveWallpaperData:(bool)arg1;
- (void)setupWallpaperPreview;
- (void)_adjustScrollViewGeometry;
- (void)setWallpaperFromArgs:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)_savePhoto;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (bool)saveWallpaperData;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_backgroundCropWallpaper;
- (id)wallpaperTitle;
- (void)_updateTitles;
- (void)_updatePreviewFrame:(id)arg1;
- (void)setWallpaperPreviewViewController:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (void)setPreviewVariant:(long long)arg1;
- (void)prepareForForeground:(id)arg1;
- (void)prepareForBackground:(id)arg1;
- (id)wallpaperPreviewViewController;
- (long long)desiredStatusBarAnimation;
- (bool)wantsStatusBarVisible;
- (bool)clientIsWallpaper;
- (unsigned long long)_tileAutoresizingMask;
- (void)setupNavigationItem;
- (unsigned long long)_contentAutoresizingMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrame;
- (int)cropOverlayMode;
- (bool)uiipc_useTelephonyUI;
- (void)motionToggledManually:(bool)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (int)imageFormat;
- (long long)previewType;
- (void)setPreviewType:(long long)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (id)navigationItem;

@end
