/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKFollowPath : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCFollowPath=^^?If@?@BddffdBB@?qfffffI^{PKPath}{?=ff}BB} */
    struct SKCFollowPath { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; boolx7; double x8; double x9; float x10; float x11; double x12; boolx13; boolx14; id x15; void*x16; long long x17; float x18; float x19; float x20; float x21; float x22; unsigned int x23; struct PKPath {} *x24; struct { float x_25_1_1; float x_25_1_2; } x25; boolx26; boolx27; } *_mycaction;

    struct CGPath { } *_cgPath;
}

+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(bool)arg2 orientToPath:(bool)arg3 speed:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 speed:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(bool)arg2 orientToPath:(bool)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
