/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularPlanManagerCache : NSObject {
    bool  _cacheIsValid;
    NSArray * _cachedCarrierItems;
    bool  _carrierListFetchInProgress;
    NSArray * _danglingPlanItems;
    bool  _hasSubscriptions;
    bool  _isActivationCodeFlowSupported;
    bool  _isAnyLocalFlowTypeSupported;
    bool  _isCarrierItemFlowSupported;
    bool  _isMultipleDataPlanSupportAvailable;
    bool  _isWebUIFlowSupported;
    NSArray * _planItems;
    NSDictionary * _referenceMap;
    CTCellularPlanItem * _selectedPlanItem;
    bool  _shouldShowOldUI;
}

@property (retain) NSArray *cachedCarrierItems;
@property (nonatomic, readonly) NSArray *carrierItems;
@property bool carrierListFetchInProgress;
@property (nonatomic, readonly) NSArray *danglingPlanItems;
@property (nonatomic, readonly) NSArray *embeddedPlanItems;
@property (nonatomic, readonly) bool hasSubscriptions;
@property (nonatomic, readonly) bool isActivationCodeFlowSupported;
@property (nonatomic, readonly) bool isAnyLocalFlowTypeSupported;
@property (nonatomic, readonly) bool isAnyPlanActivating;
@property (nonatomic, readonly) bool isCarrierItemFlowSupported;
@property (nonatomic, readonly) bool isMultipleDataPlanSupportAvailable;
@property (nonatomic, readonly) bool isSelectedPlanActivating;
@property (nonatomic, readonly) bool isWebUIFlowSupported;
@property (nonatomic, readonly) NSArray *planItems;
@property (nonatomic, retain) CTCellularPlanItem *selectedPlanItem;
@property (nonatomic, readonly) bool shouldShowAccountSetup;
@property (nonatomic, readonly) bool shouldShowAddPlan;
@property (nonatomic, readonly) bool shouldShowDataPlanList;
@property (nonatomic, readonly) bool shouldShowNewUI;
@property (nonatomic, readonly) bool shouldShowPlanSelector;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_carrierInfoDidChange;
- (void)_fetchPlanItemsIfNeeded;
- (void)_invalidatePlanItemsCache;
- (void)_planInfoDidChange;
- (id)cachedCarrierItems;
- (id)carrierItems;
- (bool)carrierListFetchInProgress;
- (void)clearCachedCarrierItems;
- (id)danglingPlanFromReference:(id)arg1;
- (id)danglingPlanItems;
- (void)dealloc;
- (void)didSelectDanglingPlan:(id)arg1;
- (id)embeddedPlanItems;
- (bool)hasSubscriptions;
- (id)init;
- (bool)isActivationCodeFlowSupported;
- (bool)isAnyLocalFlowTypeSupported;
- (bool)isAnyPlanActivating;
- (bool)isCarrierItemFlowSupported;
- (bool)isMultipleDataPlanSupportAvailable;
- (bool)isSelectedPlanActivating;
- (bool)isWebUIFlowSupported;
- (id)planFromReference:(id)arg1;
- (id)planItems;
- (id)predefinedLabels;
- (id)selectedPlanItem;
- (void)setCachedCarrierItems:(id)arg1;
- (void)setCarrierListFetchInProgress:(bool)arg1;
- (void)setLabel:(id)arg1 forPlan:(id)arg2;
- (void)setSelectedPlanItem:(id)arg1;
- (void)setSelectedPlanItemForData:(id)arg1;
- (bool)shouldShowAccountSetup;
- (bool)shouldShowAddPlan;
- (bool)shouldShowDataPlanList;
- (bool)shouldShowNewUI;
- (bool)shouldShowOldUI;
- (bool)shouldShowPlanSelector;
- (id)subscriptionContextForPlanItem:(id)arg1 cachedSubscriptionContexts:(id)arg2;

@end
