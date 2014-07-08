/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCAccountSession, NSObject<OS_dispatch_queue>;

@interface BRCFSWriter : NSObject <BRCModule, BRCFileCoordinationWriting> {
    BRCAccountSession *_session;

  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;

    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> * serialQueue;


- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_applyChangesForAliasWithRank:(id)arg1 container:(id)arg2 li:(id)arg3 si:(id)arg4 diffs:(unsigned long long)arg5;
- (void)fixupItemsAtStartup;
- (void)stageCreationOfFault:(id)arg1 serverItem:(id)arg2 forCreation:(bool)arg3;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;
- (void)applyChangesForItem:(id)arg1 rank:(id)arg2 inContainer:(id)arg3;
- (void)applyAdditionsForItemID:(id)arg1 inContainer:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (void)resume;
- (id)serialQueue;
- (void)close;
- (void)suspend;
- (void).cxx_destruct;

@end
