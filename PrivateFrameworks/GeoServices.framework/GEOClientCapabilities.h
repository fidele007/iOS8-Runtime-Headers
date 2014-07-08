/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    int _maxManeuverTypeSupported;
    bool_internalInstall;
    struct { 
        unsigned int maxManeuverTypeSupported : 1; 
        unsigned int internalInstall : 1; 
    } _has;
}

@property(readonly) bool hasAppMajorVersion;
@property(retain) NSString * appMajorVersion;
@property(readonly) bool hasAppMinorVersion;
@property(retain) NSString * appMinorVersion;
@property(readonly) bool hasHardwareModel;
@property(retain) NSString * hardwareModel;
@property bool hasMaxManeuverTypeSupported;
@property int maxManeuverTypeSupported;
@property bool hasInternalInstall;
@property bool internalInstall;


- (bool)internalInstall;
- (id)hardwareModel;
- (id)appMinorVersion;
- (id)appMajorVersion;
- (bool)hasInternalInstall;
- (void)setHasInternalInstall:(bool)arg1;
- (void)setInternalInstall:(bool)arg1;
- (bool)hasMaxManeuverTypeSupported;
- (void)setHasMaxManeuverTypeSupported:(bool)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (int)maxManeuverTypeSupported;
- (bool)hasHardwareModel;
- (bool)hasAppMinorVersion;
- (bool)hasAppMajorVersion;
- (void)setHardwareModel:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
