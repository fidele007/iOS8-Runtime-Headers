/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CPLResource;

@interface PLCloudDownloadOperation : PLCloudOperation  {
    bool_cancelled;
    CPLResource *_resource;
}

@property(copy) CPLResource * resource;


- (void)setResource:(id)arg1;
- (bool)resourceLocallyAvailable;
- (void)runOperationWithCompletionHandler:(id)arg1;
- (unsigned long long)cost;
- (void)requestCancel;
- (void)markAsLocallyAvailable:(bool)arg1;
- (id)resource;
- (void)dealloc;

@end
