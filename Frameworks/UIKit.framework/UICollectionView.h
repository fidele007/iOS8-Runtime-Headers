/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, UICollectionReusableView, NSIndexPath, UICollectionViewLayoutAttributes, <UICollectionViewDataSource>, UICollectionViewData, _UIDynamicAnimationGroup, NSMutableArray, UIView, UICollectionViewUpdate, NSString, NSMutableSet, <UICollectionViewDelegate>, NSArray, UITouch, UICollectionViewLayout;

@interface UICollectionView : UIScrollView  {
    UICollectionViewLayout *_layout;
    <UICollectionViewDataSource> *_dataSource;
    UIView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    UICollectionReusableView *_firstResponderView;
    UIView *_newContentView;
    long long _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_visibleCellsDict;
    NSMutableDictionary *_visibleSupplementaryViewsDict;
    NSMutableDictionary *_visibleDecorationViewsDict;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    UICollectionViewData *_collectionViewData;
    UICollectionViewUpdate *_currentUpdate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _visibleBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _preRotationBounds;
    struct CGPoint { 
        double x; 
        double y; 
    } _rotationBoundsOffset;
    long long _rotationAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    UITouch *_currentTouch;
    id _updateCompletionHandler;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    UICollectionViewLayoutAttributes *_transitionLayoutAttributes;
    bool_isInInteractiveTransition;
    bool_shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _interactiveCompletionHandler;

    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint { 
        double x; 
        double y; 
    } _currentCenterOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _previousCenterOffset;
    double _currentInteractiveTransitionProgress;
    double _previousInteractiveTransitionProgress;
    _UIDynamicAnimationGroup *_endInteractiveTransitionAnimationGroup;
    UICollectionViewLayout *_nextLayoutForInteractiveTranstion;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationBlock;

    struct { 
        unsigned int delegateShouldHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidUnhighlightItemAtIndexPath : 1; 
        unsigned int delegateShouldSelectItemAtIndexPath : 1; 
        unsigned int delegateShouldDeselectItemAtIndexPath : 1; 
        unsigned int delegateDidSelectItemAtIndexPath : 1; 
        unsigned int delegateDidDeselectItemAtIndexPath : 1; 
        unsigned int delegateSupportsMenus : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateWillDisplaySupplementaryView : 1; 
        unsigned int delegateDidEndDisplayingCell : 1; 
        unsigned int delegateDidEndDisplayingSupplementaryView : 1; 
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition : 1; 
        unsigned int delegateOverrideForTransitionOffsetSize : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffset : 1; 
        unsigned int dataSourceNumberOfSections : 1; 
        unsigned int dataSourceViewForSupplementaryElement : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellLayoutAttributes : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int fadeCellsForBoundsChange : 1; 
        unsigned int updatingLayout : 1; 
        unsigned int needsReload : 1; 
        unsigned int reloading : 1; 
        unsigned int skipLayoutDuringSnapshotting : 1; 
        unsigned int layoutInvalidatedSinceLastCellUpdate : 1; 
        unsigned int doneFirstLayout : 1; 
        unsigned int loadingOffscreenViews : 1; 
        unsigned int updating : 1; 
        unsigned int updatingVisibleCells : 1; 
    } _collectionViewFlags;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastLayoutOffset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _navigationCompletion;

}

@property(retain) UICollectionViewLayout * collectionViewLayout;
@property <UICollectionViewDelegate> * delegate;
@property <UICollectionViewDataSource> * dataSource;
@property(retain) UIView * backgroundView;
@property bool allowsSelection;
@property bool allowsMultipleSelection;
@property(getter=_currentUpdate,readonly) UICollectionViewUpdate * currentUpdate;
@property(getter=_collectionViewData,readonly) UICollectionViewData * collectionViewData;
@property(getter=_visibleViews,readonly) NSArray * visibleViews;
@property(getter=_navigationCompletion,setter=_setNavigationCompletion:,copy) id navigationCompletion;
@property(getter=_currentTouch,setter=_setCurrentTouch:,retain) UITouch * currentTouch;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (void)setDataSource:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)_navigationCompletion;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (void)_cellMenuDismissed;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_cancelInteractiveTransitionWithFinalAnimation:(bool)arg1;
- (void)_finishInteractiveTransitionWithFinalAnimation:(bool)arg1;
- (id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(id)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2;
- (bool)_highlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)_collectionViewData;
- (bool)_dataSourceImplementsNumberOfSections;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (long long)highlightedGlobalItem;
- (long long)maximumGlobalItemIndex;
- (void)_cancelTouches;
- (void)_selectAllSelectedItems;
- (void)_userSelectItemAtIndexPath:(id)arg1;
- (void)_unhighlightAllItems;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (void)_setCurrentTouch:(id)arg1;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3;
- (void)_endUpdates;
- (void)_beginUpdates;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(bool)arg3;
- (void)_updateWithItems:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (void)_endItemAnimations;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(bool)arg2;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(bool)arg2;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_finishInteractiveTransitionShouldFinish:(bool)arg1 finalAnimation:(bool)arg2;
- (id)_dynamicAnimationsForTrackValues;
- (void)_updateTrackedLayoutValuesWith:(id)arg1;
- (void)_updateTransitionWithProgress:(double)arg1;
- (void)_cleanUpAfterInteractiveTransitionDidFinish:(bool)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)_setNavigationCompletion:(id)arg1;
- (void)_setCollectionViewLayout:(id)arg1 animated:(bool)arg2 isInteractive:(bool)arg3 completion:(id)arg4;
- (void)_highlightFirstVisibleItemIfAppropriate;
- (void)_updateVisibleCellsNow:(bool)arg1;
- (id)_visibleCellForIndexPath:(id)arg1;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(id)arg6 animationCompletion:(id)arg7 enableCustomAnimations:(bool)arg8 customAnimationsType:(unsigned long long)arg9;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(bool)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(bool)arg3;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 newContentSize:(struct CGSize { double x1; double x2; })arg3 andOldContentSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_visibleViews;
- (id)indexPathForSupplementaryView:(id)arg1;
- (void)_invalidateWithBlock:(id)arg1;
- (void)_setNeedsVisibleCellsUpdate:(bool)arg1 withLayoutAttributes:(bool)arg2;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_reuseCell:(id)arg1;
- (bool)_highlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3 notifyDelegate:(bool)arg4;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)_deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3;
- (void)_unhighlightAllItemsAndHighlightGlobalItem:(long long)arg1;
- (void)_selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(bool)arg4;
- (void)_deselectAllAnimated:(bool)arg1 notifyDelegate:(bool)arg2;
- (void)_invalidateLayoutIfNecessary;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)performBatchUpdates:(id)arg1 completion:(id)arg2;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (bool)_visible;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (id)collectionViewLayout;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathsForVisibleItems;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(bool)arg3;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)indexPathsForSelectedItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (id)_currentUpdate;
- (id)_currentTouch;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (bool)_shouldShowMenuForCell:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (bool)_indexPathIsValid:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)_reloadDataIfNeeded;
- (bool)allowsSelection;
- (void)_setupCellAnimations;
- (void)setAllowsSelection:(bool)arg1;
- (id)visibleCells;
- (void)_updateBackgroundView;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)indexPathForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (void)_resumeReloads;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_suspendReloads;
- (long long)numberOfSections;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setIsAncestorOfFirstResponder:(bool)arg1;
- (bool)canBecomeFirstResponder;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (bool)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)didMoveToWindow;

@end
