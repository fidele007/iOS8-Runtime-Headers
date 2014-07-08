/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface SBUIBannerAction : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _actionBlock;

    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
}

@property(copy) id actionBlock;
@property(copy) NSString * remoteViewControllerClassName;
@property(copy) NSString * remoteServiceBundleIdentifier;

+ (id)actionWithBlock:(id)arg1;

- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;
- (id)remoteViewControllerClassName;
- (id)remoteServiceBundleIdentifier;
- (id)initWithActionBlock:(id)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3;
- (void)setActionBlock:(id)arg1;
- (id)actionBlock;
- (void)dealloc;

@end
