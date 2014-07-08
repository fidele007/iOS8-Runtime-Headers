/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, NSArray, _UITabBarAppearanceStorage, UIColor, UITabBarItem, _UIBackdropView, UIImage, NSMutableArray, _UITabBarBackgroundView, <UITabBarDelegate>;

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView> {
    UIView *_customizeView;
    _UITabBarBackgroundView *_backgroundView;
    _UIBackdropView *_adaptiveBackdrop;
    UIView *_shadowView;
    <UITabBarDelegate> *_delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    long long _barOrientation;
    struct { 
        unsigned int alertShown : 1; 
        unsigned int wasEnabled : 1; 
        unsigned int customized : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int isLocked : 1; 
        unsigned int backgroundIsPattern : 1; 
        unsigned int hasCustomBackgroundView : 1; 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int backgroundNeedsUpdate : 1; 
    } _tabBarFlags;
    NSArray *_buttonItems;
    struct __CFArray { } *_hiddenItems;
    _UITabBarAppearanceStorage *_appearanceStorage;
    bool_dividerImagesChangeWithSelection;
    bool_dividerImagesAreInvalid;
    bool_hidesShadow;
    bool_showsHighlightedState;
    double _nextSelectionSlideDuration;
    NSMutableArray *_dividerImageViews;
    long long _itemPositioning;
    double _itemDimension;
    double _itemSpacing;
    long long _barMetrics;
    long long _imageStyle;
    long long _tabBarSizing;
    UIView *_accessoryView;
    NSString *_backdropViewLayerGroupName;
}

@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property <UITabBarDelegate> * delegate;
@property(copy) NSArray * items;
@property UITabBarItem * selectedItem;
@property(retain) UIColor * tintColor;
@property(retain) UIColor * barTintColor;
@property(retain) UIColor * selectedImageTintColor;
@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * selectionIndicatorImage;
@property(retain) UIImage * shadowImage;
@property long long itemPositioning;
@property double itemWidth;
@property double itemSpacing;
@property long long barStyle;
@property(getter=isTranslucent) bool translucent;
@property(getter=isLocked) bool locked;
@property(setter=_setBarOrientation:) long long _barOrientation;
@property(setter=_setShowsHighlightedState:) bool _showsHighlightedState;
@property(setter=_setAccessoryView:) UIView * _accessoryView;
@property(setter=_setBackgroundNeedsUpdate:) bool _backgroundNeedsUpdate;
@property(getter=_backdropViewLayerGroupName,setter=_setBackdropViewLayerGroupName:,retain) NSString * backdropViewLayerGroupName;
@property(setter=_setNextSelectionSlideDuration:) double _nextSelectionSlideDuration;
@property(setter=_setTabButtonWidth:) double _tabButtonWidth;
@property(setter=_setInterTabButtonSpacing:) double _interTabButtonSpacing;
@property(setter=_setDividerImagesChangeWithSelection:) bool _dividerImagesChangeWithSelection;
@property(setter=_setDividerImagesAreInvalid:) bool _dividerImagesAreInvalid;
@property(setter=_setDividerImageViews:,retain) NSMutableArray * _dividerImageViews;
@property(setter=_setBarMetrics:) long long _barMetrics;
@property(setter=_setImageStyle:) long long _imageStyle;
@property(setter=_setHidesShadow:) bool _hidesShadow;
@property(setter=_setTabBarSizing:) long long _tabBarSizing;

+ (id)_tabBarForView:(id)arg1;
+ (float)_buttonGap;
+ (id)_unselectedTabTintColorForView:(id)arg1;
+ (void)_initializeForIdiom:(long long)arg1;

- (id)items;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (bool)_hasCustomAutolayoutNeighborSpacing;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)_isHidden:(id)arg1;
- (void)_configureItems:(id)arg1;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_alertDidHide;
- (void)_alertWillShow:(bool)arg1 duration:(float)arg2;
- (void)dismissCustomizeSheet:(bool)arg1;
- (void)_tabBarFinishedAnimating;
- (void)setItemPositioning:(long long)arg1;
- (long long)itemPositioning;
- (void)_setDividerImageViews:(id)arg1;
- (id)_dividerImageViews;
- (void)_setDividerImagesAreInvalid:(bool)arg1;
- (bool)_dividerImagesAreInvalid;
- (void)_setDividerImagesChangeWithSelection:(bool)arg1;
- (bool)_dividerImagesChangeWithSelection;
- (void)_setNextSelectionSlideDuration:(double)arg1;
- (double)_nextSelectionSlideDuration;
- (bool)endCustomizingAnimated:(bool)arg1;
- (long long)_barOrientation;
- (double)_interTabButtonSpacing;
- (void)_setInterTabButtonSpacing:(double)arg1;
- (double)_tabButtonWidth;
- (void)_setTabButtonWidth:(double)arg1;
- (void)_setTabBarSizing:(long long)arg1;
- (void)_effectiveBarTintColorDidChange;
- (void)_updateTintedImages:(id)arg1 selected:(bool)arg2;
- (id)selectedItem;
- (void)_dismissCustomizeSheet:(bool)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (bool)_backgroundNeedsUpdate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tabAreaLayoutBounds;
- (long long)_effectiveBarOrientation;
- (void)_hideItemsAnimated:(bool)arg1;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (long long)_imageStyle;
- (void)_showItemsAnimated:(bool)arg1;
- (void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3;
- (void)_updateDividerImagesIfNecessary;
- (void)_invalidateDividerImages;
- (id)_topmostDividerImageView;
- (void)_doCommonTabBarInit;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_setImageStyle:(long long)arg1;
- (void)_setBarMetrics:(long long)arg1;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg1;
- (double)itemWidth;
- (void)setItemWidth:(double)arg1;
- (void)_setBackgroundNeedsUpdate:(bool)arg1;
- (void)_setLabelShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setLabelFont:(id)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(bool)arg3 swapping:(bool)arg4;
- (void)_setShowsHighlightedState:(bool)arg1;
- (long long)_barMetrics;
- (bool)_showsHighlightedState;
- (long long)_tabBarSizing;
- (void)setSelectedImageTintColor:(id)arg1;
- (id)selectedImageTintColor;
- (void)setSelectionIndicatorImage:(id)arg1;
- (id)selectionIndicatorImage;
- (id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_cleanupAdaptiveBackdrop;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)setBadgeAnimated:(bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)setBackgroundImage:(id)arg1;
- (bool)isCustomizing;
- (void)beginCustomizingItems:(id)arg1;
- (void)_makeCurrentButtonFirstResponder;
- (void)setSelectedItem:(id)arg1;
- (void)_setBarOrientation:(long long)arg1;
- (bool)_isTranslucent;
- (void)_setAccessoryView:(id)arg1;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (id)_accessoryView;
- (id)_backdropViewLayerGroupName;
- (id)barTintColor;
- (void)_setHidesShadow:(bool)arg1;
- (bool)_hidesShadow;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (long long)barStyle;
- (bool)_wantsAdaptiveBackdrop;
- (void)setBarStyle:(long long)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)_updateBackgroundImage;
- (id)_effectiveBarTintColor;
- (void)_setBackgroundView:(id)arg1;
- (id)_shadowView;
- (id)_appearanceStorage;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (id)backgroundImage;
- (bool)_subclassImplementsDrawRect;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setTintColor:(id)arg1;
- (bool)_canDrawContent;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)isLocked;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)isTranslucent;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualAltitude:(double)arg1;
- (id)_backgroundView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)showActionSheet:(id)arg1 animated:(bool)arg2;

@end
