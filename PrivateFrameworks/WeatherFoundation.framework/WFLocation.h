/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFLocation : NSObject <NSCopying, NSSecureCoding> {
    long long  _archiveVersion;
    NSString * _city;
    NSString * _country;
    NSString * _countryAbbreviation;
    NSString * _county;
    NSDate * _creationDate;
    NSString * _displayName;
    CLLocation * _geoLocation;
    NSString * _locationID;
    NSString * _state;
    NSString * _stateAbbreviation;
    NSTimeZone * _timeZone;
    NSString * _weatherDisplayName;
}

@property long long archiveVersion;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryAbbreviation;
@property (nonatomic, copy) NSString *county;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) CLLocation *geoLocation;
@property (nonatomic, copy) NSString *locationID;
@property (nonatomic, readonly) bool shouldQueryForAirQualityData;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *stateAbbreviation;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *weatherDisplayName;

+ (long long)currentArchiveVersion;
+ (id)knownKeys;
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;
+ (id)locationsByFilteringDuplicates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)archiveVersion;
- (id)city;
- (id)cloudDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countriesSupportAQI;
- (id)country;
- (id)countryAbbreviation;
- (id)county;
- (id)creationDate;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)geoLocation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalDataRepresentation:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithSearchResponse:(id)arg1;
- (bool)isDay;
- (bool)isDayForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localDataRepresentation;
- (id)locationID;
- (void)setArchiveVersion:(long long)arg1;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryAbbreviation:(id)arg1;
- (void)setCounty:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (void)setLocationID:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateAbbreviation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWeatherDisplayName:(id)arg1;
- (bool)shouldQueryForAirQualityData;
- (id)state;
- (id)stateAbbreviation;
- (id)summary;
- (id)summaryThatIsCompact:(bool)arg1;
- (id)sunriseForDate:(id)arg1;
- (id)sunsetForDate:(id)arg1;
- (id)timeZone;
- (id)weatherDisplayName;

@end
