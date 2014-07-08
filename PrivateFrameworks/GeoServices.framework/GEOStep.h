/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOTimeCheckpoints, NSMutableArray, GEONameInfo;

@interface GEOStep : PBCodable <NSCopying> {
    struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; } *_laneGuidances;
    unsigned long long _laneGuidancesCount;
    unsigned long long _laneGuidancesSpace;
    struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    unsigned int _distance;
    GEONameInfo *_exitNumber;
    unsigned int _expectedTime;
    int _hintFirstAnnouncementZilchIndex;
    NSString *_instructions;
    int _junctionType;
    int _maneuverEndBasicIndex;
    int _maneuverEndZilchIndex;
    NSMutableArray *_maneuverNames;
    int _maneuverStartZilchIndex;
    int _maneuverType;
    NSString *_notice;
    int _overrideDrivingSide;
    int _overrideTransportType;
    NSMutableArray *_signposts;
    unsigned int _stepID;
    NSMutableArray *_substeps;
    GEOTimeCheckpoints *_timeCheckpoints;
    bool_endsOnFwy;
    bool_toFreeway;
    bool_tollAhead;
    bool_tollPrior;
    struct { 
        unsigned int distance : 1; 
        unsigned int expectedTime : 1; 
        unsigned int hintFirstAnnouncementZilchIndex : 1; 
        unsigned int junctionType : 1; 
        unsigned int maneuverEndBasicIndex : 1; 
        unsigned int maneuverEndZilchIndex : 1; 
        unsigned int maneuverStartZilchIndex : 1; 
        unsigned int maneuverType : 1; 
        unsigned int overrideDrivingSide : 1; 
        unsigned int overrideTransportType : 1; 
        unsigned int stepID : 1; 
        unsigned int endsOnFwy : 1; 
        unsigned int toFreeway : 1; 
        unsigned int tollAhead : 1; 
        unsigned int tollPrior : 1; 
    } _has;
}

@property(readonly) unsigned int maneuverEndIndex;
@property(readonly) unsigned int maneuverStartIndex;
@property(readonly) bool hasHintFirstAnnouncementIndex;
@property(readonly) int hintFirstAnnouncementIndex;
@property bool hasStepID;
@property unsigned int stepID;
@property bool hasManeuverEndBasicIndex;
@property int maneuverEndBasicIndex;
@property bool hasManeuverStartZilchIndex;
@property int maneuverStartZilchIndex;
@property bool hasManeuverEndZilchIndex;
@property int maneuverEndZilchIndex;
@property bool hasDistance;
@property unsigned int distance;
@property bool hasExpectedTime;
@property unsigned int expectedTime;
@property bool hasManeuverType;
@property int maneuverType;
@property(retain) NSMutableArray * maneuverNames;
@property(readonly) unsigned long long laneGuidancesCount;
@property(readonly) struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; }* laneGuidances;
@property bool hasJunctionType;
@property int junctionType;
@property(readonly) unsigned long long junctionElementsCount;
@property(readonly) struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* junctionElements;
@property(retain) NSMutableArray * signposts;
@property bool hasHintFirstAnnouncementZilchIndex;
@property int hintFirstAnnouncementZilchIndex;
@property bool hasOverrideTransportType;
@property int overrideTransportType;
@property bool hasOverrideDrivingSide;
@property int overrideDrivingSide;
@property(readonly) bool hasExitNumber;
@property(retain) GEONameInfo * exitNumber;
@property bool hasTollPrior;
@property bool tollPrior;
@property bool hasTollAhead;
@property bool tollAhead;
@property bool hasEndsOnFwy;
@property bool endsOnFwy;
@property(retain) NSMutableArray * substeps;
@property bool hasToFreeway;
@property bool toFreeway;
@property(readonly) bool hasInstructions;
@property(retain) NSString * instructions;
@property(readonly) bool hasNotice;
@property(retain) NSString * notice;
@property(readonly) bool hasTimeCheckpoints;
@property(retain) GEOTimeCheckpoints * timeCheckpoints;


