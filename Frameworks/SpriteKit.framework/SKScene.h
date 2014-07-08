/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKPhysicsWorld, <SKSceneDelegate>, SKView, NSMutableDictionary, PKPhysicsWorld, NSMutableArray, SKPhysicsBody, UIColor;

@interface SKScene : SKEffectNode  {
    double _lastUpdate;
    double _pausedTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _visibleRect;
    long long _scaleMode;
    NSMutableDictionary *_touchMap;
    NSMutableArray *_allChildenWithConstraints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _bounds;
    bool_isSetup;
    bool_usesExplicitUpdate;
    bool_usesExplicitRender;
    SKPhysicsBody *_scenePinBody;
    id _view;
    bool__needsUpdate;
    bool__needsRender;
    SKPhysicsWorld *_physicsWorld;
    <SKSceneDelegate> *_delegate;
    PKPhysicsWorld *__pkPhysicsWorld;
}

@property bool _usesExplicitUpdate;
@property bool _usesExplicitRender;
@property struct CGSize { double x1; double x2; } size;
@property long long scaleMode;
@property(retain) UIColor * backgroundColor;
@property <SKSceneDelegate> * delegate;
@property struct CGPoint { double x1; double x2; } anchorPoint;
@property(readonly) SKPhysicsWorld * physicsWorld;
@property(readonly) SKView * view;
@property bool _needsUpdate;
@property bool _needsRender;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property struct CGSize { double x1; double x2; } visibleRectSize;
@property struct CGPoint { double x1; double x2; } visibleRectCenter;
@property(retain) PKPhysicsWorld * _pkPhysicsWorld;

+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)sceneWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)sceneWithContentsOfFile:(id)arg1;

- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
- (bool)_usesExplicitRender;
- (id)_pkPhysicsWorld;
- (void)set_needsRender:(bool)arg1;
- (bool)_needsRender;
- (struct CGPoint { double x1; double x2; })visibleRectCenter;
- (void)setVisibleRectCenter:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })visibleRectSize;
- (void)setVisibleRectSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToView:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromView:(struct CGPoint { double x1; double x2; })arg1;
- (void)_removeConstraintsForNode:(id)arg1;
- (void)_registerConstraintsForNode:(id)arg1;
- (bool)_hasConstraints;
- (void)didFinishUpdate;
- (void)didApplyConstraints;
- (void)setYScale:(double)arg1;
- (void)setXScale:(double)arg1;
- (double)yScale;
- (double)xScale;
- (void)didSimulatePhysics;
- (void)didEvaluateActions;
- (void)didMoveToView:(id)arg1;
- (void)set_usesExplicitUpdate:(bool)arg1;
- (void)set_usesExplicitRender:(bool)arg1;
- (void)set_pkPhysicsWorld:(id)arg1;
- (void)setZRotation:(double)arg1;
- (double)zRotation;
- (void)set_needsUpdate:(bool)arg1;
- (bool)_needsUpdate;
- (bool)_usesExplicitUpdate;
- (void)didChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_didMoveToView:(id)arg1;
- (void)willMoveFromView:(id)arg1;
- (id)physicsWorld;
- (void)setScaleMode:(long long)arg1;
- (long long)scaleMode;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)didContinueContact:(id)arg1;
- (void)setZPosition:(double)arg1;
- (id)view;
- (id)backgroundColor;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (double)zPosition;
- (void)setScale:(double)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })position;
- (void)_update:(double)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)update:(double)arg1;

@end
