/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUINavigationDocumentController, NSString, NSDictionary, IKAppDocument, UIViewController;

@interface SKUIDocumentStackItem : NSObject  {
    IKAppDocument *_document;
    SKUINavigationDocumentController *_navigationDocumentController;
    NSDictionary *_presentationOptions;
    bool_usesNavigationControllerForModalPresentation;
    UIViewController *_viewController;
}

@property(readonly) IKAppDocument * document;
@property(readonly) NSDictionary * presentationOptions;
@property bool usesNavigationControllerForModalPresentation;
@property(retain) SKUINavigationDocumentController * navigationDocumentController;
@property(retain) UIViewController * viewController;
@property(getter=isAnimated,readonly) bool animated;
@property(readonly) NSString * presentationType;
@property(readonly) NSString * sourceElementIdentifier;


- (void)setUsesNavigationControllerForModalPresentation:(bool)arg1;
- (bool)usesNavigationControllerForModalPresentation;
- (id)navigationDocumentController;
- (id)sourceElementIdentifier;
- (id)presentationType;
- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;
- (void)setNavigationDocumentController:(id)arg1;
- (id)presentationOptions;
- (id)document;
- (void).cxx_destruct;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (bool)isAnimated;

@end
