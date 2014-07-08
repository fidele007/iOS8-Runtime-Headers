/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITraitCollection, NSArray, CIImage, UIImageAsset;

@interface UIImage : NSObject <NSSecureCoding> {
    void *_imageRef;
    double _scale;
    struct { 
        unsigned int named : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int hasPattern : 1; 
        unsigned int isCIImage : 1; 
        unsigned int renderingMode : 2; 
        unsigned int suppressesAccessibilityHairlineThickening : 1; 
        unsigned int hasDecompressionInfo : 1; 
    } _imageFlags;
    UITraitCollection *_traitCollection;
    UIImageAsset *_imageAsset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _alignmentRectInsets;
}

@property(readonly) double _gkScale;
@property(readonly) struct CGImage { }* _gkCGImage;
@property(readonly) long long _gkImageOrientation;
@property(readonly) long long leftCapWidth;
@property(readonly) long long topCapHeight;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) CIImage * CIImage;
@property(readonly) long long imageOrientation;
@property(readonly) double scale;
@property(readonly) NSArray * images;
@property(readonly) double duration;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } capInsets;
@property(readonly) long long resizingMode;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property(readonly) long long renderingMode;
@property(copy) UITraitCollection * traitCollection;
@property(retain) UIImageAsset * imageAsset;

+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (struct CGSize { double x1; double x2; })_legibilityImageSizeForSize:(struct CGSize { double x1; double x2; })arg1 style:(long long)arg2;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id)arg2;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(double)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(double*)arg2;
+ (long long)_idiomDefinedByPath:(id)arg1;
+ (unsigned long long)_scaleDefinedByPath:(id)arg1;
+ (id)imageAtPath:(id)arg1;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(bool)arg5;
+ (id)_defaultBackgroundGradient;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)_kitImageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 duration:(double)arg3;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForStylePresetNames:(id)arg1 scale:(double)arg2;
+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)_imageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 resizingMode:(long long)arg3 duration:(double)arg4;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (void)_flushCache:(id)arg1;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (void)_flushSharedImageCache;
+ (id)kitImageNamed:(id)arg1;
+ (id)abImageNamed:(id)arg1;
+ (id)ab_tintedImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)ab_imageNamed:(id)arg1;
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(id)arg3;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 rowBytes:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5;
+ (id)_gkImageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImageOrientation:(long long)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (id)socialFrameworkImageNamed:(id)arg1;
+ (id)imageWithPKImage:(id)arg1;
+ (id)blj_imageNamed:(id)arg1;

- (id)initWithData:(id)arg1 cache:(bool)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (long long)resizingMode;
- (long long)renderingMode;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)duration;
- (double)scale;
- (id)_imageWithBrightnessModifiedForLegibilityStyle:(long long)arg1;
- (void)_drawImageForLegibilityStyle:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)_imageForLegibilityStyle:(long long)arg1;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2;
- (id)_tabBarItemImageWithTintColor:(id)arg1 selected:(bool)arg2 metrics:(long long)arg3 style:(long long)arg4 forScreenScale:(double)arg5;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;
- (id)_subimageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 graphicsQuality:(long long)arg4 allowImageResizing:(bool)arg5;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 graphicsQuality:(long long)arg4;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 allowImageResizing:(bool)arg4;
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(bool)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2 scale:(double)arg3;
- (id)_serializedData;
- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)_isInvisibleAndGetIsTranslucent:(bool*)arg1;
- (void)_setNamed:(bool)arg1;
- (bool)_isCached;
- (void)_setCached:(bool)arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 operation:(int)arg2;
- (struct CGImage { }*)imageRef;
- (struct CGColor { }*)_patternColor;
- (struct CGColor { }*)_tiledPatternColor;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fraction:(double)arg2;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fraction:(double)arg3;
- (void)compositeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fraction:(double)arg3;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 operation:(int)arg2 fraction:(double)arg3;
- (long long)topCapHeight;
- (long long)leftCapWidth;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;
- (id)_imageThatSuppressesAccessibilityHairlineThickening;
- (id)_flatImageWithColor:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics;
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(long long)arg2;
- (id)_initWithData:(id)arg1 scale:(double)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2;
- (void)setImageAsset:(id)arg1;
- (id)imageAsset;
- (id)_automationID;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageWithRenderingMode:(long long)arg1;
- (id)_primitiveImageAsset;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (id)_cachedImageStyledWithPresets:(id)arg1 forTintColor:(id)arg2;
- (struct CGSize { double x1; double x2; })_sizeInPixels;
- (bool)_isNamed;
- (id)CIImage;
- (void)setTraitCollection:(id)arg1;
- (void)_setSuppressesAccessibilityHairlineThickening:(bool)arg1;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2 cache:(bool)arg3;
- (id)initWithContentsOfFile:(id)arg1 cache:(bool)arg2;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCIImage:(id)arg1;
- (bool)_isDecompressing;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 renderingIntent:(int)arg4;
- (void)_startEagerDecompression;
- (void)_saveDecompressedImage:(struct CGImage { }*)arg1;
- (void)_decompressionFallbackImageCreation;
- (void)_setDecompressionInfo:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (void)_decompressionComplete;
- (id)_decompressionInfo;
- (void)_preheatBitmapData;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(bool)arg9;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizingMode:(long long)arg2;
- (id)images;
- (id)_resizableImageWithCapMask:(int)arg1;
- (bool)_isTiledWhenStretchedToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isSubimage;
- (bool)_suppressesAccessibilityHairlineThickening;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (long long)imageOrientation;
- (struct CGImage { }*)CGImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentStretchInPixels;
- (id)_initWithOtherImage:(id)arg1;
- (void)_setAlwaysStretches:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (bool)_isResizable;
- (void)_configureImage:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (bool)_canEncodeWithName:(id)arg1 coder:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)traitCollection;
- (id)patternColor;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fraction:(double)arg2 operation:(int)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (id)imageWithShadow:(id)arg1;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)MP_imageByOverlayingColor:(id)arg1;
- (id)MP_flatImageWithLinearGradientFromTopColor:(id)arg1 toBottomColor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bitmapRectFromImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageWithShadow:(id)arg1;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 padColor:(id)arg3;
- (void)_gkReadAtSize:(struct CGSize { double x1; double x2; })arg1 ARGBHostEndianBytes:(id)arg2;
- (long long)_gkImageOrientation;
- (struct CGImage { }*)_gkCGImage;
- (double)_gkScale;
- (id)_mapkit_dimmedImage;
- (id)sbf_imageMaskedByColor:(id)arg1 withShadow:(id)arg2;
- (id)sbf_imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)sbf_invertedMaskImage;
- (id)sbf_maskImage;
- (id)sbf_imageWithShadow:(id)arg1;
- (id)sbf_imageMaskedByColor:(id)arg1;
- (id)newImageRotatedByDegrees:(float)arg1;
- (id)newImageWithOrientation:(long long)arg1;
- (void*)PL_imageContents;
- (id)pl_imageJPEGData;
- (id)ASCIIDescription;
- (id)ASCIIDescriptionWithWidth:(long long)arg1 height:(long long)arg2;
- (id)tintedImageWithColor:(id)arg1;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 rightCapWidth:(long long)arg2;
- (struct CGSize { double x1; double x2; })alignmentSize;
- (id)wlImageByRecoloringWithColor:(id)arg1;
- (id)pkui_resizableImageByTilingCenterPixel;

@end
