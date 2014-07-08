/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class UIBarButtonItem, FMFRefreshBarButtonItem, UIImageView, FMFTitleView, FMF3HiddenMapTrackingHandler, UIColor, UIView, NSSet, FMFNoLocationView, MKUserTrackingBarButtonItem, FMFSession, UIToolbar, MKMapView, FMFMapViewDelegateInternal, <FMFMapViewControllerDelegate>;

@interface FMFMapViewController : UIViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, FMF3HiddenMapTrackingHandlerDelegate, FMFNoLocationViewDelegate> {
    bool_shouldZoomToFitNewLocations;
    bool_shouldZoomToFitMeAndLocations;
    bool_showFloatingMapLocationButton;
    bool_isSimpleMap;
    bool_canShowNoLocation;
    bool__refreshingIsPaused;
    bool__blockDidReceiveAnimation;
    bool__isRenderingInitialMap;
    <FMFMapViewControllerDelegate> *_delegate;
    MKMapView *_mapView;
    UIColor *_annotationTintColor;
    FMFSession *_fmfSession;
    FMFMapViewDelegateInternal *_mapViewDelegate;
    NSSet *__preloadedHandles;
    FMFNoLocationView *_noLocationView;
    NSSet *__internalHandlesShowingLocations;
    FMFTitleView *_titleView;
    void *_addressBook;
    UIToolbar *_toolbar;
    MKUserTrackingBarButtonItem *_userLocationButton;
    UIBarButtonItem *_openInMapsBarButtonItem;
    UIBarButtonItem *_infoBarButtonItem;
    FMF3HiddenMapTrackingHandler *_hiddenMap;
    UIToolbar *_floatingLocationToolbar;
    UIView *_floatingToolbarView;
    FMFRefreshBarButtonItem *_refreshButton;
    UIImageView *_cachedMapView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
}

@property <FMFMapViewControllerDelegate> * delegate;
@property bool shouldZoomToFitNewLocations;
@property bool shouldZoomToFitMeAndLocations;
@property bool showFloatingMapLocationButton;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property(copy) NSSet * handlesShowingLocations;
@property(retain) MKMapView * mapView;
@property(copy) UIColor * annotationTintColor;
@property(retain) FMFSession * fmfSession;
@property(retain) FMFMapViewDelegateInternal * mapViewDelegate;
@property(retain) NSSet * _preloadedHandles;
@property bool isSimpleMap;
@property bool canShowNoLocation;
@property(retain) FMFNoLocationView * noLocationView;
@property(retain) NSSet * _internalHandlesShowingLocations;
@property bool _refreshingIsPaused;
@property bool _blockDidReceiveAnimation;
@property bool _isRenderingInitialMap;
@property(retain) FMFTitleView * titleView;
@property void* addressBook;
@property(retain) UIToolbar * toolbar;
@property(retain) MKUserTrackingBarButtonItem * userLocationButton;
@property(retain) UIBarButtonItem * openInMapsBarButtonItem;
@property(retain) UIBarButtonItem * infoBarButtonItem;
@property(retain) FMF3HiddenMapTrackingHandler * hiddenMap;
@property(retain) UIToolbar * floatingLocationToolbar;
@property(retain) UIView * floatingToolbarView;
@property(retain) FMFRefreshBarButtonItem * refreshButton;
@property(retain) UIImageView * cachedMapView;

+ (id)smallAnnotationViewImage;
+ (struct CGSize { double x1; double x2; })annotationImageSize;
+ (id)smallAnnotationViewImageWithTintColor:(id)arg1;

