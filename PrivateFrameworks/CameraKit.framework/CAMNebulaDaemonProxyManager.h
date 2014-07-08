/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol> {
    NSObject<OS_dispatch_queue> *__queue;
    NSXPCConnection *__connection;
    long long __connectionCount;
}

@property(readonly) NSObject<OS_dispatch_queue> * _queue;
@property(readonly) NSXPCConnection * _connection;
@property(readonly) long long _connectionCount;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
+ (id)sharedInstance;

- (long long)_connectionCount;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (void)_getProxyForExecutingBlock:(id)arg1;
- (void)forceStopCaptureWithReasons:(long long)arg1;
- (void)_closeConnectionToDaemon;
- (void)_ensureConnectionToDaemon;
- (void)updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)stopNebulaWithUUID:(id)arg1;
- (void)finishCaptureForNebulaWithUUID:(id)arg1;
- (void)updateNebulaWithUUID:(id)arg1;
- (void)resumeNebulaWithUUID:(id)arg1;
- (void)startNebulaWithUUID:(id)arg1;
- (id)_queue;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;

@end
