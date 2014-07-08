/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSObject<OS_dispatch_queue>, NSString, NSMutableDictionary;

@interface SBFMappedImageCache : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSMutableDictionary *_images;
}

+ (id)wallpaperCache;

- (void)removeImageForKey:(id)arg1;
- (void)warmupImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(id)arg2;
- (id)imageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(id)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1 options:(int)arg2;
- (id)initWithDescription:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;

@end
