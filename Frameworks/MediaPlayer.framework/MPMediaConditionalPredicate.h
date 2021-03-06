/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPMediaPredicate;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_thenPredicate;
    MPMediaPredicate *_elsePredicate;
}

@property(copy,readonly) MPMediaPredicate * conditionPredicate;
@property(copy,readonly) MPMediaPredicate * thenPredicate;
@property(copy,readonly) MPMediaPredicate * elsePredicate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (id)elsePredicate;
- (id)thenPredicate;
- (id)conditionPredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (void).cxx_destruct;

@end
