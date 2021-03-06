/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSSceneTransitionContext;

@interface FBSWorkspaceDestroySceneEvent : FBSWorkspaceSceneEvent  {
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain) FBSSceneTransitionContext * transitionContext;


- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;
- (void)dealloc;

@end
