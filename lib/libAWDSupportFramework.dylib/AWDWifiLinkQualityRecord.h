/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiLinkQualityRecord : PBCodable <NSCopying> {
    double _gateOpenTime;
    double _trafficWatchDuration;
    double _trafficWatchTime;
    unsigned int _arpFailureCount;
    unsigned int _bcnPerSign;
    unsigned int _bcnRcvs;
    unsigned int _bcnSched;
    unsigned int _dnsServersImpacted;
    unsigned int _dnsServersTotal;
    unsigned int _fwTxFail;
    unsigned int _fwTxFrames;
    unsigned int _fwTxPerSign;
    unsigned int _fwTxRetrans;
    unsigned int _gwArpExpiry;
    unsigned int _netScore;
    int _rssi;
    unsigned int _rxFrames;
    unsigned int _sympAwdCode;
    unsigned int _sympSign;
    unsigned int _trafficWatchRx;
    unsigned int _trgDisc;
    unsigned int _txFail;
    unsigned int _txFrames;
    unsigned int _txPerSign;
    unsigned int _txRetrans;
    unsigned int _usrImpact;
    unsigned int _usrInput;
    unsigned int _validState;
    struct { 
        unsigned int gateOpenTime : 1; 
        unsigned int trafficWatchDuration : 1; 
        unsigned int trafficWatchTime : 1; 
        unsigned int arpFailureCount : 1; 
        unsigned int bcnPerSign : 1; 
        unsigned int bcnRcvs : 1; 
        unsigned int bcnSched : 1; 
        unsigned int dnsServersImpacted : 1; 
        unsigned int dnsServersTotal : 1; 
        unsigned int fwTxFail : 1; 
        unsigned int fwTxFrames : 1; 
        unsigned int fwTxPerSign : 1; 
        unsigned int fwTxRetrans : 1; 
        unsigned int gwArpExpiry : 1; 
        unsigned int netScore : 1; 
        unsigned int rssi : 1; 
        unsigned int rxFrames : 1; 
        unsigned int sympAwdCode : 1; 
        unsigned int sympSign : 1; 
        unsigned int trafficWatchRx : 1; 
        unsigned int trgDisc : 1; 
        unsigned int txFail : 1; 
        unsigned int txFrames : 1; 
        unsigned int txPerSign : 1; 
        unsigned int txRetrans : 1; 
        unsigned int usrImpact : 1; 
        unsigned int usrInput : 1; 
        unsigned int validState : 1; 
    } _has;
}

@property bool hasTxFrames;
@property unsigned int txFrames;
@property bool hasTxFail;
@property unsigned int txFail;
@property bool hasTxRetrans;
@property unsigned int txRetrans;
@property bool hasBcnSched;
@property unsigned int bcnSched;
@property bool hasBcnRcvs;
@property unsigned int bcnRcvs;
@property bool hasFwTxFrames;
@property unsigned int fwTxFrames;
@property bool hasFwTxFail;
@property unsigned int fwTxFail;
@property bool hasFwTxRetrans;
@property unsigned int fwTxRetrans;
@property bool hasRxFrames;
@property unsigned int rxFrames;
@property bool hasRssi;
@property int rssi;
@property bool hasTrgDisc;
@property unsigned int trgDisc;
@property bool hasGwArpExpiry;
@property unsigned int gwArpExpiry;
@property bool hasUsrInput;
@property unsigned int usrInput;
@property bool hasTxPerSign;
@property unsigned int txPerSign;
@property bool hasFwTxPerSign;
@property unsigned int fwTxPerSign;
@property bool hasBcnPerSign;
@property unsigned int bcnPerSign;
@property bool hasSympSign;
@property unsigned int sympSign;
@property bool hasNetScore;
@property unsigned int netScore;
@property bool hasUsrImpact;
@property unsigned int usrImpact;
@property bool hasSympAwdCode;
@property unsigned int sympAwdCode;
@property bool hasArpFailureCount;
@property unsigned int arpFailureCount;
@property bool hasDnsServersImpacted;
@property unsigned int dnsServersImpacted;
@property bool hasDnsServersTotal;
@property unsigned int dnsServersTotal;
@property bool hasGateOpenTime;
@property double gateOpenTime;
@property bool hasTrafficWatchRx;
@property unsigned int trafficWatchRx;
@property bool hasTrafficWatchDuration;
@property double trafficWatchDuration;
@property bool hasTrafficWatchTime;
@property double trafficWatchTime;
@property bool hasValidState;
@property unsigned int validState;


