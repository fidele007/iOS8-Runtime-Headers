/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString;

@interface DeferredFrameworkLoader : NSObject  {
    NSString *_path;
    void *_frameworkHandle;
    long long _frameworkLoadedToken;
}

@property(retain) NSString * path;
@property void* frameworkHandle;
@property long long frameworkLoadedToken;

+ (id)PhotosUIFrameworkPath;

- (void)setFrameworkLoadedToken:(long long)arg1;
- (long long)frameworkLoadedToken;
- (void)setFrameworkHandle:(void*)arg1;
- (void*)frameworkHandle;
- (Class)classFromString:(id)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;

@end
