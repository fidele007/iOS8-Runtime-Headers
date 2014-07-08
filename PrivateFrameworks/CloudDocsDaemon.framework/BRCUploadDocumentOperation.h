/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCPackageManifestForUpload, BRCLocalItem;

@interface BRCUploadDocumentOperation : BRCOperation <BRCUploadOperation> {
    BRCLocalItem *_item;
    BRCPackageManifestForUpload *_manifest;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _uploadCompletionBlock;

}

@property(readonly) double budgetRequired;
@property(copy) id progressBlock;
@property(readonly) long long transferPriority;
@property(copy) id uploadCompletionBlock;


- (id)uploadAssetsOperationWithRecord:(id)arg1;
- (bool)_isItemTooLarge;
- (void)setUploadCompletionBlock:(id)arg1;
- (id)uploadCompletionBlock;
- (double)budgetRequired;
- (long long)transferPriority;
- (id)initWithLocalItem:(id)arg1;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (id)description;

@end
