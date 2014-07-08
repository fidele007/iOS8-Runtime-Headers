/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder  {
    NSArray *_queueItems;
}

@property(readonly) NSArray * items;


- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (id)playbackInfoAtIndex:(unsigned long long)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)dealloc;
- (void).cxx_destruct;

@end
