/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDate, NSString, UIImage, NSURL, NSSet, NSArray, NSDictionary, PKBarcode, PKPassDisplayProfile, PKImage;

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {
    bool_voided;
    bool_revoked;
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    NSString *_organizationName;
    NSDate *_relevantDate;
    NSDictionary *_userInfo;
    NSURL *_passURL;
    NSString *_teamID;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSSet *_embeddedLocations;
    NSSet *_embeddedBeacons;
    NSURL *_webLocationsURL;
    NSURL *_localLocationsURL;
    long long _sharingMethod;
    NSURL *_sharingURL;
    NSString *_sharingText;
    NSString *_iAdReportingIdentifier;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
}

@property(copy) NSString * serialNumber;
@property(copy) NSString * passTypeIdentifier;
@property(copy) NSURL * webServiceURL;
@property(copy) NSString * authenticationToken;
@property(copy,readonly) UIImage * icon;
@property(copy,readonly) NSString * localizedName;
@property(copy,readonly) NSString * localizedDescription;
@property(copy) NSString * organizationName;
@property(copy) NSDate * relevantDate;
@property(copy) NSDictionary * userInfo;
@property(copy) NSURL * passURL;
@property(copy) NSString * teamID;
@property(copy) NSDate * expirationDate;
@property(getter=isVoided) bool voided;
@property(copy) NSString * groupingID;
@property(copy) NSSet * embeddedLocations;
@property(copy) NSSet * embeddedBeacons;
@property(copy) NSURL * webLocationsURL;
@property(copy) NSURL * localLocationsURL;
@property(copy) PKPassDisplayProfile * displayProfile;
@property(readonly) long long style;
@property(readonly) NSString * pluralLocalizedName;
@property(readonly) NSString * lowercaseLocalizedName;
@property(readonly) NSString * uniqueID;
@property long long sharingMethod;
@property(copy) NSURL * sharingURL;
@property(copy) NSString * sharingText;
@property(setter=setiAdReportingIdentifier:,copy) NSString * iAdReportingIdentifier;
@property(readonly) PKBarcode * barcode;
@property(readonly) PKImage * footerImage;
@property(readonly) NSString * logoText;
@property(readonly) long long transitType;
@property(readonly) NSArray * frontFieldBuckets;
@property(readonly) NSArray * backFieldBuckets;
@property(readonly) PKImage * iconImage;
@property(readonly) PKImage * frontFaceImage;
@property(readonly) PKImage * partialFrontFaceImage;
@property(readonly) PKImage * partialFrontFaceImagePlaceholder;
@property(readonly) PKImage * backFaceImage;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } logoRect;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailRect;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stripRect;
@property(readonly) NSArray * storeIdentifiers;
@property(readonly) NSURL * appLaunchURL;
@property(retain) NSDate * ingestedDate;
@property(retain) NSDate * modifiedDate;
@property(getter=isRevoked) bool revoked;

+ (bool)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id)partialFrontFaceImagePlaceholder;
- (void)setLocalLocationsURL:(id)arg1;
- (void)setWebLocationsURL:(id)arg1;
- (id)webLocationsURL;
- (void)setPassURL:(id)arg1;
- (bool)isEqualToPassIncludingMetadata:(id)arg1;
- (id)diff:(id)arg1;
- (id)localLocationsURL;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)passURL;
- (id)lowercaseLocalizedName;
- (id)iAdReportingIdentifier;
- (id)sharingText;
- (id)groupingID;
- (bool)isVoided;
- (void)setRevoked:(bool)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setIngestedDate:(id)arg1;
- (id)modifiedDate;
- (id)ingestedDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logoRect;
- (id)stripImage;
- (id)logoImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stripRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailRect;
- (id)appLaunchURL;
- (long long)transitType;
- (id)logoText;
- (id)footerImage;
- (id)barcode;
- (id)_localizationKeyForMultipleDiff;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)backFieldBuckets;
- (id)frontFieldBuckets;
- (id)embeddedBeacons;
- (id)embeddedLocations;
- (id)relevantDate;
- (void)setGroupingID:(id)arg1;
- (id)_groupingIDFromPassDictionary:(id)arg1;
- (void)setiAdReportingIdentifier:(id)arg1;
- (void)setSharingText:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (long long)sharingMethod;
- (void)setSharingMethod:(long long)arg1;
- (void)setEmbeddedBeacons:(id)arg1;
- (void)setEmbeddedLocations:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setVoided:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (void)downloadRemoteAssetsWithCompletion:(id)arg1;
- (id)storeIdentifiers;
- (id)passTypeIdentifier;
- (id)pluralLocalizedName;
- (bool)isUpdatable;
- (bool)hasTimeOrLocationRelevancyInfo;
- (id)backFaceImage;
- (id)frontFaceImage;
- (id)partialFrontFaceImage;
- (bool)supportsSharing;
- (id)sharingURL;
- (id)organizationName;
- (id)serialNumber;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)isExpired;
- (void)setUserInfo:(id)arg1;
- (id)teamID;
- (id)localizedName;
- (long long)style;
- (id)userInfo;
- (id)localizedDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isRevoked;
- (id)iconImage;
- (id)backgroundImage;
- (id)mailAttachmentIcon;
- (id)icon;

@end
