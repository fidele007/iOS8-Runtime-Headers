/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class CALayer, CAShapeLayer;

@interface FMFAnnotationView : MKAnnotationView  {
    bool_isRotating;
    bool_wantsRotation;
    long long _annotationSize;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_markerOval;
    CAShapeLayer *_markerCenter;
    CAShapeLayer *_tailLayer;
    CALayer *_centerImageLayer;
    double _futureRotationAmount;
}

@property long long annotationSize;
@property(retain) CAShapeLayer * shapeLayer;
@property(retain) CAShapeLayer * circleLayer;
@property(retain) CAShapeLayer * markerOval;
@property(retain) CAShapeLayer * markerCenter;
@property(retain) CAShapeLayer * tailLayer;
@property(retain) CALayer * centerImageLayer;
@property bool isRotating;
@property bool wantsRotation;
@property double futureRotationAmount;

+ (id)circlePath;

- (void)setFutureRotationAmount:(double)arg1;
- (double)futureRotationAmount;
- (void)setWantsRotation:(bool)arg1;
- (bool)wantsRotation;
- (id)tailLayer;
- (id)markerCenter;
- (id)markerOval;
- (id)circleLayer;
- (void)updateAnnotationShutter;
- (void)setAnnotationSize:(double)arg1 animated:(bool)arg2;
- (void)setPersonImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRectForSize;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (id)markerCenterPath;
- (id)largeCircle;
- (id)largeTail;
- (id)largeBezierPath;
- (id)shutterLineWidthForSize:(long long)arg1;
- (id)shutterCircle;
- (id)markerOvalPath;
- (void)sizeAnnotationView;
- (void)setAnnotationSize:(long long)arg1;
- (id)centerImageLayer;
- (id)clipImageToCircle:(id)arg1;
- (id)fallbackPersonImage;
- (long long)annotationSize;
- (id)smallTail;
- (void)setTailLayer:(id)arg1;
- (id)lineWidthForSize:(long long)arg1;
- (id)smallCircle;
- (void)setCircleLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerImageFrameForSize:(long long)arg1;
- (void)setCenterImageLayer:(id)arg1;
- (id)markerCenterPathSmall;
- (void)setMarkerCenter:(id)arg1;
- (id)markerOvalPathSmall;
- (void)setMarkerOval:(id)arg1;
- (id)shadowOpacityForSize:(long long)arg1;
- (id)smallBezierPath;
- (void)setShapeLayer:(id)arg1;
- (void)setIsRotating:(bool)arg1;
- (double)animationDuration;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void).cxx_destruct;
- (id)shapeLayer;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRotating;

@end