- (id)floatingToolbarView;
- (id)floatingLocationToolbar;
- (id)infoBarButtonItem;
- (id)openInMapsBarButtonItem;
- (void)setAnnotationTintColor:(id)arg1;
- (bool)showFloatingMapLocationButton;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit:(bool)arg1;
- (void)setHandlesShowingLocations:(id)arg1;
- (void)setShowFloatingMapLocationButton:(bool)arg1;
- (void)resumeRefreshingLocations;
- (void)stopRefreshingLocations;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)personImageForNoLocationView;
- (void)hiddenMapTrackerDidUpdateMapToTrackingType:(long long)arg1;
- (void)mapViewDidFinishRenderingMap;
- (void)didUpdateUserLocation:(id)arg1;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(bool)arg1;
- (void)regionWillChangeAnimated:(bool)arg1;
- (void)didDeselectLocation:(id)arg1;
- (void)didSelectLocation:(id)arg1;
- (id)annotationTintColor;
- (id)_selectedHandleAnnotation;
- (id)annotationImageForHandle:(id)arg1;
- (void)zoomToFit;
- (void)setShouldZoomToFitMeAndLocations:(bool)arg1;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (bool)sessionContainsHandle:(id)arg1;
- (void)setFmfSession:(id)arg1;
- (id)refreshButton;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (void)addFloatingToolbar;
- (void)selectAnnotationIfSingleForMac;
- (void)deselectAllAnnotations;
- (void)set_refreshingIsPaused:(bool)arg1;
- (bool)singleAnnotationOnMap;
- (bool)_blockDidReceiveAnimation;
- (bool)shouldZoomToFitNewLocations;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(bool)arg2;
- (bool)mapHasUserLocations;
- (bool)canShowNoLocation;
- (void)_updateTitleViewLocation:(id)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (void)updateMapWithNewLocation:(id)arg1 animated:(bool)arg2;
- (void)set_internalHandlesShowingLocations:(id)arg1;
- (void)startShowingLocationsForHandles:(id)arg1;
- (id)_preloadedHandles;
- (void)setMapViewDelegate:(id)arg1;
- (id)_internalHandlesShowingLocations;
- (id)fmfSession;
- (bool)_refreshingIsPaused;
- (void)removeHandlesFromSession;
- (bool)_isRenderingInitialMap;
- (id)noLocationView;
- (void)hideCachedMap;
- (void)updateNoLocationView:(bool)arg1;
- (void)setCanShowNoLocation:(bool)arg1;
- (bool)shouldZoomToFitMeAndLocations;
- (id)mapViewDelegate;
- (void)loadCachedLocationsForHandles;
- (void)addHandlesToSession;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)set_blockDidReceiveAnimation:(bool)arg1;
- (void)_updateLocationButtonEnabled;
- (void)setUserLocationButton:(id)arg1;
- (id)hiddenMap;
- (void)setHiddenMap:(id)arg1;
- (id)_internalAnnotationTintColor;
- (void)setFloatingLocationToolbar:(id)arg1;
- (void)setFloatingToolbarView:(id)arg1;
- (void)setCachedMapView:(id)arg1;
- (void)setNoLocationView:(id)arg1;
- (id)userLocationButton;
- (void)setInfoBarButtonItem:(id)arg1;
- (void)infoButtonTapped:(id)arg1;
- (void)setOpenInMapsBarButtonItem:(id)arg1;
- (void)openInMapsButtonTapped:(id)arg1;
- (void)enablePreloadedHandles;
- (void)loadDelegate;
- (id)titleViewForSelectedHandle;
- (void)setRefreshButton:(id)arg1;
- (void)refreshButtonTapped:(id)arg1;
- (id)cachedMapView;
- (bool)isSimpleMap;
- (void)set_isRenderingInitialMap:(bool)arg1;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (void)setShouldZoomToFitNewLocations:(bool)arg1;
- (void)_authorizeMonitoringLocation;
- (void)setIsSimpleMap:(bool)arg1;
- (void)set_preloadedHandles:(id)arg1;
- (void)initializeDefaults;
- (id)handlesShowingLocations;
- (void)removeAllFriendLocationsFromMap;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)destroySession;
- (void)setMapView:(id)arg1;
- (id)mapView;
- (void)dismiss:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)setTitleView:(id)arg1;
- (id)titleView;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;

@end
