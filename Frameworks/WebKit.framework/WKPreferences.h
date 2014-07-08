/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPreferences : NSObject  {
    struct RefPtr<WebKit::WebPreferences> { 
        struct WebPreferences {} *m_ptr; 
    } _preferences;
}

@property(setter=_setTelephoneNumberDetectionIsEnabled:) bool _telephoneNumberDetectionIsEnabled;
@property(setter=_setStorageBlockingPolicy:) long long _storageBlockingPolicy;
@property(setter=_setOfflineApplicationCacheIsEnabled:) bool _offlineApplicationCacheIsEnabled;
@property double minimumFontSize;
@property(getter=isJavaScriptEnabled) bool javaScriptEnabled;
@property bool javaScriptCanOpenWindowsAutomatically;


- (void)_setOfflineApplicationCacheIsEnabled:(bool)arg1;
- (bool)_offlineApplicationCacheIsEnabled;
- (void)_setStorageBlockingPolicy:(long long)arg1;
- (long long)_storageBlockingPolicy;
- (void)_setTelephoneNumberDetectionIsEnabled:(bool)arg1;
- (bool)_telephoneNumberDetectionIsEnabled;
- (bool)javaScriptCanOpenWindowsAutomatically;
- (bool)isJavaScriptEnabled;
- (double)minimumFontSize;
- (void)setJavaScriptCanOpenWindowsAutomatically:(bool)arg1;
- (void)setJavaScriptEnabled:(bool)arg1;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setMinimumFontSize:(double)arg1;

@end