- (unsigned int)validState;
- (double)trafficWatchTime;
- (double)trafficWatchDuration;
- (unsigned int)trafficWatchRx;
- (double)gateOpenTime;
- (unsigned int)dnsServersTotal;
- (unsigned int)dnsServersImpacted;
- (unsigned int)arpFailureCount;
- (unsigned int)sympAwdCode;
- (unsigned int)usrImpact;
- (unsigned int)netScore;
- (unsigned int)sympSign;
- (unsigned int)bcnPerSign;
- (unsigned int)fwTxPerSign;
- (unsigned int)txPerSign;
- (unsigned int)usrInput;
- (unsigned int)gwArpExpiry;
- (unsigned int)trgDisc;
- (unsigned int)rxFrames;
- (unsigned int)fwTxRetrans;
- (unsigned int)fwTxFail;
- (unsigned int)fwTxFrames;
- (unsigned int)bcnRcvs;
- (unsigned int)bcnSched;
- (unsigned int)txRetrans;
- (unsigned int)txFail;
- (unsigned int)txFrames;
- (bool)hasValidState;
- (void)setHasValidState:(bool)arg1;
- (void)setValidState:(unsigned int)arg1;
- (bool)hasTrafficWatchTime;
- (void)setHasTrafficWatchTime:(bool)arg1;
- (void)setTrafficWatchTime:(double)arg1;
- (bool)hasTrafficWatchDuration;
- (void)setHasTrafficWatchDuration:(bool)arg1;
- (void)setTrafficWatchDuration:(double)arg1;
- (bool)hasTrafficWatchRx;
- (void)setHasTrafficWatchRx:(bool)arg1;
- (void)setTrafficWatchRx:(unsigned int)arg1;
- (bool)hasGateOpenTime;
- (void)setHasGateOpenTime:(bool)arg1;
- (void)setGateOpenTime:(double)arg1;
- (bool)hasDnsServersTotal;
- (void)setHasDnsServersTotal:(bool)arg1;
- (void)setDnsServersTotal:(unsigned int)arg1;
- (bool)hasDnsServersImpacted;
- (void)setHasDnsServersImpacted:(bool)arg1;
- (void)setDnsServersImpacted:(unsigned int)arg1;
- (bool)hasArpFailureCount;
- (void)setHasArpFailureCount:(bool)arg1;
- (void)setArpFailureCount:(unsigned int)arg1;
- (bool)hasSympAwdCode;
- (void)setHasSympAwdCode:(bool)arg1;
- (void)setSympAwdCode:(unsigned int)arg1;
- (bool)hasUsrImpact;
- (void)setHasUsrImpact:(bool)arg1;
- (void)setUsrImpact:(unsigned int)arg1;
- (bool)hasNetScore;
- (void)setHasNetScore:(bool)arg1;
- (void)setNetScore:(unsigned int)arg1;
- (bool)hasSympSign;
- (void)setHasSympSign:(bool)arg1;
- (void)setSympSign:(unsigned int)arg1;
- (bool)hasBcnPerSign;
- (void)setHasBcnPerSign:(bool)arg1;
- (void)setBcnPerSign:(unsigned int)arg1;
- (bool)hasFwTxPerSign;
- (void)setHasFwTxPerSign:(bool)arg1;
- (void)setFwTxPerSign:(unsigned int)arg1;
- (bool)hasTxPerSign;
- (void)setHasTxPerSign:(bool)arg1;
- (void)setTxPerSign:(unsigned int)arg1;
- (bool)hasUsrInput;
- (void)setHasUsrInput:(bool)arg1;
- (void)setUsrInput:(unsigned int)arg1;
- (bool)hasGwArpExpiry;
- (void)setHasGwArpExpiry:(bool)arg1;
- (void)setGwArpExpiry:(unsigned int)arg1;
- (bool)hasTrgDisc;
- (void)setHasTrgDisc:(bool)arg1;
- (void)setTrgDisc:(unsigned int)arg1;
- (bool)hasRssi;
- (void)setHasRssi:(bool)arg1;
- (void)setRssi:(int)arg1;
- (bool)hasRxFrames;
- (void)setHasRxFrames:(bool)arg1;
- (void)setRxFrames:(unsigned int)arg1;
- (bool)hasFwTxRetrans;
- (void)setHasFwTxRetrans:(bool)arg1;
- (void)setFwTxRetrans:(unsigned int)arg1;
- (bool)hasFwTxFail;
- (void)setHasFwTxFail:(bool)arg1;
- (void)setFwTxFail:(unsigned int)arg1;
- (bool)hasFwTxFrames;
- (void)setHasFwTxFrames:(bool)arg1;
- (void)setFwTxFrames:(unsigned int)arg1;
- (bool)hasBcnRcvs;
- (void)setHasBcnRcvs:(bool)arg1;
- (void)setBcnRcvs:(unsigned int)arg1;
- (bool)hasBcnSched;
- (void)setHasBcnSched:(bool)arg1;
- (void)setBcnSched:(unsigned int)arg1;
- (bool)hasTxRetrans;
- (void)setHasTxRetrans:(bool)arg1;
- (void)setTxRetrans:(unsigned int)arg1;
- (bool)hasTxFail;
- (void)setHasTxFail:(bool)arg1;
- (void)setTxFail:(unsigned int)arg1;
- (bool)hasTxFrames;
- (void)setHasTxFrames:(bool)arg1;
- (void)setTxFrames:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)rssi;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
