/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {
    UIColor *_backgroundColor;
    struct CGSize { 
        double width; 
        double height; 
    } _iconSize;
    SKUIColorScheme *_colorScheme;
}

@property(readonly) struct CGSize { double x1; double x2; } iconSize;
@property(readonly) struct CGSize { double x1; double x2; } imageSize;
@property(retain) UIColor * backgroundColor;
@property(retain) SKUIColorScheme * colorScheme;

+ (id)swooshConsumer;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)wishlistConsumer;
+ (id)gridConsumer;
+ (id)chartsConsumer;
+ (id)cardConsumer;
+ (id)consumerWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2;
+ (id)giftThemeConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftResultConsumer;
+ (id)giftComposeConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposePosterConsumer;
+ (id)smartBannerConsumer;

- (struct CGSize { double x1; double x2; })iconSize;
- (id)imageForColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (struct CGSize { double x1; double x2; })imageSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
