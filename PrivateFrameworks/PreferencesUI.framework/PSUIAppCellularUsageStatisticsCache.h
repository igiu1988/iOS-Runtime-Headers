/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageStatisticsCache : NSObject {
    NSMutableDictionary * _dataUsageStatisticsByBundleID;
    NSMutableDictionary * _dataUsageStatisticsByProcessName;
    bool  _showInternalDetails;
    PSCellularUsage * _totalUsage;
    NSDictionary * _workspaceInfoDict;
}

@property (retain) NSMutableDictionary *dataUsageStatisticsByBundleID;
@property (retain) NSMutableDictionary *dataUsageStatisticsByProcessName;
@property (nonatomic) bool showInternalDetails;
@property (nonatomic, retain) PSCellularUsage *totalUsage;
@property (retain) NSDictionary *workspaceInfoDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearCache;
- (void)_handleUsageOrInfoChanged;
- (id)billingCycleEndDate;
- (bool)billingCycleSupported;
- (id)dataUsageStatisticsByBundleID;
- (id)dataUsageStatisticsByProcessName;
- (void)dealloc;
- (void)fetchDataUsageStatistics;
- (void)fetchWorkspaceInfo;
- (id)init;
- (id)initPrivate;
- (id)previousBillingCycleEndDate;
- (void)setDataUsageStatisticsByBundleID:(id)arg1;
- (void)setDataUsageStatisticsByProcessName:(id)arg1;
- (void)setShowInternalDetails:(bool)arg1;
- (void)setTotalUsage:(id)arg1;
- (void)setWorkspaceInfoDict:(id)arg1;
- (bool)showInternalDetails;
- (id)totalUsage;
- (id)usageByBundleID;
- (id)usageByProcessName;
- (bool)useCalendarMonthBillingCycle;
- (void)willEnterForeground;
- (id)workspaceInfo;
- (id)workspaceInfoDict;

@end
