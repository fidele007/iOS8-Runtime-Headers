/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (void)truncateToLength:(long long)arg1;
- (bool)moveToPath:(id)arg1;
- (bool)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)inputStream;
- (id)initWithTemporaryFile:(id)arg1;
- (id)path;
- (bool)canSeek;
- (long long)offset;
- (void)flush;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
