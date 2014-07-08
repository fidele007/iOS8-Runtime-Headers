/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString, NSUUID, NSData, NEIdentityKeychainItem, NEKeychainItem, NEProxySettings;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding> {
    bool_disconnectOnSleep;
    bool_disconnectOnWake;
    bool_identityDataImported;
    bool_disconnectOnIdle;
    bool_disconnectOnUserSwitch;
    bool_disconnectOnLogout;
    int _disconnectOnWakeTimeout;
    int _disconnectOnIdleTimeout;
    NSString *_serverAddress;
    NSString *_username;
    NSUUID *_identifier;
    long long _type;
    NEKeychainItem *_passwordKeychainItem;
    NSString *_passwordEncryption;
    NEProxySettings *_proxySettings;
    NSData *_identityDataInternal;
    NSData *_identityDataHash;
    long long _keychainDomain;
    NEIdentityKeychainItem *_identity;
}

@property(copy) NSString * serverAddress;
@property(copy) NSString * username;
@property(copy) NSData * passwordReference;
@property(copy) NSData * identityReference;
@property(copy) NSData * identityData;
@property bool disconnectOnSleep;
@property(copy) NSUUID * identifier;
@property(readonly) long long type;
@property bool disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property(copy) NEKeychainItem * passwordKeychainItem;
@property(copy) NSString * passwordEncryption;
@property(copy) NEProxySettings * proxySettings;
@property(copy) NSData * identityReferenceInternal;
@property(copy) NSData * identityDataInternal;
@property bool identityDataImported;
@property(copy) NSData * identityDataHash;
@property bool disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property bool disconnectOnUserSwitch;
@property bool disconnectOnLogout;
@property long long keychainDomain;
@property(retain) NEIdentityKeychainItem * identity;

+ (bool)supportsSecureCoding;

- (void)setKeychainDomain:(long long)arg1;
- (void)setDisconnectOnLogout:(bool)arg1;
- (bool)disconnectOnLogout;
- (void)setDisconnectOnUserSwitch:(bool)arg1;
- (bool)disconnectOnUserSwitch;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (id)identityData;
- (void)setIdentityData:(id)arg1;
- (id)identityReference;
- (void)setIdentityReference:(id)arg1;
- (id)passwordReference;
- (void)setPasswordReference:(id)arg1;
- (void)initDisconnectOptions:(id)arg1;
- (id)identityReferenceInternal;
- (void)setIdentityReferenceInternal:(id)arg1;
- (long long)keychainDomain;
- (id)initFromLegacyDictionary:(id)arg1;
- (void)addDisconnectOptions:(id)arg1;
- (id)type2str;
- (void)setPasswordEncryption:(id)arg1;
- (void)setPasswordKeychainItem:(id)arg1;
- (void)setDisconnectOnWakeTimeout:(int)arg1;
- (void)setDisconnectOnSleep:(bool)arg1;
- (void)setDisconnectOnIdleTimeout:(int)arg1;
- (void)setDisconnectOnIdle:(bool)arg1;
- (void)setProxySettings:(id)arg1;
- (void)setIdentityDataHash:(id)arg1;
- (void)setIdentityDataImported:(bool)arg1;
- (void)setIdentityDataInternal:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (id)initWithProtocolIdentifier:(id)arg1;
- (int)disconnectOnWakeTimeout;
- (bool)disconnectOnWake;
- (bool)disconnectOnSleep;
- (int)disconnectOnIdleTimeout;
- (bool)disconnectOnIdle;
- (id)proxySettings;
- (id)identityDataHash;
- (bool)identityDataImported;
- (id)identityDataInternal;
- (id)passwordEncryption;
- (id)passwordKeychainItem;
- (struct __SCNetworkInterface { }*)createInterface;
- (bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (bool)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (void)removeKeychainItemsInDomain:(long long)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (id)copyLegacyDictionary;
- (void)setDisconnectOnWake:(bool)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (void)setIdentity:(id)arg1;
- (id)serverAddress;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithType:(long long)arg1;
- (long long)type;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
