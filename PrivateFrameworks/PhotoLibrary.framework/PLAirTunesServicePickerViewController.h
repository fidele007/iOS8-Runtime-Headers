/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, NSDictionary, <PLAirTunesServicePickerViewControllerDelegate>, UITableView;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    id _delegate;
    UITableView *_table;
    NSDictionary *_selectedRoute;
    NSArray *_availableRoutes;
}

@property <PLAirTunesServicePickerViewControllerDelegate> * delegate;
@property(retain) NSArray * availableRoutes;


- (void)setAvailableRoutes:(id)arg1;
- (id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2;
- (long long)_indexofRouteWithRouteID:(id)arg1;
- (void)_setCell:(id)arg1 checked:(bool)arg2;
- (id)availableRoutes;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)viewDidAppear:(bool)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopoverView;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
