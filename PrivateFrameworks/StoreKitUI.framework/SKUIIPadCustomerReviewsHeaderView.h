/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, NSArray, SKUIColorScheme, SKUIClientContext, UIButton, UIPopoverController, UIControl, UILabel;

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    UIPopoverController *_sortPopoverController;
    long long _selectedSortIndex;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    NSArray *_sortTitles;
    UILabel *_titleLabel;
    UIButton *_writeAReviewButton;
}

@property(retain) SKUIColorScheme * colorScheme;
@property(readonly) UIControl * appSupportButton;
@property(readonly) UIControl * writeAReviewButton;
@property long long selectedSortIndex;
@property(copy) NSArray * sortTitles;


- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)sortTitles;
- (void)_sortButtonAction:(id)arg1;
- (void)_destroySortPopoverController;
- (void)_reloadSortButton;
- (void)setSortTitles:(id)arg1;
- (id)writeAReviewButton;
- (id)appSupportButton;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithClientContext:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setSelectedSortIndex:(long long)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (long long)selectedSortIndex;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
