/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputViewController, UIKeyboard, UIResponder, UIView;

@interface UIInputViewSet : NSObject  {
    UIView *_inputView;
    UIView *_inputAccessoryView;
    bool_isKeyboard;
    bool_supportsSplit;
    bool_isSplit;
    double _splitHeightDelta;
    UIResponder *_restorableResponder;
    UIInputViewController *_inputViewController;
    UIInputViewController *_accessoryViewController;
}

@property(readonly) UIKeyboard * keyboard;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property(retain) UIInputViewController * inputViewController;
@property(retain) UIInputViewController * accessoryViewController;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAccessoryViewBounds;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputViewBounds;
@property(getter=isEmpty,readonly) bool empty;
@property(readonly) bool supportsSplit;
@property(readonly) bool isSplit;
@property(readonly) bool inputViewKeyboardCanSplit;
@property UIResponder * restorableResponder;
@property(readonly) bool isInputViewPlaceholder;
@property(readonly) bool isInputAccessoryViewPlaceholder;
@property(readonly) bool _inputViewIsSplit;
@property double splitHeightDelta;
@property(readonly) UIView * splitExemptSubview;
@property(readonly) UIView * layeringView;

+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)emptyInputSet;

- (bool)visible;
- (bool)isEqual:(id)arg1;
- (bool)isEmpty;
- (void)dealloc;
- (id)description;
- (bool)isInputAccessoryViewPlaceholder;
- (bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (id)splitExemptSubview;
- (id)inputSetWithInputAccessoryViewOnly;
- (bool)_inputAccessoryViewSupportsSplit;
- (bool)_inputViewSupportsSplit;
- (bool)_inputViewIsVisible;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(bool)arg3;
- (bool)_inputViewSetSupportsSplit;
- (id)restorableResponder;
- (void)setRestorableResponder:(id)arg1;
- (bool)usesKeyClicks;
- (void)setAccessoryViewController:(id)arg1;
- (void)setInputViewController:(id)arg1;
- (bool)canAnimateToInputViewSet:(id)arg1;
- (bool)containsResponder:(id)arg1;
- (bool)isInputViewPlaceholder;
- (bool)isStrictSupersetOfViewSet:(id)arg1;
- (double)splitHeightDelta;
- (void)_endSplitTransitionIfNeeded;
- (void)_setSplitProgress:(double)arg1;
- (void)_beginSplitTransitionIfNeeded;
- (bool)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2;
- (void)setSplitHeightDelta:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAccessoryViewBounds;
- (id)_splittableInputAccessoryView;
- (bool)__isCKAccessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightInputViewSetFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftInputViewSetFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputViewBounds;
- (id)layeringView;
- (bool)_accessorySuppressesShadow;
- (bool)_inputViewIsSplit;
- (bool)inputViewKeyboardCanSplit;
- (long long)keyboardOrientation:(id)arg1;
- (id)_themableInputAccessoryView;
- (id)keyboard;
- (void)refreshPresentation;
- (bool)supportsSplit;
- (bool)isSplit;
- (void)_setRenderConfig:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (id)inputViewController;
- (id)inputAccessoryView;
- (id)inputView;
- (id)accessoryViewController;
- (bool)containsView:(id)arg1;

@end
