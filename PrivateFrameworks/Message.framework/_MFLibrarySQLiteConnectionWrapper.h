/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFProtectedSQLiteConnection;

@interface _MFLibrarySQLiteConnectionWrapper : NSObject  {
    MFProtectedSQLiteConnection *_connection;
    bool_writer;
    unsigned long long _refcount;
}

@property(readonly) MFProtectedSQLiteConnection * connection;
@property(readonly) bool writer;
@property(readonly) unsigned long long refcount;

+ (id)wrapperWithConnection:(id)arg1 forWriting:(bool)arg2;

- (unsigned long long)refcount;
- (id)initWithConnection:(id)arg1 forWriting:(bool)arg2;
- (unsigned long long)decrementRefcount;
- (unsigned long long)incrementRefcount;
- (bool)writer;
- (id)connection;
- (void)dealloc;

@end
