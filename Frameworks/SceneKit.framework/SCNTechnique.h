/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNOrderedDictionary, NSMutableDictionary, NSDictionary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    id _reserved;
    unsigned int _isPresentationInstance : 1;
    struct __C3DFXTechnique { } *_technique;
    NSMutableDictionary *_valueForSymbol;
    SCNOrderedDictionary *_animations;
}

@property(readonly) NSDictionary * dictionaryRepresentation;

+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (id)presentationInstance;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (id)valueForSymbolNamed:(id)arg1;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DModelValueStorage {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; boolx7; boolx8; boolx9; struct _C3DAnimationPendingEvent {} *x10; struct __C3DAllocator {} *x11; struct __CFDictionary {} *x12; struct __CFArray {} *x13; double x14; double x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; int x17; int x18; int x19; int x20; }*)animationManager;
- (void)_syncObjCAnimations;
- (void*)__CFObject;
- (struct __C3DScene { }*)sceneRef;
- (id)_symbolsAssignedValues;
- (struct __C3DFXTechnique { }*)techniqueRef;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
- (id)scene;
- (void)removeAllAnimations;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
