/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, NSObject<OS_xpc_object>, NSString;

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    NSObject<OS_xpc_object> *_dialog;
}

@property(readonly) NSObject<OS_xpc_object> * encodedDialog;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)encodedDialog;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)startWithAuthenticateResponse:(id)arg1;
- (id)initWithEncodedDialog:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void).cxx_destruct;

@end
