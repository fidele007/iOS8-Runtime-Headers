/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFLock, <MFGuaranteedCollectingDataConsumer>, NSString;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {
    <MFGuaranteedCollectingDataConsumer> *_mainConsumer;
    MFLock *_consumerLock;
    bool_isDone;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithMainConsumer:(id)arg1;
- (void)addDataConsumer:(id)arg1;
- (void)done;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)dealloc;

@end
