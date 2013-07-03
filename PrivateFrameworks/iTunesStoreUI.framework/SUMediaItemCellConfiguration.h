/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration  {
}

@property(readonly) struct CGSize { float x1; float x2; } artworkSize;
@property(readonly) int mediaIconType;
@property(readonly) BOOL showContentRating;

+ (id)copyDefaultContext;

- (BOOL)showContentRating;
- (int)mediaIconType;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_ratingBorderInsets;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)copyImageDataProvider;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (float)alphaForLabelAtIndex:(unsigned int)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned int)arg3;
- (float)alphaForImageAtIndex:(unsigned int)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned int)arg3;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;

@end