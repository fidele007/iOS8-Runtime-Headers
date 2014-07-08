/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSNumber, MCBook;

@interface MCBook : NSObject <NSCopying> {
    NSString *_author;
    NSString *_title;
    NSString *_kind;
    NSString *_fullPath;
    NSString *_version;
    NSString *_persistentID;
    NSNumber *_iTunesStoreID;
    NSString *_buyParams;
    NSString *_state;
    NSNumber *_downloadIdentifier;
    MCBook *_previousVersion;
}

@property(copy) NSString * author;
@property(copy) NSString * title;
@property(copy) NSString * kind;
@property(copy) NSString * fullPath;
@property(copy) NSString * version;
@property(copy) NSString * persistentID;
@property(retain) NSNumber * iTunesStoreID;
@property(copy) NSString * buyParams;
@property(retain) NSString * state;
@property(retain) NSNumber * downloadIdentifier;
@property(retain) MCBook * previousVersion;


- (void)setPreviousVersion:(id)arg1;
- (id)previousVersion;
- (void)updateBookAttributesByCopyingFromBook:(id)arg1;
- (id)manifestDictionary;
- (void)setDownloadIdentifier:(id)arg1;
- (id)downloadIdentifier;
- (void)setBuyParams:(id)arg1;
- (id)buyParams;
- (void)setITunesStoreID:(id)arg1;
- (id)iTunesStoreID;
- (void)setPersistentID:(id)arg1;
- (id)persistentID;
- (void)setFullPath:(id)arg1;
- (id)fullPath;
- (void)setAuthor:(id)arg1;
- (id)author;
- (id)initWithManifestDictionary:(id)arg1;
- (id)friendlyName;
- (id)kind;
- (void)setKind:(id)arg1;
- (id)version;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)init;
- (void)setState:(id)arg1;
- (id)state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(id)arg1;

@end
