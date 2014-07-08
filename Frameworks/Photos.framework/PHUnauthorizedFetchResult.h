/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchBlock;

    PHFetchOptions *_options;
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

@property(readonly) id fetchBlock;
@property(copy,readonly) PHFetchOptions * options;
@property(readonly) NSArray * objects;
@property(readonly) NSOrderedSet * objectIDs;
@property(readonly) NSString * identifier;


- (id)fetchBlock;
- (void)getMediaTypeCounts;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)initWithOptions:(id)arg1 fetchBlock:(id)arg2;
- (bool)interestedInChange:(id)arg1;
- (id)changeHandlingValue;
- (id)changeHandlingKey;
- (long long)collectionFetchType;
- (id)objectIDs;
- (id)fetchedObjectIDs;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)photoLibrary;
- (id)containerIdentifier;
- (id)objects;
- (id)fetchedObjects;
- (id)fetchRequest;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)options;
- (void).cxx_destruct;
- (id)description;

@end
