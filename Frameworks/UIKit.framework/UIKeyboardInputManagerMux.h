/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIIVCResponseDelegateImpl>, NSMutableArray, <TIKeyboardInputManager>;

@interface UIKeyboardInputManagerMux : NSObject  {
    NSMutableArray *_clients;
    <_UIIVCResponseDelegateImpl> *_responseDelegate;
    <TIKeyboardInputManager> *_systemInputManager;
}

@property(readonly) bool hasSystemInputManager;
@property(retain) <_UIIVCResponseDelegateImpl> * responseDelegate;
@property(retain) <TIKeyboardInputManager> * systemInputManager;

+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;

- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void)removeAllClients;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;
- (bool)_systemHasKbd;
- (void)setSystemInputManager:(id)arg1;
- (id)systemInputManager;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)releaseConnectedClients;
- (void)setSystemInputManagerFromKeyboardState:(id)arg1;
- (bool)hasSystemInputManager;
- (void)setResponseDelegate:(id)arg1;
- (id)responseDelegate;

@end
