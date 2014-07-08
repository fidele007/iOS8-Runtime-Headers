/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, SKUIItemOfferButton, NSTimer, UIImageView, _UIDocumentPickerDocumentTableViewController, _UIDocumentPickerContainerItem, UILabel;

@interface _UIDocumentPickerDocumentTableCell : UITableViewCell  {
    _UIDocumentPickerDocumentTableViewController *_weak_tableView;
    bool_isContainer;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _UIDocumentPickerContainerItem *_item;
    SKUIItemOfferButton *_cloudButton;
    NSTimer *_progressTimer;
    id _progressSubscriber;
    UIView *_iconCenteringView;
}

@property _UIDocumentPickerDocumentTableViewController * tableView;
@property(retain) UIImageView * iconView;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * subtitleLabel;
@property bool isContainer;
@property(retain) _UIDocumentPickerContainerItem * item;
@property(retain) SKUIItemOfferButton * cloudButton;
@property(retain) NSTimer * progressTimer;
@property(retain) id progressSubscriber;
@property(retain) UIView * iconCenteringView;

+ (struct CGSize { double x1; double x2; })thumbnailSize;

- (void)dealloc;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setIconCenteringView:(id)arg1;
- (id)iconCenteringView;
- (id)progressTimer;
- (void)setIsContainer:(bool)arg1;
- (bool)isContainer;
- (void)setIconView:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)updateForDownloadStatus;
- (id)cloudButton;
- (void)setProgressSubscriber:(id)arg1;
- (void)setCloudButton:(id)arg1;
- (void)setProgressTimer:(id)arg1;
- (id)progressSubscriber;
- (void)updateForItem;
- (id)iconView;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (id)subtitleLabel;
- (void)prepareForReuse;
- (void)setTableView:(id)arg1;
- (id)titleLabel;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
