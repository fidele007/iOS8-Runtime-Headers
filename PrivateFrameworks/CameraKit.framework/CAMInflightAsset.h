/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString, NSDate;

@interface CAMInflightAsset : NSObject  {
    bool_isVideo;
    bool__didPersistAvalanche;
    bool__hasPendingAvalanchePersistenceUpdate;
    short _visibilityState;
    int _avalanchePickType;
    NSString *_uuid;
    NSString *_directory;
    NSString *_filename;
    NSDate *_dateCreated;
    long long _deviceOrientationDuringCapture;
    long long _captureDeviceDuringCapture;
    NSString *_avalancheUUID;
}

@property(retain) NSString * uuid;
@property(retain) NSString * directory;
@property(retain) NSString * filename;
@property(retain) NSDate * dateCreated;
@property long long deviceOrientationDuringCapture;
@property long long captureDeviceDuringCapture;
@property bool isVideo;
@property(retain) NSString * avalancheUUID;
@property int avalanchePickType;
@property short visibilityState;
@property(readonly) bool _didPersistAvalanche;
@property(readonly) bool _hasPendingAvalanchePersistenceUpdate;


- (bool)_hasPendingAvalanchePersistenceUpdate;
- (bool)_didPersistAvalanche;
- (void)setCaptureDeviceDuringCapture:(long long)arg1;
- (long long)captureDeviceDuringCapture;
- (void)setDeviceOrientationDuringCapture:(long long)arg1;
- (long long)deviceOrientationDuringCapture;
- (id)pathForImageFile;
- (void)_persistAvalancheToFilesystem;
- (void)_avalanchePersistenceStateDidChange;
- (void)setIsVideo:(bool)arg1;
- (void)setDirectory:(id)arg1;
- (id)directory;
- (int)avalanchePickType;
- (void)setAvalanchePickType:(int)arg1;
- (void)setAvalancheUUID:(id)arg1;
- (void)setVisibilityState:(short)arg1;
- (id)pathForVideoFile;
- (id)mainFileURL;
- (void)setDateCreated:(id)arg1;
- (id)avalancheUUID;
- (id)dateCreated;
- (id)pathForOriginalFile;
- (id)uuid;
- (short)visibilityState;
- (void)setUuid:(id)arg1;
- (bool)isVideo;
- (id)init;
- (void).cxx_destruct;
- (void)setFilename:(id)arg1;
- (id)filename;

@end
