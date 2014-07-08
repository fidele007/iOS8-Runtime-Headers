/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSDictionary, NSArray, NSNumber;

@interface MCWiFiPayload : MCPayload  {
    bool_isHidden;
    bool_isWEP;
    bool_isWPA;
    bool_passwordRequired;
    bool_usernameRequired;
    bool_autoJoin;
    bool_proxyPACFallbackAllowed;
    bool_isHotspot;
    bool_serviceProviderRoamingEnabled;
    int _proxyType;
    NSString *_ssid;
    NSString *_encryptionType;
    NSDictionary *_eapClientConfig;
    NSString *_password;
    NSString *_username;
    NSString *_certificateUUID;
    NSArray *_payloadCertificateAnchorUUID;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_priority;
    NSString *_domainName;
    NSString *_HESSID;
    NSArray *_roamingConsortiumOIs;
    NSArray *_NAIRealmNames;
    NSArray *_MCCAndMNCs;
    NSString *_displayedOperatorName;
}

@property(retain) NSString * ssid;
@property bool isHidden;
@property(retain) NSString * encryptionType;
@property bool isWEP;
@property bool isWPA;
@property(retain) NSDictionary * eapClientConfig;
@property bool passwordRequired;
@property(retain) NSString * password;
@property bool usernameRequired;
@property(retain) NSString * username;
@property bool autoJoin;
@property(retain) NSString * certificateUUID;
@property(retain) NSArray * payloadCertificateAnchorUUID;
@property int proxyType;
@property(retain) NSString * proxyServer;
@property(retain) NSNumber * proxyServerPort;
@property(retain) NSString * proxyUsername;
@property(retain) NSString * proxyPassword;
@property(retain) NSString * proxyPACURLString;
@property bool proxyPACFallbackAllowed;
@property(retain) NSString * credentialUUID;
@property bool isHotspot;
@property(retain) NSNumber * priority;
@property(retain) NSString * domainName;
@property(retain) NSString * HESSID;
@property(getter=isServiceProviderRoamingEnabled) bool serviceProviderRoamingEnabled;
@property(retain) NSArray * roamingConsortiumOIs;
@property(retain) NSArray * NAIRealmNames;
@property(retain) NSArray * MCCAndMNCs;
@property(retain) NSString * displayedOperatorName;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setProxyPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (bool)passwordRequired;
- (void)setDomainName:(id)arg1;
- (void)setDisplayedOperatorName:(id)arg1;
- (void)setServiceProviderRoamingEnabled:(bool)arg1;
- (void)setHESSID:(id)arg1;
- (void)setIsHotspot:(bool)arg1;
- (void)setCredentialUUID:(id)arg1;
- (id)credentialUUID;
- (void)setProxyPACFallbackAllowed:(bool)arg1;
- (void)setProxyPACURLString:(id)arg1;
- (void)setProxyUsername:(id)arg1;
- (void)setProxyServerPort:(id)arg1;
- (void)setPayloadCertificateAnchorUUID:(id)arg1;
- (id)payloadCertificateAnchorUUID;
- (void)setCertificateUUID:(id)arg1;
- (id)certificateUUID;
- (void)setAutoJoin:(bool)arg1;
- (bool)autoJoin;
- (void)setUsernameRequired:(bool)arg1;
- (bool)usernameRequired;
- (void)setIsWPA:(bool)arg1;
- (bool)isWPA;
- (void)setIsWEP:(bool)arg1;
- (bool)isWEP;
- (void)setEncryptionType:(id)arg1;
- (void)setSsid:(id)arg1;
- (bool)proxyPACFallbackAllowed;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyUsername;
- (id)proxyServerPort;
- (id)eapClientConfig;
- (id)_localizedEncryptionTypeString;
- (id)encryptionType;
- (id)displayedOperatorName;
- (bool)isServiceProviderRoamingEnabled;
- (id)HESSID;
- (void)setMCCAndMNCs:(id)arg1;
- (id)MCCAndMNCs;
- (void)setNAIRealmNames:(id)arg1;
- (id)NAIRealmNames;
- (void)setRoamingConsortiumOIs:(id)arg1;
- (id)roamingConsortiumOIs;
- (id)domainName;
- (bool)isHotspot;
- (id)ssid;
- (void)setProxyType:(int)arg1;
- (void)setEapClientConfig:(id)arg1;
- (bool)_isEAPSIMConfig:(id)arg1;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (bool)_eapConfigIsValid:(id)arg1 error:(id*)arg2;
- (void)setProxyServer:(id)arg1;
- (id)proxyServer;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (bool)isHidden;
- (id)password;
- (void)setPriority:(id)arg1;
- (id)priority;
- (int)proxyType;
- (void).cxx_destruct;
- (id)description;
- (void)setIsHidden:(bool)arg1;

@end
