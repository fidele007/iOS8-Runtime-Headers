/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, NSMutableArray;

@interface GEOQuickETAResponse : NSObject  {
    GEOLocation *_sourceLocation;
    GEOLocation *_destinationLocation;
    unsigned int _responseETASeconds;
    unsigned int _baselineETASeconds;
    double _distance;
    NSMutableArray *_sortedETAs;
}

@property(readonly) GEOLocation * sourceLocation;
@property(readonly) GEOLocation * destinationLocation;
@property(readonly) unsigned int responseETASeconds;
@property(readonly) unsigned int baselineETASeconds;
@property(readonly) double distance;
@property(readonly) NSMutableArray * sortedETAs;


- (id)sourceLocation;
- (unsigned int)responseETASeconds;
- (unsigned int)baselineETASeconds;
- (id)destinationLocation;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;
- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;
- (id)sortedETAs;
- (double)distance;
- (void)dealloc;

@end
