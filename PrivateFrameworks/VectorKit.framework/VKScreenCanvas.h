/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MDRenderTarget>, VKMemoryObserver, <MDMapControllerDelegate>, VKScene, NSArray, NSString, VKDispatch, VKLayoutContext, NSMutableArray, VKWorld, VKCamera;

@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate> {
    VKDispatch *_dispatch;
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    VKLayoutContext *_layoutContext;
    <MDRenderTarget> *_displayTarget;
    bool_needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    bool_userIsGesturing;
    bool_iconsShouldAlignToPixels;
    NSMutableArray *_cameraControllers;
    float _debugFramesPerSecond;
    bool_rendersInBackground;
    NSMutableArray *_animations[2];
    VKMemoryObserver *_memoryObserver;
    bool_isInBackground;
    bool_isHidden;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _fullyOccludedEdgeInsets;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _labelEdgeInsets;
    bool_deallocing;
    bool_needsInitialization;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    } _renderQueue;
    struct MapCamera { struct View {} *x1; struct Viewport {} *x2; void *x3; } *_mapCamera;
    struct RenderTree { int (**x1)(); id x2; } *_mapScene;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _bgColor;
    <MDMapControllerDelegate> *_mapDelegate;
}

@property(readonly) VKWorld * world;
@property(readonly) NSArray * cameraControllers;
@property(readonly) VKCamera * camera;
@property float debugFramesPerSecond;
@property long long targetDisplay;
@property struct VKEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property struct VKEdgeInsets { double x1; double x2; double x3; double x4; } fullyOccludedEdgeInsets;
@property struct VKEdgeInsets { double x1; double x2; double x3; double x4; } labelEdgeInsets;
@property <MDMapControllerDelegate> * mapDelegate;
@property(readonly) bool needsInitialization;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  bgColor; /* unknown property attribute:  1>=[4f]} */
@property bool rendersInBackground;
@property(getter=isGesturing) bool gesturing;
@property bool iconsShouldAlignToPixels;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cameraControllers;
- (bool)needsInitialization;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)removeCameraController:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (void)_queueUpdateDisplayLinkStatus;
- (void)animateWithTimestamp:(double)arg1;
- (bool)wantsRender;
- (void)adoptAnimation:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(bool)arg2;
- (void)animationDidResume:(id)arg1;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)gglWillDrawWithTimestamp;
- (void)addCameraController:(id)arg1;
- (id)mapDelegate;
- (void)didPresent;
- (void)layoutRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)resetRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)wantsTimerTick;
- (bool)currentSceneRequiresMSAA;
- (void)updateWithTimestamp:(double)arg1;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })labelEdgeInsets;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })fullyOccludedEdgeInsets;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)edgeInsetsWillBeginAnimating;
- (void)edgeInsetsDidEndAnimating;
- (void)runAnimation:(id)arg1;
- (void)transferAnimationsTo:(id)arg1;
- (void)initializeWithRenderer:(struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; boolx5; float x6; boolx7; id x8; struct RenderState {} *x9; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_10_1_1; } x10; struct RenderTarget {} *x11; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned long long x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_13_1_1; } x13; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_14_1_3; } x14; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_15_1_1; unsigned long long x_15_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long long x_3_2_1; } x_15_1_3; } x15; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_16_1_1; } x16; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_17_1_1; struct BufferLoadItem {} *x_17_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_18_1_1; struct Texture2DLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_18_1_3; } x18; unsigned int x19; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_20_1_1; } x20; }*)arg1;
- (void)setRendersInBackground:(bool)arg1;
- (bool)rendersInBackground;
- (void)setMapDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 device:(const struct shared_ptr<ggl::Device> { }*)arg2 inBackground:(bool)arg3;
- (void)setIconsShouldAlignToPixels:(bool)arg1;
- (bool)iconsShouldAlignToPixels;
- (void)setGesturing:(bool)arg1;
- (bool)isGesturing;
- (void)clearSceneIsEffectivelyHidden:(bool)arg1;
- (float)debugFramesPerSecond;
- (void)didEnterBackground;
- (bool)updateDisplayLinkStatus;
- (void)updateCameraForFrameResize;
- (void)setTargetDisplay:(long long)arg1;
- (long long)targetDisplay;
- (bool)canRender;
- (void)cameraDidChange:(id)arg1;
- (id)camera;
- (void)setHidden:(bool)arg1;
- (id)world;
- (struct Matrix<float, 4, 1> { float x1[4]; })bgColor;
- (bool)isHidden;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)willEnterForeground;
- (void)forceLayout;
- (void)animationDidStop:(id)arg1;

@end
