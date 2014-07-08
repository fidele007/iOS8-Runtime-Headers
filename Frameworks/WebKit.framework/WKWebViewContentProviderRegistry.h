/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKWebViewContentProviderRegistry : NSObject  {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > > { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
            struct KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> > { 
        struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> > { 
            struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int> >, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *> > { 
                struct KeyValuePair<WebKit::WebPageProxy *, unsigned int> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } m_impl; 
    } _pages;
}


- (void)addPage:(struct WebPageProxy { int (**x1)(); id x2; int (**x3)(); int (**x4)(); int (**x5)(); struct PageClient {} *x6; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<API::FormClient, std::__1::default_delete<API::FormClient> > { struct __compressed_pair<API::FormClient *, std::__1::default_delete<API::FormClient> > { struct FormClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::UIClient, std::__1::default_delete<API::UIClient> > { struct __compressed_pair<API::UIClient *, std::__1::default_delete<API::UIClient> > { struct UIClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::FindClient, std::__1::default_delete<API::FindClient> > { struct __compressed_pair<API::FindClient *, std::__1::default_delete<API::FindClient> > { struct FindClient {} *x_1_2_1; } x_11_1_1; } x11; struct WebFindMatchesClient { struct WKPageFindMatchesClientV0 { struct WKPageFindMatchesClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); } x_12_1_1; } x12; struct unique_ptr<WebKit::DrawingAreaProxy, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct __compressed_pair<WebKit::DrawingAreaProxy *, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct DrawingAreaProxy {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<WebKit::RemoteScrollingCoordinatorProxy, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct __compressed_pair<WebKit::RemoteScrollingCoordinatorProxy *, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct RemoteScrollingCoordinatorProxy {} *x_1_2_1; } x_14_1_1; } x14; struct Ref<WebKit::WebProcessProxy> { struct WebProcessProxy {} *x_15_1_1; } x15; struct Ref<WebKit::WebPageGroup> { struct WebPageGroup {} *x_16_1_1; } x16; struct Ref<WebKit::WebPreferences> { struct WebPreferences {} *x_17_1_1; } x17; struct RefPtr<WebKit::WebUserContentControllerProxy> { struct WebUserContentControllerProxy {} *x_18_1_1; } x18; struct Ref<WebKit::VisitedLinkProvider> { struct VisitedLinkProvider {} *x_19_1_1; } x19; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_20_1_1; } x20; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_21_1_1; } x21; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_22_1_1; } x22; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_24_1_1; } x24; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_25_1_1; } x25; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_26_1_1; } x26; struct RefPtr<WebKit::WebInspectorProxy> { struct WebInspectorProxy {} *x_27_1_1; } x27; struct RefPtr<WebKit::WebVideoFullscreenManagerProxy> { struct WebVideoFullscreenManagerProxy {} *x_28_1_1; } x28; struct VisibleContentRectUpdateInfo { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_29_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_29_1_2; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_29_1_3; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_4_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_4_2_2; } x_29_1_4; double x_29_1_5; boolx_29_1_6; boolx_29_1_7; double x_29_1_8; double x_29_1_9; double x_29_1_10; double x_29_1_11; unsigned long long x_29_1_12; } x29; int x30; boolx31; struct CallbackMap { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_32_1_1; } x32; struct HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_33_1_1; } x33; struct HashSet<WebKit::WebEditCommandProxy *, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct HashTable<WebKit::WebEditCommandProxy *, WebKit::WebEditCommandProxy *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct WebEditCommandProxy {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_34_1_1; } x34; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_35_1_1; } x35; struct RefPtr<WebKit::WebPopupMenuProxy> { struct WebPopupMenuProxy {} *x_36_1_1; } x36; struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> { struct WebOpenPanelResultListenerProxy {} *x_37_1_1; } x37; struct GeolocationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_38_1_1; struct WebPageProxy {} *x_38_1_2; } x38; struct NotificationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_39_1_1; struct WebPageProxy {} *x_39_1_2; } x39; unsigned int x40; boolx41; struct unique_ptr<WebKit::ProcessThrottler::ForegroundActivityToken, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct __compressed_pair<WebKit::ProcessThrottler::ForegroundActivityToken *, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct ForegroundActivityToken {} *x_1_2_1; } x_42_1_1; } x42; struct Ref<WebKit::WebBackForwardList> { struct WebBackForwardList {} *x_43_1_1; } x43; boolx44; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_45_1_1; } x45; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_46_1_1; } x46; int x47; struct EditorState { boolx_48_1_1; boolx_48_1_2; boolx_48_1_3; boolx_48_1_4; boolx_48_1_5; boolx_48_1_6; boolx_48_1_7; boolx_48_1_8; boolx_48_1_9; int x_48_1_10; int x_48_1_11; int x_48_1_12; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_13_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_13_2_2; } x_48_1_13; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_14_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_14_2_2; } x_48_1_14; struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow> { struct SelectionRect {} *x_15_2_1; unsigned int x_15_2_2; unsigned int x_15_2_3; } x_48_1_15; unsigned long long x_48_1_16; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_17_2_1; } x_48_1_17; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_18_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_18_2_2; } x_48_1_18; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_19_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_19_2_2; } x_48_1_19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_20_2_1; } x_48_1_20; } x48; double x49; double x50; double x51; float x52; float x53; float x54; int x55; boolx56; boolx57; struct Color { unsigned int x_58_1_1; boolx_58_1_2; } x58; struct Color { unsigned int x_59_1_1; boolx_59_1_2; } x59; boolx60; struct IntSize { int x_61_1_1; int x_61_1_2; } x61; boolx62; int x63; boolx64; double x65; double x66; boolx67; boolx68; boolx69; boolx70; boolx71; boolx72; struct ResourceRequest {} *x73; boolx74; int x75; unsigned long long x76; boolx77; boolx78; int x79; unsigned long long x80; struct Deque<WebKit::NativeWebKeyboardEvent> { unsigned long long x_81_1_1; unsigned long long x_81_1_2; struct VectorBuffer<WebKit::NativeWebKeyboardEvent, 0> { struct NativeWebKeyboardEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_81_1_3; } x81; struct Deque<WebKit::NativeWebWheelEvent> { unsigned long long x_82_1_1; unsigned long long x_82_1_2; struct VectorBuffer<WebKit::NativeWebWheelEvent, 0> { struct NativeWebWheelEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_82_1_3; } x82; struct Deque<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > > > { unsigned long long x_83_1_1; unsigned long long x_83_1_2; struct VectorBuffer<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > >, 0> { struct unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_83_1_3; } x83; boolx84; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_85_1_1; } x85; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_86_1_1; } x86; boolx87; unsigned long long x88; struct Ref<API::Session> { struct Session {} *x_89_1_1; } x89; boolx90; boolx91; boolx92; boolx93; long long x94; boolx95; unsigned int x96; boolx97; struct PageLoadState { struct Vector<WebKit::PageLoadState::Observer *, 0, WTF::CrashOnOverflow> { struct Observer {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_98_1_1; struct WebPageProxy {} *x_98_1_2; struct Data { int x_3_2_1; boolx_3_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_3_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_3_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_3_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_3_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_3_2_7; boolx_3_2_8; boolx_3_2_9; double x_3_2_10; } x_98_1_3; struct Data { int x_4_2_1; boolx_4_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_4_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_4_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_4_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_4_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_4_2_7; boolx_4_2_8; boolx_4_2_9; double x_4_2_10; } x_98_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_98_1_5; boolx_98_1_6; unsigned int x_98_1_7; } x98; boolx99; boolx100; boolx101; boolx102; boolx103; boolx104; boolx105; boolx106; boolx107; boolx108; boolx109; boolx110; boolx111; boolx112; boolx113; boolx114; boolx115; unsigned int x116; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_117_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_117_1_2; } x117; unsigned long long x118; boolx119; boolx120; boolx121; struct IntSize { int x_122_1_1; int x_122_1_2; } x122; float x123; boolx124; boolx125; struct HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_126_1_1; } x126; struct unique_ptr<WebCore::RunLoopObserver, std::__1::default_delete<WebCore::RunLoopObserver> > { struct __compressed_pair<WebCore::RunLoopObserver *, std::__1::default_delete<WebCore::RunLoopObserver> > { struct RunLoopObserver {} *x_1_2_1; } x_127_1_1; } x127; int x128; unsigned long long x129; struct HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> >, WTF::StringHash, WTF::HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_130_1_1; } x130; unsigned int x131; int x132; }*)arg1;
- (Class)providerForMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)removePage:(struct WebPageProxy { int (**x1)(); id x2; int (**x3)(); int (**x4)(); int (**x5)(); struct PageClient {} *x6; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<API::FormClient, std::__1::default_delete<API::FormClient> > { struct __compressed_pair<API::FormClient *, std::__1::default_delete<API::FormClient> > { struct FormClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::UIClient, std::__1::default_delete<API::UIClient> > { struct __compressed_pair<API::UIClient *, std::__1::default_delete<API::UIClient> > { struct UIClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::FindClient, std::__1::default_delete<API::FindClient> > { struct __compressed_pair<API::FindClient *, std::__1::default_delete<API::FindClient> > { struct FindClient {} *x_1_2_1; } x_11_1_1; } x11; struct WebFindMatchesClient { struct WKPageFindMatchesClientV0 { struct WKPageFindMatchesClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); } x_12_1_1; } x12; struct unique_ptr<WebKit::DrawingAreaProxy, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct __compressed_pair<WebKit::DrawingAreaProxy *, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct DrawingAreaProxy {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<WebKit::RemoteScrollingCoordinatorProxy, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct __compressed_pair<WebKit::RemoteScrollingCoordinatorProxy *, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct RemoteScrollingCoordinatorProxy {} *x_1_2_1; } x_14_1_1; } x14; struct Ref<WebKit::WebProcessProxy> { struct WebProcessProxy {} *x_15_1_1; } x15; struct Ref<WebKit::WebPageGroup> { struct WebPageGroup {} *x_16_1_1; } x16; struct Ref<WebKit::WebPreferences> { struct WebPreferences {} *x_17_1_1; } x17; struct RefPtr<WebKit::WebUserContentControllerProxy> { struct WebUserContentControllerProxy {} *x_18_1_1; } x18; struct Ref<WebKit::VisitedLinkProvider> { struct VisitedLinkProvider {} *x_19_1_1; } x19; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_20_1_1; } x20; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_21_1_1; } x21; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_22_1_1; } x22; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_24_1_1; } x24; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_25_1_1; } x25; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_26_1_1; } x26; struct RefPtr<WebKit::WebInspectorProxy> { struct WebInspectorProxy {} *x_27_1_1; } x27; struct RefPtr<WebKit::WebVideoFullscreenManagerProxy> { struct WebVideoFullscreenManagerProxy {} *x_28_1_1; } x28; struct VisibleContentRectUpdateInfo { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_29_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_29_1_2; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_29_1_3; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_4_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_4_2_2; } x_29_1_4; double x_29_1_5; boolx_29_1_6; boolx_29_1_7; double x_29_1_8; double x_29_1_9; double x_29_1_10; double x_29_1_11; unsigned long long x_29_1_12; } x29; int x30; boolx31; struct CallbackMap { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_32_1_1; } x32; struct HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_33_1_1; } x33; struct HashSet<WebKit::WebEditCommandProxy *, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct HashTable<WebKit::WebEditCommandProxy *, WebKit::WebEditCommandProxy *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct WebEditCommandProxy {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_34_1_1; } x34; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_35_1_1; } x35; struct RefPtr<WebKit::WebPopupMenuProxy> { struct WebPopupMenuProxy {} *x_36_1_1; } x36; struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> { struct WebOpenPanelResultListenerProxy {} *x_37_1_1; } x37; struct GeolocationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_38_1_1; struct WebPageProxy {} *x_38_1_2; } x38; struct NotificationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_39_1_1; struct WebPageProxy {} *x_39_1_2; } x39; unsigned int x40; boolx41; struct unique_ptr<WebKit::ProcessThrottler::ForegroundActivityToken, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct __compressed_pair<WebKit::ProcessThrottler::ForegroundActivityToken *, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct ForegroundActivityToken {} *x_1_2_1; } x_42_1_1; } x42; struct Ref<WebKit::WebBackForwardList> { struct WebBackForwardList {} *x_43_1_1; } x43; boolx44; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_45_1_1; } x45; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_46_1_1; } x46; int x47; struct EditorState { boolx_48_1_1; boolx_48_1_2; boolx_48_1_3; boolx_48_1_4; boolx_48_1_5; boolx_48_1_6; boolx_48_1_7; boolx_48_1_8; boolx_48_1_9; int x_48_1_10; int x_48_1_11; int x_48_1_12; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_13_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_13_2_2; } x_48_1_13; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_14_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_14_2_2; } x_48_1_14; struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow> { struct SelectionRect {} *x_15_2_1; unsigned int x_15_2_2; unsigned int x_15_2_3; } x_48_1_15; unsigned long long x_48_1_16; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_17_2_1; } x_48_1_17; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_18_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_18_2_2; } x_48_1_18; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_19_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_19_2_2; } x_48_1_19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_20_2_1; } x_48_1_20; } x48; double x49; double x50; double x51; float x52; float x53; float x54; int x55; boolx56; boolx57; struct Color { unsigned int x_58_1_1; boolx_58_1_2; } x58; struct Color { unsigned int x_59_1_1; boolx_59_1_2; } x59; boolx60; struct IntSize { int x_61_1_1; int x_61_1_2; } x61; boolx62; int x63; boolx64; double x65; double x66; boolx67; boolx68; boolx69; boolx70; boolx71; boolx72; struct ResourceRequest {} *x73; boolx74; int x75; unsigned long long x76; boolx77; boolx78; int x79; unsigned long long x80; struct Deque<WebKit::NativeWebKeyboardEvent> { unsigned long long x_81_1_1; unsigned long long x_81_1_2; struct VectorBuffer<WebKit::NativeWebKeyboardEvent, 0> { struct NativeWebKeyboardEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_81_1_3; } x81; struct Deque<WebKit::NativeWebWheelEvent> { unsigned long long x_82_1_1; unsigned long long x_82_1_2; struct VectorBuffer<WebKit::NativeWebWheelEvent, 0> { struct NativeWebWheelEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_82_1_3; } x82; struct Deque<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > > > { unsigned long long x_83_1_1; unsigned long long x_83_1_2; struct VectorBuffer<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > >, 0> { struct unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_83_1_3; } x83; boolx84; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_85_1_1; } x85; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_86_1_1; } x86; boolx87; unsigned long long x88; struct Ref<API::Session> { struct Session {} *x_89_1_1; } x89; boolx90; boolx91; boolx92; boolx93; long long x94; boolx95; unsigned int x96; boolx97; struct PageLoadState { struct Vector<WebKit::PageLoadState::Observer *, 0, WTF::CrashOnOverflow> { struct Observer {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_98_1_1; struct WebPageProxy {} *x_98_1_2; struct Data { int x_3_2_1; boolx_3_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_3_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_3_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_3_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_3_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_3_2_7; boolx_3_2_8; boolx_3_2_9; double x_3_2_10; } x_98_1_3; struct Data { int x_4_2_1; boolx_4_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_4_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_4_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_4_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_4_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_4_2_7; boolx_4_2_8; boolx_4_2_9; double x_4_2_10; } x_98_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_98_1_5; boolx_98_1_6; unsigned int x_98_1_7; } x98; boolx99; boolx100; boolx101; boolx102; boolx103; boolx104; boolx105; boolx106; boolx107; boolx108; boolx109; boolx110; boolx111; boolx112; boolx113; boolx114; boolx115; unsigned int x116; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_117_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_117_1_2; } x117; unsigned long long x118; boolx119; boolx120; boolx121; struct IntSize { int x_122_1_1; int x_122_1_2; } x122; float x123; boolx124; boolx125; struct HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_126_1_1; } x126; struct unique_ptr<WebCore::RunLoopObserver, std::__1::default_delete<WebCore::RunLoopObserver> > { struct __compressed_pair<WebCore::RunLoopObserver *, std::__1::default_delete<WebCore::RunLoopObserver> > { struct RunLoopObserver {} *x_1_2_1; } x_127_1_1; } x127; int x128; unsigned long long x129; struct HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> >, WTF::StringHash, WTF::HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_130_1_1; } x130; unsigned int x131; int x132; }*)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
