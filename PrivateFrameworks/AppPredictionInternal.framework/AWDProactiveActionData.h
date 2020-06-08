/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface AWDProactiveActionData : PBCodable <NSCopying> {
    NSString * _actionKey;
    int  _cacheRank;
    bool  _engagedAction;
    bool  _futureMedia;
    struct { 
        unsigned int score : 1; 
        unsigned int timestamp : 1; 
        unsigned int cacheRank : 1; 
        unsigned int engagedAction : 1; 
        unsigned int futureMedia : 1; 
        unsigned int shown : 1; 
    }  _has;
    double  _score;
    bool  _shown;
    AWDProactiveAppPredictionSubscores * _subscores;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *actionKey;
@property (nonatomic) int cacheRank;
@property (nonatomic) bool engagedAction;
@property (nonatomic) bool futureMedia;
@property (nonatomic, readonly) bool hasActionKey;
@property (nonatomic) bool hasCacheRank;
@property (nonatomic) bool hasEngagedAction;
@property (nonatomic) bool hasFutureMedia;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasShown;
@property (nonatomic, readonly) bool hasSubscores;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double score;
@property (nonatomic) bool shown;
@property (nonatomic, retain) AWDProactiveAppPredictionSubscores *subscores;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)actionKey;
- (int)cacheRank;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)engagedAction;
- (bool)futureMedia;
- (bool)hasActionKey;
- (bool)hasCacheRank;
- (bool)hasEngagedAction;
- (bool)hasFutureMedia;
- (bool)hasScore;
- (bool)hasShown;
- (bool)hasSubscores;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setActionKey:(id)arg1;
- (void)setCacheRank:(int)arg1;
- (void)setEngagedAction:(bool)arg1;
- (void)setFutureMedia:(bool)arg1;
- (void)setHasCacheRank:(bool)arg1;
- (void)setHasEngagedAction:(bool)arg1;
- (void)setHasFutureMedia:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasShown:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setShown:(bool)arg1;
- (void)setSubscores:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)shown;
- (id)subscores;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
