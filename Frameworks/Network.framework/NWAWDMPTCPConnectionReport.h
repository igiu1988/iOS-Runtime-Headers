/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDMPTCPConnectionReport : PBCodable <NSCopying> {
    NSString * _clientId;
    bool  _establishmentCellularFallback;
    int  _establishmentFailureError;
    bool  _establishmentForcedTcpFallback;
    NSString * _establishmentInterfaceName;
    bool  _establishmentSuccess;
    int  _establishmentSynRetransmits;
    bool  _establishmentTcpFallback;
    double  _establishmentTime;
    struct { 
        unsigned int establishmentTime : 1; 
        unsigned int postConnectSessionLifetime : 1; 
        unsigned int timestamp : 1; 
        unsigned int establishmentFailureError : 1; 
        unsigned int establishmentSynRetransmits : 1; 
        unsigned int postConnectSubflowAttemptCount : 1; 
        unsigned int postConnectSubflowMaxSubflowCount : 1; 
        unsigned int subflowSwitchingCount : 1; 
        unsigned int establishmentCellularFallback : 1; 
        unsigned int establishmentForcedTcpFallback : 1; 
        unsigned int establishmentSuccess : 1; 
        unsigned int establishmentTcpFallback : 1; 
        unsigned int postConnectMultiHomed : 1; 
        unsigned int postConnectSingleHomed : 1; 
    }  _has;
    NSMutableArray * _interfaceReports;
    bool  _postConnectMultiHomed;
    double  _postConnectSessionLifetime;
    bool  _postConnectSingleHomed;
    int  _postConnectSubflowAttemptCount;
    int  _postConnectSubflowMaxSubflowCount;
    int  _subflowSwitchingCount;
    NSMutableArray * _subflowSwitchingReports;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) bool establishmentCellularFallback;
@property (nonatomic) int establishmentFailureError;
@property (nonatomic) bool establishmentForcedTcpFallback;
@property (nonatomic, retain) NSString *establishmentInterfaceName;
@property (nonatomic) bool establishmentSuccess;
@property (nonatomic) int establishmentSynRetransmits;
@property (nonatomic) bool establishmentTcpFallback;
@property (nonatomic) double establishmentTime;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic) bool hasEstablishmentCellularFallback;
@property (nonatomic) bool hasEstablishmentFailureError;
@property (nonatomic) bool hasEstablishmentForcedTcpFallback;
@property (nonatomic, readonly) bool hasEstablishmentInterfaceName;
@property (nonatomic) bool hasEstablishmentSuccess;
@property (nonatomic) bool hasEstablishmentSynRetransmits;
@property (nonatomic) bool hasEstablishmentTcpFallback;
@property (nonatomic) bool hasEstablishmentTime;
@property (nonatomic) bool hasPostConnectMultiHomed;
@property (nonatomic) bool hasPostConnectSessionLifetime;
@property (nonatomic) bool hasPostConnectSingleHomed;
@property (nonatomic) bool hasPostConnectSubflowAttemptCount;
@property (nonatomic) bool hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) bool hasSubflowSwitchingCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *interfaceReports;
@property (nonatomic) bool postConnectMultiHomed;
@property (nonatomic) double postConnectSessionLifetime;
@property (nonatomic) bool postConnectSingleHomed;
@property (nonatomic) int postConnectSubflowAttemptCount;
@property (nonatomic) int postConnectSubflowMaxSubflowCount;
@property (nonatomic) int subflowSwitchingCount;
@property (nonatomic, retain) NSMutableArray *subflowSwitchingReports;
@property (nonatomic) unsigned long long timestamp;

+ (Class)interfaceReportsType;
+ (Class)subflowSwitchingReportsType;

- (void).cxx_destruct;
- (void)addInterfaceReports:(id)arg1;
- (void)addSubflowSwitchingReports:(id)arg1;
- (void)clearInterfaceReports;
- (void)clearSubflowSwitchingReports;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)establishmentCellularFallback;
- (int)establishmentFailureError;
- (bool)establishmentForcedTcpFallback;
- (id)establishmentInterfaceName;
- (bool)establishmentSuccess;
- (int)establishmentSynRetransmits;
- (bool)establishmentTcpFallback;
- (double)establishmentTime;
- (bool)hasClientId;
- (bool)hasEstablishmentCellularFallback;
- (bool)hasEstablishmentFailureError;
- (bool)hasEstablishmentForcedTcpFallback;
- (bool)hasEstablishmentInterfaceName;
- (bool)hasEstablishmentSuccess;
- (bool)hasEstablishmentSynRetransmits;
- (bool)hasEstablishmentTcpFallback;
- (bool)hasEstablishmentTime;
- (bool)hasPostConnectMultiHomed;
- (bool)hasPostConnectSessionLifetime;
- (bool)hasPostConnectSingleHomed;
- (bool)hasPostConnectSubflowAttemptCount;
- (bool)hasPostConnectSubflowMaxSubflowCount;
- (bool)hasSubflowSwitchingCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)interfaceReports;
- (id)interfaceReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interfaceReportsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)postConnectMultiHomed;
- (double)postConnectSessionLifetime;
- (bool)postConnectSingleHomed;
- (int)postConnectSubflowAttemptCount;
- (int)postConnectSubflowMaxSubflowCount;
- (bool)readFrom:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setEstablishmentCellularFallback:(bool)arg1;
- (void)setEstablishmentFailureError:(int)arg1;
- (void)setEstablishmentForcedTcpFallback:(bool)arg1;
- (void)setEstablishmentInterfaceName:(id)arg1;
- (void)setEstablishmentSuccess:(bool)arg1;
- (void)setEstablishmentSynRetransmits:(int)arg1;
- (void)setEstablishmentTcpFallback:(bool)arg1;
- (void)setEstablishmentTime:(double)arg1;
- (void)setHasEstablishmentCellularFallback:(bool)arg1;
- (void)setHasEstablishmentFailureError:(bool)arg1;
- (void)setHasEstablishmentForcedTcpFallback:(bool)arg1;
- (void)setHasEstablishmentSuccess:(bool)arg1;
- (void)setHasEstablishmentSynRetransmits:(bool)arg1;
- (void)setHasEstablishmentTcpFallback:(bool)arg1;
- (void)setHasEstablishmentTime:(bool)arg1;
- (void)setHasPostConnectMultiHomed:(bool)arg1;
- (void)setHasPostConnectSessionLifetime:(bool)arg1;
- (void)setHasPostConnectSingleHomed:(bool)arg1;
- (void)setHasPostConnectSubflowAttemptCount:(bool)arg1;
- (void)setHasPostConnectSubflowMaxSubflowCount:(bool)arg1;
- (void)setHasSubflowSwitchingCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceReports:(id)arg1;
- (void)setPostConnectMultiHomed:(bool)arg1;
- (void)setPostConnectSessionLifetime:(double)arg1;
- (void)setPostConnectSingleHomed:(bool)arg1;
- (void)setPostConnectSubflowAttemptCount:(int)arg1;
- (void)setPostConnectSubflowMaxSubflowCount:(int)arg1;
- (void)setSubflowSwitchingCount:(int)arg1;
- (void)setSubflowSwitchingReports:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)subflowSwitchingCount;
- (id)subflowSwitchingReports;
- (id)subflowSwitchingReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subflowSwitchingReportsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
