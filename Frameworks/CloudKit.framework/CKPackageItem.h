/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, NSURL, NSData, NSNumber;

@interface CKPackageItem : NSObject  {
    int _sectionIndex;
    long long _packageIndex;
    NSURL *_fileURL;
    unsigned long long _itemID;
    NSData *_signature;
    long long _size;
    long long _offset;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSData *_wrappedAssetKey;
    NSString *_referenceIdentifier;
}

@property long long packageIndex;
@property(retain) NSURL * fileURL;
@property unsigned long long itemID;
@property(retain) NSData * signature;
@property long long size;
@property long long offset;
@property int sectionIndex;
@property(retain) NSNumber * deviceID;
@property(retain) NSNumber * fileID;
@property(retain) NSNumber * generationID;
@property(retain) NSData * wrappedAssetKey;
@property(retain) NSString * referenceIdentifier;


- (id)referenceIdentifier;
- (void)setReferenceIdentifier:(id)arg1;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (void)setGenerationID:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setSectionIndex:(int)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setPackageIndex:(long long)arg1;
- (long long)packageIndex;
- (id)generationID;
- (int)sectionIndex;
- (void)setWrappedAssetKey:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)wrappedAssetKey;
- (id)fileID;
- (id)CKPropertiesDescription;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (unsigned long long)itemID;
- (void)setOffset:(long long)arg1;
- (long long)offset;
- (void)setSize:(long long)arg1;
- (void)setFileURL:(id)arg1;
- (id)fileURL;
- (void).cxx_destruct;
- (id)description;
- (long long)size;
- (id)signature;
- (id)initWithFileURL:(id)arg1;

@end
