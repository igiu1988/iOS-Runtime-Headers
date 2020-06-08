/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItemRanker : NSObject {
    NSMapTable * _bundleFeatures;
    double  _experimentalWeight1;
    double  _experimentalWeight2;
    bool  _isCJK;
    bool  _isCancelled;
    bool  _isInternalDevice;
    NSString * _keyboardLanguage;
    float  _lastIsSpaceFeature;
    NSString * _meContactIdentifier;
    bool  _policyDisabled;
    unsigned long long  _queryTermCount;
    NSString * _searchString;
}

@property (nonatomic, retain) NSMapTable *bundleFeatures;
@property (nonatomic) double experimentalWeight1;
@property (nonatomic) double experimentalWeight2;
@property bool isCJK;
@property bool isCancelled;
@property bool isInternalDevice;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic) float lastIsSpaceFeature;
@property (nonatomic, retain) NSString *meContactIdentifier;
@property (nonatomic) bool policyDisabled;
@property unsigned long long queryTermCount;
@property (nonatomic, retain) NSString *searchString;

+ (id)appsBundle;
+ (id)calendarBundle;
+ (void)clearState;
+ (id)contactsBundle;
+ (id)importantAttributesForBundle:(id)arg1;
+ (void)initialize;
+ (bool)isCJK;
+ (id)mailBundle;
+ (id)messagesBundle;
+ (id)musicBundle;
+ (id)notesBundle;
+ (id)requiredAttributes;
+ (void)setDockApps:(id)arg1;
+ (id)settingsBundle;
+ (id /* block */)shouldUpdateFuncForSnippetFeature:(unsigned long long)arg1;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (id)bundleFeatures;
- (void)cancel;
- (id /* block */)comparatorByJoiningComparator:(id /* block */)arg1 withPredicate:(id)arg2;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (float*)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (void)deactivate;
- (void)dealloc;
- (double)experimentalWeight1;
- (double)experimentalWeight2;
- (void)hackMusicResultsWithItem:(id)arg1 featureVector:(id)arg2;
- (id)init;
- (id)initWithSearchString:(id)arg1 language:(id)arg2;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 isCJK:(bool)arg3 experimentalWeight1:(double)arg4 experimentalWeight2:(double)arg5;
- (bool)isCJK;
- (bool)isCancelled;
- (bool)isInternalDevice;
- (id)keyboardLanguage;
- (float)lastIsSpaceFeature;
- (id)meContactIdentifier;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id*)arg2 futureItems:(id*)arg3;
- (bool)policyDisabled;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;
- (unsigned long long)queryTermCount;
- (id)rankingConfiguration;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short*)arg2 relRankFeatureOut:(unsigned short*)arg3;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1 isCJK:(bool)arg2;
- (void)resetbundleFeaturesScratchBuf:(float*)arg1;
- (id)searchString;
- (void)setBundleFeatures:(id)arg1;
- (void)setExperimentalWeight1:(double)arg1;
- (void)setExperimentalWeight2:(double)arg1;
- (void)setIsCJK:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsInternalDevice:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setLastIsSpaceFeature:(float)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (void)setPolicyDisabled:(bool)arg1;
- (void)setQueryTermCount:(unsigned long long)arg1;
- (void)setRenderEngagementFeaturesForItem:(id)arg1 counts:(id)arg2 isRender:(bool)arg3 bundleDict:(id)arg4;
- (void)setRenderEngagementFeaturesForItemAsShorts:(id)arg1 counts:(short)arg2 isRender:(bool)arg3 bundleDict:(id)arg4;
- (void)setSearchString:(id)arg1;
- (void)updateResultSetContext:(struct _resultset_computation_ctx { float *x1; bool x2; bool x3; bool x4; float x5; float x6; float x7; float x8[44]; }*)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx { float *x1; bool x2; bool x3; bool x4; float x5; float x6; float x7; float x8[44]; }*)arg2 uniqueScores:(id)arg3;
- (void)updateScoresForPreparedItems:(id)arg1 isCJK:(bool)arg2;
- (bool)wasItemCreatedWithinAWeek:(id)arg1;

@end
