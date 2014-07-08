/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectContext, NSSet, NSArray;

@interface PHDeleteConfirmationController : NSObject  {
    NSManagedObjectContext *_managedObjectContext;
    NSSet *_deleteRequests;
    NSArray *_assetsToDelete;
    NSArray *_albumsToDelete;
    NSArray *_foldersToDelete;
    bool_didPrepare;
}

@property(readonly) NSSet * deleteRequests;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) NSArray * assetsToDelete;
@property(readonly) NSArray * albumsToDelete;
@property(readonly) NSArray * foldersToDelete;


- (bool)validateDeleteWithError:(id*)arg1;
- (bool)performDeleteConfirmationForClient:(id)arg1 error:(id*)arg2;
- (id)initWithDeleteRequests:(id)arg1 context:(id)arg2;
- (id)foldersToDelete;
- (id)albumsToDelete;
- (id)assetsToDelete;
- (bool)_prepareForDeleteWithError:(id*)arg1;
- (id)deleteRequests;
- (id)managedObjectContext;
- (void).cxx_destruct;

@end
