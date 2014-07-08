/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString, NEConfiguration, NEConfigurationManager, NSArray, NEVPNConnection, NEVPNProtocol;

@interface NEVPNManager : NSObject  {
    bool_hasLoaded;
    NSString *_localizedDescription;
    NEVPNConnection *_connection;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

@property(copy) NSArray * onDemandRules;
@property(getter=isOnDemandEnabled) bool onDemandEnabled;
@property(copy) NSString * localizedDescription;
@property(retain) NEVPNProtocol * protocol;
@property(readonly) NEVPNConnection * connection;
@property(getter=isEnabled) bool enabled;
@property(copy) NEConfiguration * configuration;
@property bool hasLoaded;
@property(readonly) NEConfigurationManager * configurationManager;

+ (id)sharedManager;

- (void)setOnDemandRules:(id)arg1;
- (id)initVPNManager;
- (void)saveToPreferencesWithCompletionHandler:(id)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (id)configurationManager;
- (void)loadFromPreferencesWithCompletionHandler:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (id)onDemandRules;
- (bool)isOnDemandEnabled;
- (bool)hasLoaded;
- (id)protocol;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)connection;
- (id)init;
- (id)localizedDescription;
- (id)configuration;
- (void).cxx_destruct;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setConfiguration:(id)arg1;

@end
