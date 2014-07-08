/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSOutputStream, NSURLSession, NSDictionary, NSOperationQueue, NSURLSessionDataTask, NSInputStream;

@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSStreamDelegate> {
    bool_didOpen;
    bool_isValid;
    bool_isTaskDone;
    struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); void *x54; void *x55; struct mmcs_read_stream_pool {} *x56; struct __CFRunLoop {} *x57; struct __CFArray {} *x58; union { struct mmcs_cfnetwork_http_context {} *x_59_1_1; struct mmcs_nsurlsession_http_context {} *x_59_1_2; struct mmcs_curl_http_context {} *x_59_1_3; } x59; } *_hc;
    NSURLSession *_urlSession;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSOperationQueue *_operationQueue;
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_timingData;
}

@property struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); void *x54; void *x55; struct mmcs_read_stream_pool {} *x56; struct __CFRunLoop {} *x57; struct __CFArray {} *x58; union { struct mmcs_cfnetwork_http_context {} *x_59_1_1; struct mmcs_nsurlsession_http_context {} *x_59_1_2; struct mmcs_curl_http_context {} *x_59_1_3; } x59; }* hc;
@property(retain) NSURLSession * urlSession;
@property(retain) NSInputStream * inputStream;
@property(retain) NSOutputStream * outputStream;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) NSURLSessionDataTask * dataTask;
@property(retain) NSDictionary * timingData;
@property bool didOpen;
@property bool isValid;
@property bool isTaskDone;

+ (id)sharedMMCSHTTPSession;

- (long long)countOfRequestBodyBytesSent;
- (void)setTimingData:(id)arg1;
- (void)cleanupRequest;
- (void)setDidOpen:(bool)arg1;
- (void)setIsTaskDone:(bool)arg1;
- (id)urlSession;
- (void)setDataTask:(id)arg1;
- (bool)createNewRequestBodyInputStream;
- (void)setHc:(struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); void *x54; void *x55; struct mmcs_read_stream_pool {} *x56; struct __CFRunLoop {} *x57; struct __CFArray {} *x58; union { struct mmcs_cfnetwork_http_context {} *x_59_1_1; struct mmcs_nsurlsession_http_context {} *x_59_1_2; struct mmcs_curl_http_context {} *x_59_1_3; } x59; }*)arg1;
- (void)invalidateStreamPair;
- (struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); void *x54; void *x55; struct mmcs_read_stream_pool {} *x56; struct __CFRunLoop {} *x57; struct __CFArray {} *x58; union { struct mmcs_cfnetwork_http_context {} *x_59_1_1; struct mmcs_nsurlsession_http_context {} *x_59_1_2; struct mmcs_curl_http_context {} *x_59_1_3; } x59; }*)hc;
- (bool)isTaskDone;
- (id)dataTask;
- (bool)requestBodyCanAcceptData;
- (void)requestBodyDone;
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)cleanupResponse;
- (id)timingData;
- (void)setOutputStream:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setIsValid:(bool)arg1;
- (id)inputStream;
- (id)outputStream;
- (id)initWithContext:(struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); void *x54; void *x55; struct mmcs_read_stream_pool {} *x56; struct __CFRunLoop {} *x57; struct __CFArray {} *x58; union { struct mmcs_cfnetwork_http_context {} *x_59_1_1; struct mmcs_nsurlsession_http_context {} *x_59_1_2; struct mmcs_curl_http_context {} *x_59_1_3; } x59; }*)arg1 options:(const struct mmcs_http_context_options { struct __CFString {} *x1; struct __CFHTTPMessage {} *x2; struct __CFDictionary {} *x3; double x4; unsigned char x5; unsigned long long x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); void *x12; int (*x13)(); void *x14; unsigned char x15; }*)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (bool)isValid;
- (void)invalidate;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)operationQueue;
- (bool)send;
- (void)setOperationQueue:(id)arg1;
- (bool)didOpen;

@end
