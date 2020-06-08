/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _alertDates;
    NSString * _alertabilityPredicate;
    NSString * _availabilityPredicate;
    NSArray * _availableCountryCodes;
    HKUnit * _canonicalUnit;
    NSDate * _createdDate;
    unsigned char  _creatorDevice;
    unsigned long long  _displayOrder;
    bool  _displaysEarnedInstanceCount;
    unsigned long long  _duplicateRemovalCalendarUnit;
    unsigned char  _duplicateRemovalStrategy;
    unsigned char  _earnDateStrategy;
    unsigned char  _earnLimit;
    NSString * _goalExpression;
    unsigned long long  _key;
    unsigned char  _minimumEngineVersion;
    struct { 
        unsigned short year; 
        unsigned char month; 
        unsigned char day; 
        bool valid; 
    }  _packedAvailabilityEnd;
    struct { 
        unsigned short year; 
        unsigned char month; 
        unsigned char day; 
        bool valid; 
    }  _packedAvailabilityStart;
    struct { 
        unsigned short year; 
        unsigned char month; 
        unsigned char day; 
        bool valid; 
    }  _packedVisibilityEnd;
    struct { 
        unsigned short year; 
        unsigned char month; 
        unsigned char day; 
        bool valid; 
    }  _packedVisibilityStart;
    NSString * _predicate;
    NSString * _progressExpression;
    NSString * _sourceName;
    unsigned long long  _triggers;
    NSString * _uniqueName;
    NSString * _valueExpression;
    unsigned long long  _version;
    NSString * _visibilityPredicate;
}

@property (nonatomic, retain) NSSet *alertDates;
@property (nonatomic, retain) NSString *alertabilityPredicate;
@property (nonatomic, retain) NSDateComponents *availabilityEnd;
@property (nonatomic, retain) NSString *availabilityPredicate;
@property (nonatomic, retain) NSDateComponents *availabilityStart;
@property (nonatomic, retain) NSArray *availableCountryCodes;
@property (nonatomic, retain) HKUnit *canonicalUnit;
@property (nonatomic, retain) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;
@property (nonatomic) unsigned long long displayOrder;
@property (nonatomic) bool displaysEarnedInstanceCount;
@property (nonatomic) unsigned long long duplicateRemovalCalendarUnit;
@property (nonatomic) unsigned char duplicateRemovalStrategy;
@property (nonatomic) unsigned char earnDateStrategy;
@property (nonatomic) unsigned char earnLimit;
@property (nonatomic, retain) NSString *goalExpression;
@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned char minimumEngineVersion;
@property (nonatomic, retain) NSString *predicate;
@property (nonatomic, retain) NSString *progressExpression;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic) unsigned long long triggers;
@property (nonatomic, retain) NSString *uniqueName;
@property (nonatomic, retain) NSString *valueExpression;
@property (nonatomic) unsigned long long version;
@property (nonatomic, retain) NSDateComponents *visibilityEnd;
@property (nonatomic, retain) NSString *visibilityPredicate;
@property (nonatomic, retain) NSDateComponents *visibilityStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_displayStringForAlertDates:(id)arg1;
- (id)alertDates;
- (id)alertabilityPredicate;
- (id)availabilityEnd;
- (id)availabilityPredicate;
- (id)availabilityStart;
- (id)availableCountryCodes;
- (id)canonicalUnit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDate;
- (unsigned char)creatorDevice;
- (id)debugDescription;
- (id)description;
- (unsigned long long)displayOrder;
- (bool)displaysEarnedInstanceCount;
- (unsigned long long)duplicateRemovalCalendarUnit;
- (unsigned char)duplicateRemovalStrategy;
- (unsigned char)earnDateStrategy;
- (unsigned char)earnLimit;
- (void)encodeWithCoder:(id)arg1;
- (id)goalExpression;
- (unsigned long long)hash;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)key;
- (unsigned char)minimumEngineVersion;
- (id)predicate;
- (id)progressExpression;
- (void)setAlertDates:(id)arg1;
- (void)setAlertabilityPredicate:(id)arg1;
- (void)setAvailabilityEnd:(id)arg1;
- (void)setAvailabilityPredicate:(id)arg1;
- (void)setAvailabilityStart:(id)arg1;
- (void)setAvailableCountryCodes:(id)arg1;
- (void)setCanonicalUnit:(id)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setCreatorDevice:(unsigned char)arg1;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setDisplaysEarnedInstanceCount:(bool)arg1;
- (void)setDuplicateRemovalCalendarUnit:(unsigned long long)arg1;
- (void)setDuplicateRemovalStrategy:(unsigned char)arg1;
- (void)setEarnDateStrategy:(unsigned char)arg1;
- (void)setEarnLimit:(unsigned char)arg1;
- (void)setGoalExpression:(id)arg1;
- (void)setKey:(unsigned long long)arg1;
- (void)setMinimumEngineVersion:(unsigned char)arg1;
- (void)setPredicate:(id)arg1;
- (void)setProgressExpression:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setTriggers:(unsigned long long)arg1;
- (void)setUniqueName:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (void)setVisibilityEnd:(id)arg1;
- (void)setVisibilityPredicate:(id)arg1;
- (void)setVisibilityStart:(id)arg1;
- (id)sourceName;
- (unsigned long long)triggers;
- (id)uniqueName;
- (id)valueExpression;
- (unsigned long long)version;
- (id)visibilityEnd;
- (id)visibilityPredicate;
- (id)visibilityStart;

@end
