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

@class NSArray;

@interface SKGroup : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCGroup=^^?If@?@BddffdBB@?qffff{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}} */
    struct SKCGroup { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; boolx7; double x8; double x9; float x10; float x11; double x12; boolx13; boolx14; id x15; void*x16; long long x17; float x18; float x19; float x20; float x21; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_22_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x_2_2_1; } x_22_1_2; } x22; } *_mycaction;

    NSArray *_actions;
}

+ (id)groupWithActions:(id)arg1;

- (id)reversedAction;
- (id)init;
- (bool)finished;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
