/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL, NSNumber, SAFmfGeoFence;

@interface SAFmfGeoFenceSnippet : SAUISnippet  {
}

@property(retain) SAFmfGeoFence * aceFmfGeoFence;
@property(copy) NSNumber * enable;
@property(copy) NSString * fenceType;
@property(copy) NSNumber * oneTimeOnly;
@property(copy) NSURL * searchContext;

+ (id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSnippet;

- (void)setAceFmfGeoFence:(id)arg1;
- (id)aceFmfGeoFence;
- (void)setOneTimeOnly:(id)arg1;
- (id)oneTimeOnly;
- (void)setFenceType:(id)arg1;
- (id)fenceType;
- (id)encodedClassName;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (void)setEnable:(id)arg1;
- (id)groupIdentifier;
- (id)enable;

@end
