/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSTimer, NSString, NSArray, NSIndexPath, <TKVibrationPickerStyleProvider>, TLVibrationManager, <TKVibrationPickerViewControllerDelegate>, <TKVibrationPickerViewControllerDismissalDelegate>, TKLabelContainerView, TKVibratorController;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate> {
    int _alertType;
    bool_showsDefault;
    bool_showsUserGenerated;
    bool_showsNone;
    bool_showsNothingSelected;
    bool_showsEditButtonAtRightSideOfCurrentNavigationController;
    bool_allowsDeletingDefaultVibration;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    bool_canEnterEditingMode;
    bool_vibrating;
    bool_viewHasAppearedAtLeastOnce;
    bool_isCallingParentViewController;
    bool_swipeToDeleteMode;
    bool_skipNextUserGeneratedVibrationsDidChangeNotification;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    <TKVibrationPickerViewControllerDelegate> *_delegate;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    bool_defaultVibrationIdentifierWasExplicitlySet;
    bool_showsEditButtonInNavigationBar;
    bool_shouldForceShowingAllAvailableSections;
    NSString *_accountIdentifier;
    <TKVibrationPickerViewControllerDelegate> *_additionalDelegate;
    <TKVibrationPickerViewControllerDismissalDelegate> *_dismissalDelegate;
    NSString *_defaultVibrationIdentifier;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    <TKVibrationPickerStyleProvider> *_styleProvider;
    TKLabelContainerView *_defaultSectionHeaderView;
    TKLabelContainerView *_systemSectionHeaderView;
    TKLabelContainerView *_userGeneratedSectionHeaderView;
}

@property(readonly) int alertType;
@property(copy) NSString * accountIdentifier;
@property <TKVibrationPickerViewControllerDelegate> * delegate;
@property bool showsDefault;
@property(copy) NSString * defaultVibrationIdentifier;
@property bool showsUserGenerated;
@property bool showsNone;
@property(retain) NSString * noneString;
@property bool showsNothingSelected;
@property(retain) NSString * selectedVibrationIdentifier;
@property bool allowsDeletingDefaultVibration;
@property bool showsEditButtonInNavigationBar;
@property(readonly) bool canEnterEditingMode;
@property(retain) <TKVibrationPickerStyleProvider> * styleProvider;
@property(setter=_setAdditionalDelegate:) <TKVibrationPickerViewControllerDelegate> * _additionalDelegate;
@property(setter=_setDismissalDelegate:) <TKVibrationPickerViewControllerDismissalDelegate> * _dismissalDelegate;
@property(setter=_setDefaultVibrationIdentifier:,copy) NSString * _defaultVibrationIdentifier;
@property(setter=_setDefaultVibrationIdentifierWasExplicitlySet:) bool _defaultVibrationIdentifierWasExplicitlySet;
@property(readonly) long long _sectionForDefaultGroup;
@property(readonly) long long _sectionForSystemGroup;
@property(readonly) long long _sectionForUserGeneratedGroup;
@property(readonly) long long _sectionForNoneGroup;
@property(setter=_setSelectedVibrationIndexPathAdjustedForCurrentEditingMode:,retain) NSIndexPath * _selectedVibrationIndexPathAdjustedForCurrentEditingMode;
@property(readonly) NSArray * _sortedVibrationIdentifiers;
@property(readonly) NSArray * _sortedUserGeneratedVibrationIdentifiers;
@property(setter=_setIndexPathOfCellBeingDeleted:,retain) NSIndexPath * _indexPathOfCellBeingDeleted;
@property(setter=_setStyleProvider:,retain) <TKVibrationPickerStyleProvider> * _styleProvider;
@property(readonly) bool _showsOnlyEditableSections;
@property(setter=_setShouldForceShowingAllAvailableSections:) bool _shouldForceShowingAllAvailableSections;
@property(setter=_setDefaultSectionHeaderView:,retain) TKLabelContainerView * _defaultSectionHeaderView;
@property(setter=_setSystemSectionHeaderView:,retain) TKLabelContainerView * _systemSectionHeaderView;
@property(setter=_setUserGeneratedSectionHeaderView:,retain) TKLabelContainerView * _userGeneratedSectionHeaderView;


- (void)setAllowsDeletingDefaultVibration:(bool)arg1;
- (bool)allowsDeletingDefaultVibration;
- (void)_presentVibrationRecorderViewController;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (id)_indexPathOfCellBeingDeleted;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (id)_userGeneratedSectionHeaderView;
- (id)_systemSectionHeaderView;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_setShouldForceShowingAllAvailableSections:(bool)arg1;
- (id)_additionalDelegate;
- (id)_sortedVibrationIdentifiers;
- (long long)_sectionForSystemGroup;
- (bool)showsUserGenerated;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(bool)arg2;
- (id)_dismissalDelegate;
- (void)_updateEditButtonItemWithAnimation:(bool)arg1;
- (bool)showsEditButtonInNavigationBar;
- (bool)_shouldForceShowingAllAvailableSections;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (void)_performBlockForcingShowingAllAvailableSections:(id)arg1;
- (bool)_showsOnlyEditableSections;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (void)_setSelectedVibrationIndexPathAdjustedForCurrentEditingMode:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(bool)arg2;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (void)_updateEditButtonItem;
- (id)_selectedVibrationIndexPathAdjustedForCurrentEditingMode;
- (long long)_sectionForNoneGroup;
- (bool)canEnterEditingMode;
- (long long)_sectionForUserGeneratedGroup;
- (void)_setDefaultVibrationIdentifierWasExplicitlySet:(bool)arg1;
- (id)_defaultVibrationIdentifier;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)defaultVibrationIdentifier;
- (void)_updateSectionVisibilityFlagAtLocation:(bool*)arg1 toValue:(bool)arg2 sectionIndexGetter:(id)arg3;
- (long long)_sectionForDefaultGroup;
- (void)setDefaultVibrationIdentifier:(id)arg1;
- (bool)_defaultVibrationIdentifierWasExplicitlySet;
- (void)_setIndexPathOfCellBeingDeleted:(id)arg1;
- (void)_setUserGeneratedSectionHeaderView:(id)arg1;
- (void)_setSystemSectionHeaderView:(id)arg1;
- (void)_setDefaultVibrationIdentifier:(id)arg1;
- (void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(long long)arg3;
- (id)_defaultSectionHeaderView;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (id)_styleProvider;
- (void)_setStyleProvider:(id)arg1;
- (void)_setDefaultSectionHeaderView:(id)arg1;
- (void)_setAdditionalDelegate:(id)arg1;
- (void)_setDismissalDelegate:(id)arg1;
- (void)_stopVibrating;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)setNoneString:(id)arg1;
- (bool)showsNone;
- (bool)showsDefault;
- (bool)showsNothingSelected;
- (id)noneString;
- (int)alertType;
- (void)setShowsEditButtonInNavigationBar:(bool)arg1;
- (id)selectedVibrationIdentifier;
- (void)setShowsUserGenerated:(bool)arg1;
- (void)setShowsDefault:(bool)arg1;
- (void)setShowsNone:(bool)arg1;
- (void)setShowsNothingSelected:(bool)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (id)initWithAlertType:(int)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)_handleError:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)_navigationItem;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationWillSuspend;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

@end
