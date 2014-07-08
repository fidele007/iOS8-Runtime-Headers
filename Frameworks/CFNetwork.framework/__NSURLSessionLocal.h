/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, NSArray;

@interface __NSURLSessionLocal : NSURLSession <NSURLSessionSubclass> {
    unsigned long long _identSeed;
    struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, TubeManager *> {} *x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; } *_tubeManager;
    NSMutableDictionary *_tasks;
    NSObject<OS_dispatch_queue> *_invalidateQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidateCallback;

    const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; } *_xCache;
    long long _xCacheOnce;
    const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } *_xCookies;
    long long _xCookiesOnce;
    const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } *_xCreds;
    long long _xCredsOnce;
    NSArray *_localProtocolClassesForDefaultSession;
}


- (void)_removeProtocolClassForDefaultSession:(Class)arg1;
- (bool)_prependProtocolClassForDefaultSession:(Class)arg1;
- (struct URLProtocol { int (**x1)(); int (**x2)(); struct CoreSchedulingSet {} *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; long long x15; unsigned char x16; int x17; long long x18; id x19; struct URLProtocolClient {} *x20; struct _CFCachedURLResponse {} *x21; }*)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient { int (**x1)(); }*)arg2;
- (bool)_cfurlRequest:(struct _CFURLRequest { }*)arg1 isCacheEquivalentTo:(struct _CFURLRequest { }*)arg2;
- (id)_createCanonicalRequestForTask:(id)arg1;
- (id)_createCanonicalRequest:(id)arg1;
- (struct Tube { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); int (**x5)(); struct HTTPConnectionCacheKey {} *x6; struct BaseTubeManager {} *x7; struct CoreSchedulingSet {} *x8; struct BaseAwaitingTube {} *x9; struct SocketStreamObject {} *x10; int x11; boolx12; struct { boolx_13_1_1; unsigned long long x_13_1_2; } x13; int x14; boolx15; boolx16; struct __CFArray {} *x17; struct __SecTrust {} *x18; struct NetworkProxy {} *x19; id x20; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x21; id x22; void*x23; struct __CFReadStream {} *x24; struct __CFWriteStream {} *x25; }*)_withConnectionCache_getPendingTubeForProtocol:(struct MetaConnectionCacheClient { int (**x1)(); }*)arg1 withKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg3;
     /* Encoded args for previous method: ^{Tube=^^?^{__CFAllocator}i^^?^^?^{HTTPConnectionCacheKey}^{BaseTubeManager}^{CoreSchedulingSet}^{BaseAwaitingTube}^{SocketStreamObject}iB{?=BQ}iBB^{__CFArray}^{__SecTrust}^{NetworkProxy}@?@?^{__CFReadStream}^{__CFWriteStream}}40@0:8^{MetaConnectionCacheClient=^^?}16r^{HTTPConnectionCacheKey=^^?^{__CFAllocator}iQ^{__CFString}ii^{__CFDictionary}Q^{__CFDictionary}^{NetworkProxy}^{__CFString}ii}24r^{CoreSchedulingSet=^^?^{__CFAllocator}i^^?^{_opaque_pthread_t}i^{__CFSet}@@^{__CFRunLoop}^{__CFString}i}32 */

- (bool)_withConnectionCache_enqueueRequest:(const struct HTTPRequestMessage { int (**x1)(); int (**x2)(); int (**x3)(); unsigned char x4; struct HTTPVersionMixedValue { int (**x_5_1_1)(); struct __CFString {} *x_5_1_2; } x5; struct HTTPBodyData {} *x6; int x7; long long x8; struct _CFHTTPAuthentication {} *x9; struct _CFHTTPAuthentication {} *x10; struct HTTPParser {} *x11; struct HTTPHeaderDict {} *x12; struct HTTPHeaderDict {} *x13; int (**x14)(); struct __CFAllocator {} *x15; struct HTTPMethodMixedValue { int (**x_16_1_1)(); struct __CFString {} *x_16_1_2; } x16; char *x17; struct __CFURL {} *x18; char *x19; }*)arg1 forProtocol:(struct MetaConnectionCacheClient { int (**x1)(); }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg3 options:(struct MetaConnectionOptions { int x1; float x2; unsigned long long x3; unsigned char x4; unsigned char x5; unsigned char x6; })arg4;
- (void)_withConnectionCache_setCurrentSSLMethod:(struct __CFString { }*)arg1 forKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg3;
- (struct __CFString { }*)_withConnectionCache_getCurrentSSLMethodForKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg2;
- (void)_getCookieHeadersForTask:(id)arg1 completionHandler:(id)arg2;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)copyBaseStorageForRequest:(struct _CFURLRequest { }*)arg1;
- (id)_createTaskFromOriginalCFURLRequest:(struct _CFURLRequest { }*)arg1 updatedCFURLRequest:(struct _CFURLRequest { }*)arg2 connProps:(struct __CFDictionary { }*)arg3 sockProps:(struct __CFDictionary { }*)arg4;
- (void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1;
- (void)_purgeIdleConnections;
- (void)_invalidateAllConnections;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (void)task:(id)arg1 terminatedConnection:(id)arg2;
- (void)replaceTask:(id)arg1 withTask:(id)arg2;
- (id)connToTask:(id)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(id)arg1;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(id)arg1;
- (id)_streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(bool)arg3 completionHandler:(id)arg4;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id)arg4;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (struct URLProtocol { int (**x1)(); int (**x2)(); struct CoreSchedulingSet {} *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; long long x15; unsigned char x16; int x17; long long x18; id x19; struct URLProtocolClient {} *x20; struct _CFCachedURLResponse {} *x21; }*)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient { int (**x1)(); }*)arg2 protocolClass:(Class)arg3;
- (bool)_request:(id)arg1 isCacheEquivalentTo:(id)arg2;
- (Class)_protocolClassForRequest:(id)arg1;
- (Class)_protocolClassForTask:(id)arg1;
- (id)_protocolClasses;
- (struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, TubeManager *> {} *x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; }*)_actualTubeManager;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage0;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage0;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache0;
- (void)_onqueue_invalidateSession:(bool)arg1 withQueue:(id)arg2 completion:(id)arg3;
- (void)_flushOrResetStorage:(id)arg1 reset:(unsigned char)arg2;
- (id)taskForClass:(Class)arg1 request:(id)arg2 uploadFile:(id)arg3 bodyData:(id)arg4 completion:(id)arg5;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (id)copyTasks;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_invokeInvalidateCallback;
- (unsigned long long)nextSeed;
- (void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
