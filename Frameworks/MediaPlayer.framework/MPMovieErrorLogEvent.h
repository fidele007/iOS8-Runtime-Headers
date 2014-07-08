/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, AVPlayerItemErrorLogEvent, NSDate;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEvent *_event;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) long long errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (id)_initWithAVItemErrorLogEvent:(id)arg1;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (id)URI;
- (id)date;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
