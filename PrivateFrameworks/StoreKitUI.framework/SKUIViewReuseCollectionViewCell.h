/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIViewReusePool;

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell  {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    SKUIViewReusePool *_viewPool;
    NSArray *_views;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(readonly) NSArray * allExistingViews;


- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)existingViewForIndex:(long long)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(id)arg2;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (id)allExistingViews;
- (void)modifyUsingBlock:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;

@end
