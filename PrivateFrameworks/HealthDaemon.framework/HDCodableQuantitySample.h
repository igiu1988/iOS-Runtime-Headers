/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying> {
    long long  _count;
    bool  _final;
    bool  _frozen;
    struct { 
        unsigned int count : 1; 
        unsigned int max : 1; 
        unsigned int min : 1; 
        unsigned int mostRecent : 1; 
        unsigned int mostRecentDate : 1; 
        unsigned int valueInCanonicalUnit : 1; 
        unsigned int valueInOriginalUnit : 1; 
        unsigned int final : 1; 
        unsigned int frozen : 1; 
    }  _has;
    double  _max;
    double  _min;
    double  _mostRecent;
    double  _mostRecentDate;
    NSString * _originalUnitString;
    NSMutableArray * _quantitySeriesDatas;
    HDCodableSample * _sample;
    double  _valueInCanonicalUnit;
    double  _valueInOriginalUnit;
}

@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool final;
@property (nonatomic) bool frozen;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasFinal;
@property (nonatomic) bool hasFrozen;
@property (nonatomic) bool hasMax;
@property (nonatomic) bool hasMin;
@property (nonatomic) bool hasMostRecent;
@property (nonatomic) bool hasMostRecentDate;
@property (nonatomic, readonly) bool hasOriginalUnitString;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasValueInCanonicalUnit;
@property (nonatomic) bool hasValueInOriginalUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double mostRecent;
@property (nonatomic) double mostRecentDate;
@property (nonatomic, retain) NSString *originalUnitString;
@property (nonatomic, retain) NSMutableArray *quantitySeriesDatas;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) double valueInOriginalUnit;

+ (Class)quantitySeriesDataType;

- (void).cxx_destruct;
- (bool)_applyToDiscreteQuantitySeriesSample:(id)arg1;
- (void)addQuantitySeriesData:(id)arg1;
- (bool)applyToObject:(id)arg1;
- (void)clearQuantitySeriesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)final;
- (bool)frozen;
- (bool)hasCount;
- (bool)hasFinal;
- (bool)hasFrozen;
- (bool)hasMax;
- (bool)hasMin;
- (bool)hasMostRecent;
- (bool)hasMostRecentDate;
- (bool)hasOriginalUnitString;
- (bool)hasSample;
- (bool)hasValueInCanonicalUnit;
- (bool)hasValueInOriginalUnit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSeries;
- (double)max;
- (void)mergeFrom:(id)arg1;
- (double)min;
- (double)mostRecent;
- (double)mostRecentDate;
- (id)originalUnitString;
- (id)quantitySeriesDataAtIndex:(unsigned long long)arg1;
- (id)quantitySeriesDatas;
- (unsigned long long)quantitySeriesDatasCount;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setCount:(long long)arg1;
- (void)setFinal:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasFinal:(bool)arg1;
- (void)setHasFrozen:(bool)arg1;
- (void)setHasMax:(bool)arg1;
- (void)setHasMin:(bool)arg1;
- (void)setHasMostRecent:(bool)arg1;
- (void)setHasMostRecentDate:(bool)arg1;
- (void)setHasValueInCanonicalUnit:(bool)arg1;
- (void)setHasValueInOriginalUnit:(bool)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setMostRecent:(double)arg1;
- (void)setMostRecentDate:(double)arg1;
- (void)setOriginalUnitString:(id)arg1;
- (void)setQuantitySeriesDatas:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setValueInCanonicalUnit:(double)arg1;
- (void)setValueInOriginalUnit:(double)arg1;
- (double)valueInCanonicalUnit;
- (double)valueInOriginalUnit;
- (void)writeTo:(id)arg1;

@end
