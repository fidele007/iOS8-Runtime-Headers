/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSDate, AVAssetResourceLoadingContentInformationRequestInternal;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject  {
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}

@property(copy) NSString * contentType;
@property long long contentLength;
@property(getter=isByteRangeAccessSupported) bool byteRangeAccessSupported;
@property(copy) NSDate * renewalDate;


- (void)setDiskCachingPermitted:(bool)arg1;
- (void)setRenewalDate:(id)arg1;
- (bool)isDiskCachingPermitted;
- (bool)isByteRangeAccessSupported;
- (id)renewalDate;
- (long long)contentLength;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setByteRangeAccessSupported:(bool)arg1;
- (void)setContentLength:(long long)arg1;
- (id)init;
- (id)propertyList;
- (void)finalize;
- (void)dealloc;
- (id)description;

@end
