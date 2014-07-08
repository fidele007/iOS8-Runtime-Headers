/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUINavigationBarViewElement, SKUINavigationBarContext, UIView, SKUINavigationPaletteController, SKUIClientContext, NSMutableArray, SKUINavigationBarButtonsController, UIViewController, NSMapTable;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate> {
    SKUINavigationBarButtonsController *_buttonsController;
    SKUIClientContext *_clientContext;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    UIViewController *_parentViewController;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUINavigationBarViewElement *_viewElement;
}

@property(readonly) SKUINavigationBarViewElement * navigationBarViewElement;
@property(retain) SKUIClientContext * clientContext;
@property UIViewController * parentViewController;
@property(readonly) UIView * navigationPaletteView;


- (id)navigationBarViewElement;
- (void)updateNavigationItem:(id)arg1;
- (id)navigationPaletteView;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (double)_availableWidth;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (id)initWithNavigationBarViewElement:(id)arg1;
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;
- (void)attachToNavigationItem:(id)arg1;
- (void)detachFromNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)_navigationBarContext;
- (id)_titleViewWithViewElement:(id)arg1;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)parentViewController;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setParentViewController:(id)arg1;

@end
