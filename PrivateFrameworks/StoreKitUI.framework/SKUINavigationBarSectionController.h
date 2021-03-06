/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElementLayoutContext, SKUINavigationBarContext, UIView;

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {
    SKUINavigationBarContext *_navigationBarContext;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property(retain) SKUINavigationBarContext * context;
@property(readonly) SKUIViewElementLayoutContext * viewLayoutContext;
@property(readonly) UIView * view;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)viewLayoutContext;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)reloadSectionViews;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInNavigationBar;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)view;
- (void)dealloc;
- (void).cxx_destruct;

@end
