/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, NSArray, SKUIColorScheme, SKUIClientContext, UIImageView, UIButton, UIControl, UILabel;

@interface SKUIReviewsFacebookView : UIView  {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    NSArray *_friendNames;
    UILabel *_friendsLabel;
    UIButton *_likeButton;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    bool_userLiked;
    UIView *_separatorView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(copy) NSArray * friendNames;
@property(readonly) UIControl * likeToggleButton;
@property(getter=isUserLiked) bool userLiked;


- (bool)isUserLiked;
- (id)likeToggleButton;
- (void)setUserLiked:(bool)arg1;
- (void)setFriendNames:(id)arg1;
- (id)_composedStringForNames:(id)arg1 userLiked:(bool)arg2;
- (void)_reloadLikeButtonState;
- (void)_reloadFriendNamesLabel;
- (id)friendNames;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithClientContext:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void).cxx_destruct;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
