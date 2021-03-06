/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSArray, UIView;

@interface GKContiguousContainerView : UIView  {
    bool_vertical;
    bool_applyOrthogonalConstraints;
    UIView *_baselineView;
    double _overlap;
    NSArray *_replaceableConstraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _insets;
}

@property UIView * baselineView;
@property double overlap;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property bool vertical;
@property bool applyOrthogonalConstraints;
@property(retain) NSArray * replaceableConstraints;

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(bool)arg3;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(bool)arg3 applyOrthogonalConstraints:(bool)arg4;

- (bool)applyOrthogonalConstraints;
- (void)setBaselineView:(id)arg1;
- (id)baselineView;
- (void)replaceSubviews:(id)arg1;
- (id)replaceableConstraints;
- (void)setReplaceableConstraints:(id)arg1;
- (bool)vertical;
- (void)_addContiguousSubviews:(id)arg1;
- (void)setApplyOrthogonalConstraints:(bool)arg1;
- (double)overlap;
- (void)setOverlap:(double)arg1;
- (void)dealloc;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)setVertical:(bool)arg1;
- (id)viewForBaselineLayout;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
