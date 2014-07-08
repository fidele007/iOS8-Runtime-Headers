/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    bool_useSSL;
    int _port;
    NSString *_accountPersistentUUID;
}

@property(retain,readonly) NSString * accountDescription;
@property(retain,readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(retain,readonly) NSString * principalURL;
@property(readonly) bool useSSL;
@property(readonly) int port;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)principalURL;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)accountPersistentUUID;
- (bool)useSSL;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)accountDescription;
- (id)title;
- (id)hostname;
- (id)password;
- (int)port;
- (void).cxx_destruct;
- (id)description;

@end
