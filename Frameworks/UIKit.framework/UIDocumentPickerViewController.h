/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIDocumentPickerDelegate>, _UIDocumentPickerRemoteViewController, _UIRemoteViewService;

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {
    <UIDocumentPickerDelegate> *_weak_delegate;
    unsigned long long _documentPickerMode;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    _UIRemoteViewService *_remoteViewService;
}

@property <UIDocumentPickerDelegate> * delegate;
@property(readonly) unsigned long long documentPickerMode;
@property(getter=_remoteViewController,setter=_setRemoteViewController:,retain) _UIDocumentPickerRemoteViewController * remoteViewController;
@property(retain) _UIRemoteViewService * remoteViewService;

+ (id)localizedName;
+ (id)image;
+ (id)_identifier;
+ (unsigned long long)supportedModes;
+ (id)supportedContentTypes;
+ (id)_extension;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setRemoteViewService:(id)arg1;
- (id)remoteViewService;
- (unsigned long long)documentPickerMode;
- (id)initWithExistingDocumentAtURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initForSelectingDocumentMatchingTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)_initWithRemoteViewController:(id)arg1;
- (void)addAuxiliaryOptionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3;
- (void)_preferredContentSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_dismissViewController;
- (void)_didSelectURL:(id)arg1;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (void)_commonInitWithCompletion:(id)arg1;
- (id)_remoteViewController;
- (void)_setRemoteViewController:(id)arg1;

@end
