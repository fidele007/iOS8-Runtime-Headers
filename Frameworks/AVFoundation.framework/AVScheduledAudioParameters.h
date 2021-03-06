/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVScheduledAudioParametersInternal;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {
    AVScheduledAudioParametersInternal *_scheduledParametersInternal;
}

@property(getter=_ramps,setter=_setRamps:,copy) NSArray * ramps;


- (id)_ramps;
- (void)_setRamps:(id)arg1;
- (bool)getVolumeRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)_volumeCurveAsString;
- (id)_audioVolumeCurve;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
