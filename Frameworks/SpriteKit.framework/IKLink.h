/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKNode;

@interface IKLink : NSObject  {
    float _angleInitial;
    float _angle;
    float _length;
    SKNode *_node;
    union _GLKVector2 { 
        struct { 
            float x; 
            float y; 
        } ; 
        struct { 
            float s; 
            float t; 
        } ; 
        float v[2]; 
    } _position;
    union _GLKVector2 { 
        struct { 
            float x; 
            float y; 
        } ; 
        struct { 
            float s; 
            float t; 
        } ; 
        float v[2]; 
    } _size;
}

@property(retain) SKNode * node;
@property union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } position;
@property float angleInitial;
@property(readonly) float angle;
@property float length;
@property union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } size;


- (void)setAngleInitial:(float)arg1;
- (float)angleInitial;
- (void)rotateByAngle:(float)arg1;
- (double)normalizeAngle:(double)arg1;
- (id)node;
- (id)initWithNode:(id)arg1;
- (void)setPosition:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (float)angle;
- (void)setSize:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (float)length;
- (void)setLength:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })size;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })position;
- (void)setNode:(id)arg1;

@end
