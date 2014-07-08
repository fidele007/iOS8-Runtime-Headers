/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject  {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}


- (void)applyFunction:(int (*)())arg1 withContext:(void*)arg2;
- (void)_setupFrom:(id)arg1;
- (id)keys;
- (id)dictionary;
- (id)valueForKey:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (unsigned long long)count;
- (id)copy;
- (void)dealloc;

@end
