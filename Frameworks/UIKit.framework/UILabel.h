/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSString, NSAttributedString, NSMutableDictionary, _UILabelScaledMetrics, NSDictionary, UIColor;

@interface UILabel : UIView <_UIMultilineTextContentSizing, NSCoding, ABText> {
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    UIColor *_highlightedColor;
    long long _numberOfLines;
    long long _measuredNumberOfLines;
    double _lastLineBaseline;
    double _previousLastLineBaseline;
    double _firstLineBaseline;
    double _previousFirstLineBaseline;
    double _minimumScaleFactor;
    id _content;
    NSAttributedString *_synthesizedAttributedText;
    NSMutableDictionary *_defaultAttributes;
    double _minimumFontSize;
    long long _lineSpacing;
    id _layout;
    _UILabelScaledMetrics *_scaledMetrics;
    struct { 
        unsigned int unused1 : 3; 
        unsigned int highlighted : 1; 
        unsigned int autosizeTextToFit : 1; 
        unsigned int autotrackTextToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int unused2 : 2; 
        unsigned int enabled : 1; 
        unsigned int wordRoundingEnabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int marqueeEnabled : 1; 
        unsigned int marqueeRunable : 1; 
        unsigned int marqueeRequired : 1; 
        unsigned int drawsLetterpress : 1; 
        unsigned int unused3 : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int explicitBaselineOffset : 1; 
        unsigned int usesSimpleTextEffects : 1; 
        unsigned int isComplexString : 1; 
        unsigned int wantsUnderlineForAccessibilityButtonShapesEnabled : 1; 
    } _textLabelFlags;
    bool__textColorFollowsTintColor;
    double _preferredMaxLayoutWidth;
}

@property(copy) NSString * ab_text;
@property(copy) NSDictionary * ab_textAttributes;
@property(readonly) double _capOffsetFromBoundsTop;
@property(readonly) double _firstLineBaselineOffsetFromBoundsTop;
@property(setter=_setFirstLineCapFrameOriginY:) double _firstLineCapFrameOriginY;
@property(setter=_setFirstLineBaselineFrameOriginY:) double _firstLineBaselineFrameOriginY;
@property(setter=_setLastLineBaselineFrameOriginY:) double _lastLineBaselineFrameOriginY;
@property(setter=_setDrawsDebugBaselines:) bool _drawsDebugBaselines;
@property(setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:) bool _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property(retain) UIColor * shadowColor;
@property struct CGSize { double x1; double x2; } shadowOffset;
@property long long textAlignment;
@property long long lineBreakMode;
@property(copy) NSAttributedString * attributedText;
@property(retain) UIColor * highlightedTextColor;
@property(getter=isHighlighted) bool highlighted;
@property(getter=isUserInteractionEnabled) bool userInteractionEnabled;
@property(getter=isEnabled) bool enabled;
@property long long numberOfLines;
@property bool adjustsFontSizeToFitWidth;
@property bool adjustsLetterSpacingToFitWidth;
@property double minimumFontSize;
@property long long baselineAdjustment;
@property double minimumScaleFactor;
@property double preferredMaxLayoutWidth;
@property(setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:) bool _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property(readonly) double _lastLineBaseline;
@property long long lineSpacing;
@property(getter=_synthesizedAttributedText,setter=_setSynthesizedAttributedText:,retain) NSAttributedString * _synthesizedAttributedText;
@property(setter=_setTextColorFollowsTintColor:) bool _textColorFollowsTintColor;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAttributedString:(id)arg2 inView:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForString:(id)arg1 withFont:(id)arg2 inView:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForAttributedString:(id)arg1 inView:(id)arg2;
+ (struct __CFCharacterSet { }*)_tooBigChars;
+ (id)_defaultAttributes;
+ (id)defaultFont;
+ (Class)layerClass;
+ (struct CGSize { double x1; double x2; })_legacy_adjustSizeForWebKitConstraining:(struct CGSize { double x1; double x2; })arg1 withFont:(id)arg2;

- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)text;
- (void)setLineSpacing:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (long long)lineSpacing;
- (long long)lineBreakMode;
- (id)font;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (id)color;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)minimumFontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_image;
- (void)setMinimumScaleFactor:(double)arg1;
- (double)minimumScaleFactor;
- (void)_commonInit;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (bool)_drawsDebugBaselines;
- (bool)_usesSimpleTextEffects;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (struct CGSize { double x1; double x2; })rawSize;
- (void)setRawSize:(struct CGSize { double x1; double x2; })arg1;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)centersHorizontally;
- (void)setCentersHorizontally:(bool)arg1;
- (bool)autotrackTextToFit;
- (void)setAutotrackTextToFit:(bool)arg1;
- (void)_setColor:(id)arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (bool)_shouldShowAccessibilityButtonShapesUnderline;
- (bool)_wantsUnderlineForAccessibilityButtonShapesEnabled;
- (void)_setLastLineBaselineFrameOriginY:(double)arg1;
- (double)_lastLineBaselineFrameOriginY;
- (void)_setFirstLineBaselineFrameOriginY:(double)arg1;
- (double)_firstLineBaselineFrameOriginY;
- (void)_setFirstLineCapFrameOriginY:(double)arg1;
- (double)_firstLineCapFrameOriginY;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (double)_capOffsetFromBoundsTop;
- (double)preferredMaxLayoutWidth;
- (bool)drawsUnderline;
- (void)setDrawsUnderline:(bool)arg1;
- (bool)drawsLetterpress;
- (void)setDrawsLetterpress:(bool)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (bool)_shouldDrawUnderlinesLikeWebKit;
- (void)_setWordRoundingEnabled:(bool)arg1;
- (double)_lastLineBaseline;
- (long long)baselineAdjustment;
- (id)_layoutDebuggingTitle;
- (void)setAdjustsLetterSpacingToFitWidth:(bool)arg1;
- (double)shadowBlur;
- (void)setShadowBlur:(double)arg1;
- (void)_setShadowUIOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setTextColorFollowsTintColor:(bool)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsFromFonts;
- (void)_setSynthesizedAttributedText:(id)arg1;
- (void)_invalidateDefaultAttributes;
- (void)_setDefaultAttributes:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (bool)_drawsUnderline;
- (void)_stopMarqueeWithRedisplay:(bool)arg1;
- (void)_startMarquee;
- (bool)marqueeRunning;
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1;
- (double)_maximumMarqueeTextWidth;
- (id)_siblingMarqueeLabels;
- (void)setMarqueeRunning:(bool)arg1;
- (long long)numberOfLines;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isTextFieldCenteredLabel;
- (void)_startMarqueeIfNecessary;
- (void)_drawFullMarqueeTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })textSizeForWidth:(double)arg1;
- (id)letterpressStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (bool)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 baselineCalculationOnly:(bool)arg2;
- (void)_setShadow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ensureBaselineMetricsReturningBounds;
- (id)highlightedTextColor;
- (bool)_updateScaledMetricsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setAttributedText:(id)arg1 andTakeOwnership:(bool)arg2;
- (void)_baselineOffsetParametersDidChange;
- (bool)_shouldCeilSizeToViewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(bool)arg3;
- (id)_stringDrawingContext;
- (void)setLetterpressStyle:(id)arg1;
- (bool)adjustsLetterSpacingToFitWidth;
- (bool)_attributedStringHasAttributesNotCoveredByPrimitives;
- (void)_setTextAlignment:(long long)arg1;
- (void)_setText:(id)arg1;
- (void)_invalidateAsNeededForNewSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_accessibilityButtonShapesChangedNotification:(id)arg1;
- (void)_invalidateLayout;
- (id)_synthesizedTextAttributes;
- (id)_compatibilityAttributedString;
- (id)currentTextColor;
- (bool)_textColorFollowsTintColor;
- (id)_shadow;
- (void)_invalidateTextSize;
- (void)_invalidateSynthesizedAttributedTextAndLayout;
- (id)_defaultAttributes;
- (double)_actualScaleFactor;
- (id)_associatedScalingLabel;
- (id)_disabledFontColor;
- (struct CGSize { double x1; double x2; })textSize;
- (void)setHighlightedTextColor:(id)arg1;
- (void)_setWantsUnderlineForAccessibilityButtonShapesEnabled:(bool)arg1;
- (long long)_measuredNumberOfLines;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)_setMinimumFontSize:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (long long)textAlignment;
- (id)textColor;
- (bool)adjustsFontSizeToFitWidth;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (id)attributedText;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)_setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)_synthesizedAttributedText;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_setLineBreakMode:(long long)arg1;
- (void)updateConstraints;
- (id)_scriptingInfo;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)tintColorDidChange;
- (double)_firstBaselineOffsetFromTop;
- (double)_baselineOffsetFromBottom;
- (void)invalidateIntrinsicContentSize;
- (double)_minimumFontSize;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)ab_textAttributes;
- (id)ab_text;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (bool)labelTextIsTruncated;

@end
