/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    struct ScrollingTreeOverflowScrollingNodeIOS { int (**x1)(); unsigned int x2; struct OwnPtr<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> > { struct Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> {} *x_3_1_1; } x3; struct ScrollingTree {} *x4; int x5; unsigned long long x6; struct ScrollingTreeNode {} *x7; struct FloatSize { float x_8_1_1; float x_8_1_2; } x8; struct FloatSize { float x_9_1_1; float x_9_1_2; } x9; struct FloatSize { float x_10_1_1; float x_10_1_2; } x10; struct FloatPoint { float x_11_1_1; float x_11_1_2; } x11; struct IntPoint { int x_12_1_1; int x_12_1_2; } x12; struct ScrollableAreaParameters { int x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; boolx_13_1_5; boolx_13_1_6; } x13; struct RetainPtr<CALayer> { void *x_14_1_1; } x14; struct RetainPtr<CALayer> { void *x_15_1_1; } x15; struct RetainPtr<WKOverflowScrollViewDelegate> { void *x_16_1_1; } x16; } *_scrollingTreeNode;
    bool_inUserInteraction;
}

@property(getter=_isInUserInteraction) bool inUserInteraction;


- (void)setInUserInteraction:(bool)arg1;
- (bool)_isInUserInteraction;
- (id)initWithScrollingTreeNode:(struct ScrollingTreeOverflowScrollingNodeIOS { int (**x1)(); unsigned int x2; struct OwnPtr<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> > { struct Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> {} *x_3_1_1; } x3; struct ScrollingTree {} *x4; int x5; unsigned long long x6; struct ScrollingTreeNode {} *x7; struct FloatSize { float x_8_1_1; float x_8_1_2; } x8; struct FloatSize { float x_9_1_1; float x_9_1_2; } x9; struct FloatSize { float x_10_1_1; float x_10_1_2; } x10; struct FloatPoint { float x_11_1_1; float x_11_1_2; } x11; struct IntPoint { int x_12_1_1; int x_12_1_2; } x12; struct ScrollableAreaParameters { int x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; boolx_13_1_5; boolx_13_1_6; } x13; struct RetainPtr<CALayer> { void *x_14_1_1; } x14; struct RetainPtr<CALayer> { void *x_15_1_1; } x15; struct RetainPtr<WKOverflowScrollViewDelegate> { void *x_16_1_1; } x16; }*)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end
