/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSOrderedSet, NSString;

@interface PHManualFetchResult : PHFetchResult  {
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

@property(readonly) NSArray * objects;
@property(readonly) NSOrderedSet * objectIDs;
@property(readonly) NSString * identifier;


- (id)fetchUpdatedObjects;
- (void)getMediaTypeCounts;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(bool)arg3;
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
- (id)initWithObjects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;

@end
