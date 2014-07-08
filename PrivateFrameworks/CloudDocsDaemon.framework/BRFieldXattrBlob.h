/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying> {
    NSMutableArray *_xattrs;
}

@property(retain) NSMutableArray * xattrs;

+ (bool)removeXattrsOnFD:(int)arg1 includingContentRelated:(bool)arg2 error:(id*)arg3;
+ (bool)loadXattrsFromFD:(int)arg1 structuralBlob:(id*)arg2 contentBlob:(id*)arg3 withMaximumSize:(unsigned long long)arg4 error:(id*)arg5;

- (id)xattrs;
- (id)xattrsAtIndex:(unsigned long long)arg1;
- (void)clearXattrs;
- (unsigned long long)xattrsCount;
- (void)addXattrs:(id)arg1;
- (void)setXattrs:(id)arg1;
- (bool)applyToFileDescriptor:(int)arg1 error:(id*)arg2;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
