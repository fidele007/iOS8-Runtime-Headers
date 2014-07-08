/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, <CoreDAVTaskDelegate>;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask  {
    NSString *_nextETag;
}

@property <CoreDAVTaskDelegate> * delegate;
@property(retain) NSString * nextETag;


- (id)nextETag;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setNextETag:(id)arg1;
- (void)dealloc;
- (id)description;

@end