- (int)junctionType;
- (bool)hasJunctionType;
- (struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (id)exitNumber;
- (void)setToFreeway:(bool)arg1;
- (bool)toFreeway;
- (void)setManeuverType:(int)arg1;
- (id)notice;
- (bool)hasInstructions;
- (id)maneuverDescription;
- (bool)maneuverIsHighwayExit;
- (void)shieldInfo:(id)arg1;
- (id)intersectionNameInfo;
- (int)hintFirstAnnouncementIndex;
- (bool)hasHintFirstAnnouncementIndex;
- (id)firstNameInfo;
- (unsigned int)maneuverStartIndex;
- (unsigned int)maneuverEndIndex;
- (id)timeCheckpoints;
- (id)substeps;
- (int)overrideTransportType;
- (id)signposts;
- (id)maneuverNames;
- (int)maneuverType;
- (bool)hasTimeCheckpoints;
- (bool)hasNotice;
- (bool)hasToFreeway;
- (void)setHasToFreeway:(bool)arg1;
- (bool)hasEndsOnFwy;
- (void)setHasEndsOnFwy:(bool)arg1;
- (void)setEndsOnFwy:(bool)arg1;
- (bool)endsOnFwy;
- (bool)hasTollAhead;
- (void)setHasTollAhead:(bool)arg1;
- (void)setTollAhead:(bool)arg1;
- (bool)tollAhead;
- (bool)hasTollPrior;
- (void)setHasTollPrior:(bool)arg1;
- (void)setTollPrior:(bool)arg1;
- (bool)tollPrior;
- (bool)hasExitNumber;
- (void)setHasOverrideDrivingSide:(bool)arg1;
- (void)setOverrideDrivingSide:(int)arg1;
- (bool)hasOverrideTransportType;
- (void)setHasOverrideTransportType:(bool)arg1;
- (void)setOverrideTransportType:(int)arg1;
- (bool)hasHintFirstAnnouncementZilchIndex;
- (void)setHasHintFirstAnnouncementZilchIndex:(bool)arg1;
- (void)setHintFirstAnnouncementZilchIndex:(int)arg1;
- (int)hintFirstAnnouncementZilchIndex;
- (void)setJunctionElements:(struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setHasJunctionType:(bool)arg1;
- (void)setJunctionType:(int)arg1;
- (void)setLaneGuidances:(struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; }*)arg1 count:(unsigned long long)arg2;
- (struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; }*)laneGuidances;
- (bool)hasManeuverType;
- (void)setHasManeuverType:(bool)arg1;
- (bool)hasManeuverEndZilchIndex;
- (void)setHasManeuverEndZilchIndex:(bool)arg1;
- (void)setManeuverEndZilchIndex:(int)arg1;
- (int)maneuverEndZilchIndex;
- (bool)hasManeuverStartZilchIndex;
- (void)setHasManeuverStartZilchIndex:(bool)arg1;
- (void)setManeuverStartZilchIndex:(int)arg1;
- (int)maneuverStartZilchIndex;
- (bool)hasManeuverEndBasicIndex;
- (void)setHasManeuverEndBasicIndex:(bool)arg1;
- (void)setManeuverEndBasicIndex:(int)arg1;
- (int)maneuverEndBasicIndex;
- (bool)hasStepID;
- (void)setHasStepID:(bool)arg1;
- (void)setStepID:(unsigned int)arg1;
- (id)substepsAtIndex:(unsigned long long)arg1;
- (void)clearSubsteps;
- (unsigned long long)substepsCount;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (void)clearSignposts;
- (unsigned long long)signpostsCount;
- (void)addJunctionElement:(struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })junctionElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)junctionElementsCount;
- (void)addLaneGuidance:(struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; })arg1;
- (struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; })laneGuidanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneGuidancesCount;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (void)clearManeuverNames;
- (unsigned long long)maneuverNamesCount;
- (void)addSubsteps:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)addManeuverName:(id)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setSubsteps:(id)arg1;
- (void)setExitNumber:(id)arg1;
- (void)setSignposts:(id)arg1;
- (void)clearJunctionElements;
- (void)clearLaneGuidances;
- (void)setManeuverNames:(id)arg1;
- (bool)hasExpectedTime;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (bool)hasDistance;
- (void)setHasDistance:(bool)arg1;
- (int)overrideDrivingSide;
- (bool)hasOverrideDrivingSide;
- (unsigned int)stepID;
- (unsigned int)expectedTime;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setInstructions:(id)arg1;
- (id)instructions;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
