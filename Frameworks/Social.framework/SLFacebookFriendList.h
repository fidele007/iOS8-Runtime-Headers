/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLFacebookFriendList : NSObject  {
    NSString *_identifier;
    NSString *_name;
    NSString *_type;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSString * type;

+ (id)friendListsWithResponseData:(id)arg1;
+ (id)friendListWithDictionary:(id)arg1;

- (id)initWithFriendListDictionary:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;
- (id)name;
- (void)setType:(id)arg1;
- (id)type;
- (void).cxx_destruct;

@end
