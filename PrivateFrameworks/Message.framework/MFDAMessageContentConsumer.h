/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFMessageDataConsumerFactory>, NSMutableData, <MFCollectingDataConsumer>, DAMailMessage;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {
    int _requestedFormat;
    <MFCollectingDataConsumer> *_dataConsumer;
    <MFCollectingDataConsumer> *_alternatePartConsumer;
    <MFMessageDataConsumerFactory> *_consumerFactory;
    bool_triedCreatingAlternatePartConsumer;
    bool_didBeginStreaming;
    bool_succeeded;
    NSMutableData *_bodyData;
    double _timeOfLastActivity;
    DAMailMessage *_message;
}

@property int requestedFormat;
@property(retain) <MFCollectingDataConsumer> * dataConsumer;
@property(retain) <MFCollectingDataConsumer> * alternatePartConsumer;
@property(retain) <MFMessageDataConsumerFactory> * consumerFactory;
@property(retain,readonly) DAMailMessage * message;
@property(retain,readonly) NSMutableData * bodyData;
@property(readonly) double timeOfLastActivity;


- (int)requestedFormat;
- (id)alternatePartConsumer;
- (void)setAlternatePartConsumer:(id)arg1;
- (id)consumerFactory;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (id)dataConsumerForPart:(id)arg1;
- (void)setConsumerFactory:(id)arg1;
- (void)setRequestedFormat:(int)arg1;
- (double)timeOfLastActivity;
- (bool)didBeginStreaming;
- (id)dataConsumer;
- (void)setDataConsumer:(id)arg1;
- (bool)succeeded;
- (id)message;
- (id)bodyData;
- (id)data;
- (void)dealloc;

@end
