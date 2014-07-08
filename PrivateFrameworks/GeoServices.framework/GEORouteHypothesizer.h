/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEODirectionsRequestFeedback, GEOLocationShifter, NSDate, <GEORouteHypothesizerDelegate>, GEORouteHypothesis, GEOLocation, GEOComposedRoute, GEOETAUpdater, GEORoute, GEORouteHypothesizerUpdater, GEOComposedWaypoint, NSData, GEOETARoute, GEORouteAttributes;

@interface GEORouteHypothesizer : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate> {
    <GEORouteHypothesizerDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    GEODirectionsRequestFeedback *_feedback;
    GEOLocationShifter *_locationShifter;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    GEORouteHypothesis *_hypothesis;
    GEOLocation *_lastLocation;
    NSDate *_suggestedNextUpdateDate;
    NSDate *_lastETARequestDate;
    double _etaUpdateInterval;
    unsigned long long _etaUpdateFrequency;
    GEOETAUpdater *_etaUpdater;
    GEOETARoute *_etaRoute;
    GEORouteAttributes *_routeAttributes;
    GEORouteHypothesizerUpdater *_updater;
    GEORoute *_existingRoute;
    NSData *_usualRouteData;
}

@property <GEORouteHypothesizerDelegate> * delegate;
@property unsigned long long etaUpdateFrequency;
@property(retain) GEODirectionsRequestFeedback * feedback;
@property(readonly) bool supportsLiveTraffic;
@property(readonly) bool supportsDirections;
@property(readonly) GEOComposedWaypoint * source;
@property(readonly) GEOComposedWaypoint * destination;
@property(readonly) NSDate * departureDate;
@property(readonly) NSDate * arrivalDate;
@property(readonly) NSDate * suggestedNextUpdateDate;
@property(readonly) GEOComposedRoute * route;


- (void)updateLocation:(id)arg1 hypothesisHandler:(id)arg2;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4;
- (id)suggestedNextUpdateDate;
- (void)setEtaUpdateFrequency:(unsigned long long)arg1;
- (unsigned long long)etaUpdateFrequency;
- (id)arrivalDate;
- (id)departureDate;
- (id)initWithExistingRoute:(id)arg1 source:(id)arg2 destination:(id)arg3 etaUpdater:(id)arg4;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)_refreshETAWithRouteMatch:(id)arg1;
- (void)_updateLocationAndETAUpdateInterval;
- (void)_updateETAWithRouteMatch:(id)arg1;
- (void)_createUpdaterWithStartingLocation:(id)arg1;
- (void)_updateLocation:(id)arg1 hypothesisHandler:(id)arg2;
- (bool)supportsDirections;
- (bool)supportsLiveTraffic;
- (id)route;
- (id)feedback;
- (void)setFeedback:(id)arg1;
- (id)source;
- (id)destination;
- (void)_commonInit;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
