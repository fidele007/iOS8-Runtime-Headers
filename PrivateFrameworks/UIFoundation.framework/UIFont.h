/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface UIFont : NSObject <NSCopying> {
}

@property(retain,readonly) NSString * familyName;
@property(retain,readonly) NSString * fontName;
@property(readonly) double pointSize;
@property(readonly) double ascender;
@property(readonly) double descender;
@property(readonly) double capHeight;
@property(readonly) double xHeight;
@property(readonly) double lineHeight;
@property(readonly) double leading;

+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (double)buttonFontSize;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_sharedZeroPointFont;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (id)_sharedFontCache;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)userFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1;
+ (void)initialize;
+ (id)classFallbacksForKeyedArchiver;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (double)labelFontSize;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (double)systemFontSize;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (double)smallSystemFontSize;
+ (id)_ui_bulletFontForFont:(id)arg1;
+ (id)italicTimeFontOfSize:(double)arg1;
+ (id)boldTimeFontOfSize:(double)arg1;
+ (id)timeFontWithName:(id)arg1 size:(double)arg2;
+ (id)_timeFontFromFont:(id)arg1;
+ (id)timeFontOfSize:(double)arg1;
+ (void)ab_setIgnoreUserFontSize:(bool)arg1;
+ (bool)_shouldUseDefaultFont;
+ (bool)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)aa_fontForLargeButton;
+ (id)aa_fontForPrimaryInformationLabel;
+ (id)aa_fontForLargerInformationLabel;
+ (id)aa_fontForPageTitle;
+ (id)cam_cameraModeDialKerningForContentSize:(id)arg1;
+ (id)cam_cameraKerningForContentSize:(id)arg1;
+ (id)cam_cameraTimerFontForContentSize:(id)arg1;
+ (id)cam_cameraFontForContentSize:(id)arg1;
+ (double)_interpolatedAdditionalFontSizeForMainScreen;
+ (id)cam_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)cam_cameraModeDialFontForContentSize:(id)arg1;
+ (id)cam_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cam_cameraFontOfSize:(double)arg1;

- (unsigned long long)mostCompatibleStringEncoding;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (id)_familyName;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (bool)_isHiraginoFont;
- (struct __CTFont { }*)CTFont;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_textMatrixTransformForContext:(struct CGContext { }*)arg1;
- (bool)isFixedPitch;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (id)_alternateSystemFonts;
- (id)markupDescription;
- (id)familyNameForCSSFontFamilyValue;
- (double)lineHeight;
- (id)familyName;
- (bool)isIBTextStyleFont;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (double)_bodyLeading;
- (bool)isSystemFont;
- (id)initWithMarkupDescription:(id)arg1;
- (bool)_getLatin1GlyphMapping:(const unsigned short**)arg1 andAdvanceMapping:(const struct CGSize {}**)arg2;
- (double)_baseLineHeightForFont:(bool)arg1;
- (id)lastResortFont;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long*)arg4;
- (int)traits;
- (id)coveredCharacterSet;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(double)arg1;
- (unsigned long long)numberOfGlyphs;
- (unsigned short)glyphWithName:(id)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)_kernOverride;
- (unsigned long long)renderingMode;
- (bool)_isDefaultFace;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long long)arg2;
- (unsigned long long)getCaretPositions:(double*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (void)setInContext:(struct CGContext { }*)arg1;
- (void)getVerticalOriginTranslations:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)getAdvancements:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForFont;
- (double)ascender;
- (double)underlineThickness;
- (double)_leading;
- (double)descender;
- (double)xHeight;
- (bool)isVertical;
- (double)pointSize;
- (struct CGFont { }*)_backingCGSFont;
- (struct CGSize { double x1; double x2; })advancementForGlyph:(unsigned short)arg1;
- (id)verticalFont;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (double)_scaledValueForValue:(double)arg1;
- (double)leading;
- (double)capHeight;
- (id)ab_italicFont;
- (id)ab_boldFont;
- (struct CGPoint { double x1; double x2; })mf_originPointFromMidlinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_caplinePointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_baselinePointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_caplinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_baselinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_mapkit_lineHeight;

@end
