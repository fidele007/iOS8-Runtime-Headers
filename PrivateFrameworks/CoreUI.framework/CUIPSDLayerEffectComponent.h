/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject  {
    bool_visible;
    NSString *_name;
}

@property bool visible;
@property(retain) NSString * name;


- (bool)visible;
- (void)setName:(id)arg1;
- (unsigned int)effectType;
- (id)_colorFromShapeEffectValue:(union { double x1; unsigned long long x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })arg1;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (void)setVisible:(bool)arg1;
- (id)name;
- (void)dealloc;

@end
