/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURLRequest, <SSDownloadManifestRequestDelegate>;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {
    int _manifestFormat;
    BOOL _shouldHideUserPrompts;
    NSURLRequest *_urlRequest;
}

@property(readonly) NSURLRequest * URLRequest;
@property BOOL shouldHideUserPrompts;
@property <SSDownloadManifestRequestDelegate> * delegate;
@property int manifestFormat;


- (void)setManifestFormat:(int)arg1;
- (id)URLRequest;
- (void)startWithCompletionBlock:(id)arg1;
- (int)manifestFormat;
- (BOOL)shouldHideUserPrompts;
- (void)setShouldHideUserPrompts:(BOOL)arg1;
- (void)startWithManifestResponseBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)start;

@end