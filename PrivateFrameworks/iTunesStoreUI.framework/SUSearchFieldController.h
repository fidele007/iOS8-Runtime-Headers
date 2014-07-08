/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUClientInterface, NSArray, UIControl, SUSearchFieldConfiguration, UISearchBar, SUScriptTextFieldDelegate, ISStoreURLOperation, SUSearchDisplayController;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    long long _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(getter=isActive,readonly) bool active;
@property(readonly) UISearchBar * searchBar;
@property(copy) SUSearchFieldConfiguration * searchFieldConfiguration;
@property long long searchFieldStyle;


- (id)_cancelButtonView;
- (void)setSearchFieldStyle:(long long)arg1;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (void)scriptDidChangeTextForField:(id)arg1;
- (id)_newTransientViewController;
- (void)_dimmerViewAction:(id)arg1;
- (id)_newBlankStorePageViewController;
- (id)_targetViewController;
- (void)_sendOnXEventWithTerm:(id)arg1 URL:(id)arg2 completionBlock:(id)arg3;
- (void)_fetchCompletions;
- (id)_defaultSearchTerm;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (void)_cancelCompletionsOperation;
- (void)_showDimmerView;
- (bool)_focusTransientViewController;
- (void)_fetchResultsForTerm:(id)arg1 URL:(id)arg2;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_resizeSearchBarForOrientation:(long long)arg1;
- (void)_reloadSearchBar;
- (id)_newSearchBar;
- (id)_searchGroupForSearchKind:(id)arg1;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1 kind:(id)arg2;
- (void)_tearDownDimmerView;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(long long)arg3;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (id)initWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 style:(long long)arg2;
- (long long)searchFieldStyle;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)searchFieldConfiguration;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (bool)isActive;
- (id)init;
- (void)dealloc;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (bool)searchBarShouldEndEditing:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)willRotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
