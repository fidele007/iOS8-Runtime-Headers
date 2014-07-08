/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    NSString *_name;
    CALayer *_layerA;
    CALayer *_layerB;
    struct CGPoint { 
        double x; 
        double y; 
    } _attachmentPointA;
    struct CGPoint { 
        double x; 
        double y; 
    } _attachmentPointB;
    CAValueFunction *_function;
    double _stiffness;
    double _damping;
    double _restLength;
    bool_enabled;
    id _delegate;
    void *_priv;
}

@property(copy) NSString * name;
@property(getter=isEnabled) bool enabled;
@property(retain) CALayer * layerA;
@property(retain) CALayer * layerB;
@property struct CGPoint { double x1; double x2; } attachmentPointA;
@property struct CGPoint { double x1; double x2; } attachmentPointB;
@property(retain) CAValueFunction * function;
@property double restLength;
@property double stiffness;
@property double damping;
@property id delegate;

+ (id)spring;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setName:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)function;
- (id)valueForKey:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setDamping:(double)arg1;
- (double)damping;
- (void)setRestLength:(double)arg1;
- (double)restLength;
- (struct CGPoint { double x1; double x2; })attachmentPointB;
- (struct CGPoint { double x1; double x2; })attachmentPointA;
- (id)layerA;
- (void)setFunction:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (double)stiffness;
- (void)setStiffness:(double)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setAttachmentPointB:(struct CGPoint { double x1; double x2; })arg1;
- (id)layerB;
- (void)setLayerB:(id)arg1;
- (void)setAttachmentPointA:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayerA:(id)arg1;

@end
