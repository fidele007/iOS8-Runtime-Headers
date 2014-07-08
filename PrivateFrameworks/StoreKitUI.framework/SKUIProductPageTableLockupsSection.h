/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStyledImageDataConsumer, NSArray, UIImage, SKUIMissingItemLoader, SKUIResourceLoader, SKUIProductPageTableSeparatorView, SKUIProductPageTableHeaderView, NSMapTable;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {
    NSMapTable *_artworkRequests;
    SKUIProductPageTableSeparatorView *_footerView;
    SKUIProductPageTableHeaderView *_headerView;
    NSArray *_lockups;
    SKUIMissingItemLoader *_missingItemLoader;
    UIImage *_placeholderImage;
    SKUIStyledImageDataConsumer *_productImageDataConsumer;
    SKUIResourceLoader *_resourceLoader;
}

@property(retain) SKUIResourceLoader * resourceLoader;


- (id)_productImageForItem:(id)arg1;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_missingItemLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)setResourceLoader:(id)arg1;
- (id)footerViewForTableView:(id)arg1;
- (id)headerViewForTableView:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)resourceLoader;
- (void)dealloc;
- (void).cxx_destruct;

@end
