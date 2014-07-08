/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURLConnection;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    struct CustomProtocolManagerProxy { int (**x1)(); struct ChildProcessProxy {} *x2; struct WebContext {} *x3; struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; } *_customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    struct RefPtr<IPC::Connection> { 
        struct Connection {} *m_ptr; 
    } _connection;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}


- (id)initWithCustomProtocolManagerProxy:(struct CustomProtocolManagerProxy { int (**x1)(); struct ChildProcessProxy {} *x2; struct WebContext {} *x3; struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; }*)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3 connection:(struct Connection { struct atomic<int> { /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*x_1_1_1; int x_1_1_2; } x1; struct Client {} *x2; boolx3; struct atomic<unsigned long long> { void*x_4_1_1; unsigned long long x_4_1_2; } x4; boolx5; boolx6; int (*x7)(); boolx8; struct RefPtr<WorkQueue> { struct WorkQueue {} *x_9_1_1; } x9; struct RunLoop {} *x10; struct HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > > { struct HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> > { struct KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_11_1_1; } x11; unsigned int x12; unsigned int x13; unsigned int x14; boolx15; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_16_1_1; } x16; struct Deque<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > > { unsigned long long x_17_1_1; unsigned long long x_17_1_2; struct VectorBuffer<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0> { struct unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_17_1_3; } x17; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_18_1_1; } x18; struct Deque<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> > > { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct VectorBuffer<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0> { struct unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_19_1_3; } x19; struct condition_variable { struct _opaque_pthread_cond_t { long long x_1_2_1; BOOL x_1_2_2[40]; } x_20_1_1; } x20; struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_21_1_1; } x21; struct WaitForMessageState {} *x22; struct RefPtr<IPC::Connection::SyncMessageState> { struct SyncMessageState {} *x_23_1_1; } x23; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_24_1_1; } x24; boolx25; struct Vector<IPC::Connection::PendingSyncReply, 0, WTF::CrashOnOverflow> { struct PendingSyncReply {} *x_26_1_1; unsigned int x_26_1_2; unsigned int x_26_1_3; } x26; struct HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_27_1_1; } x27; unsigned int x28; id x29; unsigned int x30; id x31; struct XPCPtr<NSObject<OS_xpc_object> *> { id x_32_1_1; } x32; }*)arg4;
     /* Encoded args for previous method: @48@0:8^{CustomProtocolManagerProxy=^^?^{ChildProcessProxy}^{WebContext}{HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >}iiii}}}16Q24@32^{Connection={atomic<int>=Ai}^{Client}B{atomic<unsigned long long>=AQ}BB^?B{RefPtr<WorkQueue>=^{WorkQueue}}^{RunLoop}{HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >={HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> >=^{KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >}iiii}}IIIB{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Deque<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > >=QQ{VectorBuffer<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0>=^{unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >}II}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Deque<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> > >=QQ{VectorBuffer<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0>=^{unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >}II}}{condition_variable={_opaque_pthread_cond_t=q[40c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}^{WaitForMessageState}{RefPtr<IPC::Connection::SyncMessageState>=^{SyncMessageState}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}B{Vector<IPC::Connection::PendingSyncReply, 0, WTF::CrashOnOverflow>=^{PendingSyncReply}II}{HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>}iiii}}I@I@{XPCPtr<NSObject<OS_xpc_object> *>=@}}40 */

- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
