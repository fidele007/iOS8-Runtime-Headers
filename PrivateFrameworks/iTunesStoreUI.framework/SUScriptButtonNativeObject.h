/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject  {
    bool_loading;
    NSString *_subtitle;
    NSString *_styleString;
    NSString *_systemItemString;
}

@property(getter=isShowingConfirmation,readonly) bool showingConfirmation;
@property(readonly) int buttonType;
@property(getter=isLoading) bool loading;
@property(retain) NSString * subtitle;
@property(readonly) NSString * systemItemString;
@property long long tag;
@property(retain) NSString * title;
@property(getter=isEnabled) bool enabled;
@property(retain) UIImage * image;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property(getter=isBackButton,readonly) bool backButton;
@property(readonly) NSString * styleString;

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (void)buttonAction:(id)arg1;
- (id)systemItemString;
- (bool)isShowingConfirmation;
- (void)showConfirmationWithTitle:(id)arg1 animated:(bool)arg2;
- (void)setStyleFromString:(id)arg1;
- (void)connectButtonAction;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(bool)arg1;
- (bool)isBackButton;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (id)initWithSystemItemString:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (bool)isLoading;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (int)buttonType;
- (void)setSubtitle:(id)arg1;
- (id)styleString;
- (id)subtitle;

@end
