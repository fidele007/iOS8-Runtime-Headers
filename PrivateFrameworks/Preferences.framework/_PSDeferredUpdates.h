/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject  {
    bool_invalidatedSpecifiers;
    NSMutableSet *_searchEntries;
    PSSpecifierUpdates *_specifierUpdates;
}

@property(retain) NSMutableSet * searchEntries;
@property(retain) PSSpecifierUpdates * specifierUpdates;
@property bool invalidatedSpecifiers;

+ (id)deferredInvalidationUpdatesWithEntries:(id)arg1;
+ (id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2;

- (void)setInvalidatedSpecifiers:(bool)arg1;
- (bool)invalidatedSpecifiers;
- (void)setSpecifierUpdates:(id)arg1;
- (id)specifierUpdates;
- (void)setSearchEntries:(id)arg1;
- (id)searchEntries;
- (id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(bool)arg3;
- (void)dealloc;

@end
