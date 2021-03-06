/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader  {
    OCPZipPackage *mZipPackage;
}

@property(retain) OCPZipPackage * zipPackage;


- (void)restartReaderToUseDecryptedDocument;
- (bool)verifyFileFormat;
- (void)setZipPackage:(id)arg1;
- (id)zipPackage;
- (bool)isBinaryReader;
- (bool)retainDecryptorWithErrorCode:(int*)arg1;
- (id)read;
- (bool)start;
- (void)dealloc;

@end
