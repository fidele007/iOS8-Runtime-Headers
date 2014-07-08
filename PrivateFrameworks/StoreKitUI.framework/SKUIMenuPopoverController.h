/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, <SKUIMenuPopoverDelegate>, SKUIMenuViewController, UIPopoverController;

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    <SKUIMenuPopoverDelegate> *_delegate;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}

@property(readonly) NSArray * menuTitles;
@property <SKUIMenuPopoverDelegate> * delegate;


- (void)_destroyPopoverController;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)menuTitles;
- (id)initWithMenuTitles:(id)arg1;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(bool)arg1;

@end
