/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData, <MFGuaranteedCollectingDataConsumer>, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    <MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    NSData *_strippedData;
    unsigned long long _length;
    unsigned int _seenNetworkLineEndings : 1;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)copyDataWithUnixLineEndings;
- (void)done;
- (id)init;
- (unsigned long long)length;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (void)purge;

@end
