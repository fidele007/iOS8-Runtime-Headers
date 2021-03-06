/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, ACAccount, <AAUIRemoteUIRepairFlowDelegate>, AAUIAccountRepairRemoteUI;

@interface AAUIRemoteUIRepairFlow : NSObject <AAUIAccountRepairRemoteUIDelegate> {
    ACAccount *_account;
    AAUIAccountRepairRemoteUI *_remoteUI;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    <AAUIRemoteUIRepairFlowDelegate> *_delegate;
}

@property <AAUIRemoteUIRepairFlowDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)accountRepairRemoteUIWillDismiss:(id)arg1;
- (void)accountRepairRemoteUIWillAppear:(id)arg1;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(bool)arg3;
- (void)presentFlowFromViewController:(id)arg1 modal:(bool)arg2 completion:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end
