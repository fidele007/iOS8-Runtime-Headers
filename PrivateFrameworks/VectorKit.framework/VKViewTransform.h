/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKViewVolume;

@interface VKViewTransform : NSObject  {
    struct shared_ptr<vk::ViewTransform> { 
        struct ViewTransform {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _viewTransform;
}

@property(readonly) bool isMercator;
@property(readonly) bool isGeocentric;
@property(readonly) int coordinateSpace;
@property(readonly) struct CGSize { double x1; double x2; } screenSizeInPoints;
@property(readonly) struct CGSize { double x1; double x2; } screenSizeInPixels;
@property(readonly) float contentScale;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } translation;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } translationInMercator;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) float heading;
@property(readonly) float degreesFromPlumb;
@property(readonly) double widthOverDepth;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrix;
@property(readonly) double nearPlaneDistance;
@property(readonly) double farPlaneDistance;
@property(readonly) VKViewVolume * viewVolume;
@property(readonly) double focusDistance;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } focusPoint;
@property const struct { double x1[4][4]; }* scaledViewProjectionMatrix;


- (struct { double x1[4][4]; })orientationMatrixAtWorldPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromPixel:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (double)focusDistance;
- (double)farPlaneDistance;
- (double)nearPlaneDistance;
- (struct VKPoint { double x1; double x2; double x3; })translationInMercator;
- (struct CGSize { double x1; double x2; })screenSizeInPixels;
- (struct CGSize { double x1; double x2; })screenSizeInPoints;
- (const struct { double x1[4][4]; }*)scaledViewProjectionMatrix;
- (struct VKPoint { double x1; double x2; double x3; })focusPoint;
- (double)widthOverDepth;
- (float)degreesFromPlumb;
- (struct VKPoint { double x1; double x2; double x3; })translation;
- (bool)isGeocentric;
- (bool)isMercator;
- (void)setScaledViewProjectionMatrix:(const struct { double x1[4][4]; }*)arg1;
- (void)setCoordinateSpace:(int)arg1 screenSizeInPixels:(struct CGSize { double x1; double x2; })arg2 contentScale:(float)arg3 frustum:(struct { boolx1; double x2; double x3; double x4; double x5; })arg4 position:(struct VKPoint { double x1; double x2; double x3; })arg5 orientation:(const struct { double x1[4][4]; }*)arg6 horizontalOffset:(float)arg7;
- (struct shared_ptr<vk::ViewTransform> { struct ViewTransform {} *x1; struct __shared_weak_count {} *x2; })viewTransform;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (id)viewVolume;
- (const struct { double x1[4][4]; }*)viewProjectionMatrix;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (float)heading;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)contentScale;
- (int)coordinateSpace;

@end
