/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSStackPushAnimationController, NSMutableSet, PSSpecifier;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
    bool_deallocating;
    PSStackPushAnimationController *_stackAnimationController;
}

+ (bool)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5;
+ (void)writePreference:(id)arg1;
+ (id)readPreferenceValue:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;

- (void)pushController:(id)arg1;
- (void)taskFinished:(id)arg1;
- (void)didDismissFormSheetView;
- (void)willDismissFormSheetView;
- (void)didDismissPopupView;
- (void)willDismissPopupView;
- (bool)deallocating;
- (id)contentViewForTopController;
- (bool)taskIsRunning:(id)arg1;
- (id)tasksDescription;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)_delayedControllerReleaseAfterPop:(id)arg1;
- (void)statusBarWillChangeHeight:(id)arg1;
- (void)sendWillResignActive;
- (void)sendWillBecomeActive;
- (void)pushController:(id)arg1 animate:(bool)arg2;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)pushControllersAsStack:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)showController:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setRootController:(id)arg1;
- (id)aggregateDictionaryPath;
- (id)rootController;
- (id)specifiers;
- (bool)busy;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)handleURL:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)suspend;
- (void)dealloc;
- (void)addTask:(id)arg1;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (void)_setNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)viewDidDisappear:(bool)arg1;
- (void)showLeftButton:(id)arg1 withStyle:(long long)arg2 rightButton:(id)arg3 withStyle:(long long)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (id)popViewControllerAnimated:(bool)arg1;

@end
