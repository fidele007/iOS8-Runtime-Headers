/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CAEAGLLayer, PLGLLayerDelegate, EAGLContext;

@interface CAMGLView : UIView  {
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    CAEAGLLayer *_glLayer;
    PLGLLayerDelegate *_glLayerDelegate;
    bool_disableLayoutForGLLayer;
    bool__atomicRetainedBacking;
    bool__shouldDeleteFramebuffer;
    bool__disableLayoutForGLLayerInternal;
    long long _drawableWidth;
    long long _drawableHeight;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _renderNotifyBlock;

    EAGLContext *__atomicContext;
    struct CGSize { 
        double width; 
        double height; 
    } __atomicFixedSize;
}

@property(retain) EAGLContext * context;
@property struct CGSize { double x1; double x2; } fixedSize;
@property bool retainedBacking;
@property(retain,readonly) CAEAGLLayer * glLayer;
@property(getter=isDisabledLayoutForGLLayer) bool disableLayoutForGLLayer;
@property long long drawableWidth;
@property long long drawableHeight;
@property(copy) id renderNotifyBlock;
@property(setter=_setAtomicContext:,retain) EAGLContext * _atomicContext;
@property(setter=_setAtomicRetainedBacking:) bool _atomicRetainedBacking;
@property(setter=_setAtomicFixedSize:) struct CGSize { double x1; double x2; } _atomicFixedSize;
@property(setter=_setShouldDeleteFramebuffer:) bool _shouldDeleteFramebuffer;
@property(getter=_isDisabledLayoutForGLLayerInternal,setter=_setDisableLayoutForGLLayerInternal:) bool _disableLayoutForGLLayerInternal;


- (void)setDisableLayoutForGLLayer:(bool)arg1;
- (void)renderWithBlock:(id)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutGLLayer;
- (bool)_isDisabledLayoutForGLLayerInternal;
- (bool)isDisabledLayoutForGLLayer;
- (id)renderNotifyBlock;
- (void)_handleRenderNotifyBlock;
- (bool)_setFramebuffer:(bool*)arg1 context:(id)arg2;
- (void)_createFramebufferInContext:(id)arg1;
- (bool)_shouldDeleteFramebuffer;
- (long long)drawableHeight;
- (long long)drawableWidth;
- (void)setDrawableHeight:(long long)arg1;
- (void)setDrawableWidth:(long long)arg1;
- (void)_setDisableLayoutForGLLayerInternal:(bool)arg1;
- (struct CGSize { double x1; double x2; })fixedSize;
- (void)_setAtomicFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_atomicFixedSize;
- (void)_setAtomicContext:(id)arg1;
- (id)_atomicContext;
- (void)_setShouldDeleteFramebuffer:(bool)arg1;
- (void)_setAtomicRetainedBacking:(bool)arg1;
- (bool)_atomicRetainedBacking;
- (bool)retainedBacking;
- (void)_deleteFramebufferInContext:(id)arg1;
- (void)_configureLayer;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (id)glLayer;
- (void)forceDestroyGLResources;
- (void)setRetainedBacking:(bool)arg1;
- (void)setRenderNotifyBlock:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setContentMode:(long long)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)layoutSubviews;

@end
