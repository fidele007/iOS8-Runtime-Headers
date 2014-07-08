/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, NSObject<OS_dispatch_source>, NSURL, PQLConnection, NSMutableDictionary, BRCServerPersistedState;

@interface BRCDatabaseManager : NSObject  {
    BRCAccountSession *_session;
    NSURL *_url;
    NSObject<OS_dispatch_source> *_watcher;
    PQLConnection *_serverTruthConnection;
    PQLConnection *_clientTruthConnection;
    NSMutableDictionary *_clientState;
    BRCServerPersistedState *_serverState;
}

@property(readonly) PQLConnection * serverTruthConnection;
@property(readonly) PQLConnection * clientTruthConnection;
@property(readonly) NSMutableDictionary * clientState;
@property(readonly) BRCServerPersistedState * serverState;


- (id)serverState;
- (id)clientState;
- (id)serverTruthConnection;
- (bool)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (bool)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id*)arg3;
- (void)setupForDumpingDatabaseAtURL:(id)arg1;
- (bool)openAtURL:(id)arg1 error:(id*)arg2;
- (bool)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (id)initWithAccountSession:(id)arg1;
- (bool)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (id)newConnectionWithLabel:(id)arg1 error:(id*)arg2;
- (id)clientTruthConnection;
- (void)_stopWatcher;
- (bool)_openServerTruthConnectionWithError:(id*)arg1;
- (bool)_openClientTruthConnectionWithError:(id*)arg1;
- (void)_startWatcher;
- (bool)validateDatabase:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;
- (bool)_checkIntegrity:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;
- (bool)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (bool)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id*)arg3;
- (bool)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id*)arg3;
- (id)newConnection:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)closeWithError:(id*)arg1;

@end
