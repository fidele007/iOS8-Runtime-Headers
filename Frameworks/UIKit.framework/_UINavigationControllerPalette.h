/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationController, NSArray, UIView, UIViewController;

@interface _UINavigationControllerPalette : UIView  {
    struct { 
        unsigned int isAttached : 1; 
        unsigned int attachmentIsChanging : 1; 
        unsigned int restartPaletteTransitionIfNecessary : 1; 
        unsigned int pinned : 1; 
        unsigned int pinningBarShadowIsHidden : 1; 
        unsigned int paletteShadowIsHidden : 1; 
    } _paletteFlags;
    bool__paletteOverridesPinningBar;
    bool_paletteIsAboveBar;
    bool_visibleWhenPinningBarIsHidden;
    bool__palettePinningBarHidden;
    UIView *__backgroundView;
    UINavigationController *_navController;
    unsigned long long _boundaryEdge;
    UIViewController *__unpinnedController;
    id __pinningBar;
    NSArray *__constraints;
    NSArray *__backgroundConstraints;
    struct CGSize { 
        double width; 
        double height; 
    } __size;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _preferredContentInsets;
}

@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property(setter=_setPaletteOverridesPinningBar:) bool _paletteOverridesPinningBar;
@property(readonly) UINavigationController * navController;
@property(readonly) unsigned long long boundaryEdge;
@property(getter=isPinned) bool pinned;
@property bool pinningBarShadowIsHidden;
@property bool paletteShadowIsHidden;
@property bool paletteIsAboveBar;
@property(getter=isVisibleWhenPinningBarIsHidden) bool visibleWhenPinningBarIsHidden;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentInsets;
@property UIViewController * _unpinnedController;
@property(setter=_setPinningBar:) id _pinningBar;
@property(getter=_attachmentIsChanging,readonly) bool _attachmentIsChanging;
@property(setter=_setRestartPaletteTransitionIfNecessary:) bool _restartPaletteTransitionIfNecessary;
@property(setter=_setConstraints:,retain) NSArray * _constraints;
@property(setter=_setSize:) struct CGSize { double x1; double x2; } _size;
@property(setter=_setBackgroundConstraints:,retain) NSArray * _backgroundConstraints;
@property(getter=_isPalettePinningBarHidden,setter=_setPalettePinningBarHidden:) bool _palettePinningBarHidden;


- (void)setPinned:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_backgroundConstraints;
- (void)set_unpinnedController:(id)arg1;
- (id)_unpinnedController;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPaletteIsAboveBar:(bool)arg1;
- (bool)paletteIsAboveBar;
- (void)_setPaletteOverridesPinningBar:(bool)arg1;
- (void)setPaletteShadowIsHidden:(bool)arg1;
- (void)_setAttachmentIsChanging:(bool)arg1;
- (void)_setupBackgroundViewIfNecessary;
- (void)_configureConstraintsForBackground:(id)arg1;
- (void)_resetHeightConstraintConstant;
- (void)_enableConstraints;
- (void)_disableConstraints;
- (void)_setConstraints:(id)arg1;
- (void)_setBackgroundConstraints:(id)arg1;
- (void)setPinningBarShadowIsHidden:(bool)arg1;
- (void)setVisibleWhenPinningBarIsHidden:(bool)arg1;
- (id)navController;
- (bool)_attachmentIsChanging;
- (void)_setRestartPaletteTransitionIfNecessary:(bool)arg1;
- (id)_pinningBar;
- (bool)pinningBarShadowIsHidden;
- (void)_setAttached:(bool)arg1 didComplete:(bool)arg2;
- (void)_setPinningBar:(id)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentInsets;
- (void)_configurePaletteConstraintsForBoundary;
- (id)_constraints;
- (bool)_restartPaletteTransitionIfNecessary;
- (void)_resetConstraintConstants:(double)arg1;
- (bool)isPinned;
- (void)_setPalettePinningBarHidden:(bool)arg1;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAnimating:(bool)arg2;
- (void)_setTopConstraintConstant:(double)arg1;
- (bool)paletteIsHidden;
- (unsigned long long)boundaryEdge;
- (bool)_isPalettePinningBarHidden;
- (bool)isVisibleWhenPinningBarIsHidden;
- (bool)isAttached;
- (void)_updateBackgroundView;
- (bool)paletteShadowIsHidden;
- (bool)_paletteOverridesPinningBar;
- (struct CGSize { double x1; double x2; })_size;
- (void)_setBackgroundView:(id)arg1;
- (void)didMoveToSuperview;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualAltitude:(double)arg1;
- (id)_backgroundView;

@end
