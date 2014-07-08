/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UIView;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate> {
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UILongPressGestureRecognizer *_menuGesture;
    id _selectionSegueTemplate;
    id _highlightingSupport;
    struct { 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int showingMenu : 1; 
        unsigned int clearSelectionWhenMenuDisappears : 1; 
        unsigned int waitingForSelectionAnimationHalfwayPoint : 1; 
    } _collectionCellFlags;
    bool_selected;
    bool_highlighted;
}

@property(readonly) UIView * contentView;
@property(getter=isSelected) bool selected;
@property(getter=isHighlighted) bool highlighted;
@property(retain) UIView * backgroundView;
@property(retain) UIView * selectedBackgroundView;

+ (Class)_contentViewClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contentView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setSelectionSegueTemplate:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (void)_teardownHighlightingSupportIfReady;
- (void)_setupHighlightingSupport;
- (void)_updateHighlightColorsForView:(id)arg1 highlight:(bool)arg2;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setSelected:(bool)arg1 animated:(bool)arg2;
- (id)_selectionSegueTemplate;
- (bool)_isUsingOldStyleMultiselection;
- (bool)_shouldSaveOpaqueStateForView:(id)arg1;
- (id)selectedBackgroundView;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_menuDismissed:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)setSelectedBackgroundView:(id)arg1;
- (id)backgroundView;
- (void)_setOpaque:(bool)arg1 forSubview:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (bool)isSelected;
- (void)_updateBackgroundView;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)layoutSubviews;

@end
