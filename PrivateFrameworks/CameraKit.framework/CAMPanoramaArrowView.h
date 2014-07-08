/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView, CAShapeLayer, UIView;

@interface CAMPanoramaArrowView : UIView  {
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    struct CGPath { } *_currentTailPiecesPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _arrowTailRect;
    double _currentNormalizedSpeed;
    double _tailBiggestDelta;
    double _tailBigDelta;
    double _tailMediumDelta;
    double _tailSmallDelta;
}


- (void)animateArrowSpeedWithNormalizedSpeed:(double)arg1 duration:(double)arg2;
- (void)resetArrow;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (struct CGPath { }*)_newTailPiecesPathOfWidth:(double*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
