/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SCNGeometryElement, NSString, SCNShadableHelper, NSArray, SCNMaterial, NSMutableDictionary, SCNOrderedDictionary, NSDictionary, SCNGeometrySource, NSMutableArray, SCNProgram;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding> {
    id _geometryReserved;
    struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; } *_geometry;
    unsigned int _isPresentationInstance : 1;
    NSMutableArray *_materials;
    SCNOrderedDictionary *_animations;
    NSArray *_levelsOfDetail;
    unsigned long long _subdivisionLevel;
    SCNGeometrySource *_edgeCreasesSource;
    SCNGeometryElement *_edgeCreasesElement;
    SCNShadableHelper *_shadableHelper;
    struct SCNVector3 { float x1; float x2; float x3; } *_fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
}

@property(copy) NSString * name;
@property(copy) NSArray * materials;
@property(retain) SCNMaterial * firstMaterial;
@property(readonly) long long geometryElementCount;
@property(copy) NSArray * levelsOfDetail;
@property unsigned long long subdivisionLevel;
@property(retain) SCNGeometryElement * edgeCreasesElement;
@property(retain) SCNGeometrySource * edgeCreasesSource;
@property(copy) NSDictionary * shaderModifiers;
@property(retain) SCNProgram * program;

+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;
+ (id)floorWithOptions:(id)arg1;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3;
+ (id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4;
+ (id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4;
+ (id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)sphereWithRadius:(double)arg1 options:(id)arg2;
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4;
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5;
+ (id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)geometryWithGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)arg1;
+ (id)SCNJSExportProtocol;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (id)geometry;

- (void)setMaterial:(id)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (void)replaceMaterial:(id)arg1 with:(id)arg2;
- (void)removeMaterial:(id)arg1;
- (id)objectInMaterialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfMaterials;
- (id)keyForNodeAttributes;
- (id)geometrySourceForSemantic:(id)arg1;
- (void)_customDecodingOfSCNGeometry:(id)arg1;
- (void)_customEncodingOfSCNGeometry:(id)arg1;
- (void)setEdgeCreasesSource:(id)arg1;
- (id)edgeCreasesSource;
- (void)setEdgeCreasesElement:(id)arg1;
- (id)edgeCreasesElement;
- (void)setSubdivisionLevel:(unsigned long long)arg1;
- (unsigned long long)subdivisionLevel;
- (id)geometryElementAtIndex:(long long)arg1;
- (id)materialWithName:(id)arg1;
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2;
- (void)removeMaterialAtIndex:(unsigned long long)arg1;
- (void)setFirstMaterial:(id)arg1;
- (id)firstMaterial;
- (void)removeAllMaterials;
- (void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2;
- (void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_firstMaterial;
- (id)mutableMaterials;
- (void)_expand;
- (id)_materialWithName:(id)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)setMaterials:(id)arg1;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)initPresentationGeometryWithGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)arg1;
- (id)geometryDescription;
- (long long)geometryElementCount;
- (id)initWithGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)arg1;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)__createCFObject;
- (void)_setGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)arg1;
- (void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3;
- (id)materials;
- (bool)isPresentationInstance;
- (void)setBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (id)getBoundingSphere;
- (id)getBoundingBox;
- (void)setGeometryRef:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)arg1;
- (bool)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(double*)arg2;
- (bool)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 remainingPath:(id*)arg4;
- (id)presentationGeometry;
- (struct __C3DMaterial { }*)materialRefCreateIfNeeded;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (void)_setupShadableHelperIfNeeded;
- (id)shaderModifiersUniformNames;
- (void)setShaderModifiers:(id)arg1;
- (id)shaderModifiers;
- (id)program;
- (void)_setAttributes:(id)arg1;
- (void)setProgram:(id)arg1;
- (struct __C3DMaterial { }*)materialRef;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)geometryRef;
- (id)presentationInstance;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DModelValueStorage {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; boolx7; boolx8; boolx9; struct _C3DAnimationPendingEvent {} *x10; struct __C3DAllocator {} *x11; struct __CFDictionary {} *x12; struct __CFArray {} *x13; double x14; double x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; int x17; int x18; int x19; int x20; }*)animationManager;
- (void)_syncObjCAnimations;
- (void*)__CFObject;
- (struct __C3DScene { }*)sceneRef;
- (id)scene;
- (id)material;
- (void)removeAllAnimations;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;
- (id)animationKeys;
- (void)setLevelsOfDetail:(id)arg1;
- (id)levelsOfDetail;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (long long)primitiveType;
- (id)init;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
