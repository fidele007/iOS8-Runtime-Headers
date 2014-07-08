/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMEffectSelectionViewControllerDelegate>, NSArray, UICollectionView, UICollectionViewFlowLayout, NSIndexPath, CIFilter;

@interface CAMEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSArray *_effects;
    NSIndexPath *__selectedIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    } _cellSize;
    struct CGSize { 
        double width; 
        double height; 
    } _thumbnailSize;
    <CAMEffectSelectionViewControllerDelegate> *_delegate;
}

@property <CAMEffectSelectionViewControllerDelegate> * delegate;
@property(retain) CIFilter * selectedEffect;


- (void)_scrollToShowNextFilterNearEdge;
- (id)selectedEffect;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (id)_textForItemAtIndexPath:(id)arg1;
- (void)_scrollToSelectedIndexAnimated:(bool)arg1;
- (id)_selectedIndexPath;
- (void)_resetSelectedToOriginal;
- (void)_generateFilters;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedEffect:(id)arg1;
- (void)_setSelectedIndexPath:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
