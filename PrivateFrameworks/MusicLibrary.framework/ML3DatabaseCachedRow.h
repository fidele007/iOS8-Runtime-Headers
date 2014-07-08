/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow  {
    NSArray *_arrayRepresentation;
}


- (id)arrayRepresentation;
- (id)_numberOrZeroForColumnIndex:(unsigned long long)arg1;
- (void)getBlobBytes:(const void**)arg1 outLength:(int*)arg2 forColumnName:(id)arg3;
- (id)numberForColumnName:(id)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnName:(id)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)valueForColumnName:(id)arg1;
- (id)initWithParentResult:(id)arg1;
- (void)getBlobBytes:(const void**)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3;
- (double)doubleForColumnIndex:(unsigned long long)arg1;
- (id)numberForColumnIndex:(unsigned long long)arg1;
- (int)intForColumnIndex:(unsigned long long)arg1;
- (id)stringForColumnName:(id)arg1;
- (id)stringForColumnIndex:(unsigned long long)arg1;
- (long long)int64ForColumnIndex:(unsigned long long)arg1;
- (id)valueForColumnIndex:(unsigned long long)arg1;
- (id)dataForColumnIndex:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)columnCount;

@end
