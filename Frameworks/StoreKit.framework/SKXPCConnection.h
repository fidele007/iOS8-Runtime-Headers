/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface SKXPCConnection : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disconnectBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageBlock;

}

@property(copy) id disconnectBlock;
@property(copy) id messageBlock;


- (id)_initSKXPCConnection;
- (void)_reloadEventHandler;
- (void)sendSynchronousMessage:(id)arg1 withReply:(id)arg2;
- (id)disconnectBlock;
- (id)createXPCEndpoint;
- (id)messageBlock;
- (void)setMessageBlock:(id)arg1;
- (void)setDisconnectBlock:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)init;
- (void)sendMessage:(id)arg1;
- (void)dealloc;

@end
