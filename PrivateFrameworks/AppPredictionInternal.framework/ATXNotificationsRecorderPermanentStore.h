/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXNotificationsRecorderPermanentStore : ATXNotificationsDatabase {
    ATXNotificationsDedupeTracker * _dedupeTracker;
    ATXNotificationRecorder * _internalRecorder;
    ATXLockscreenTracker * _lockscreenTracker;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)addNotificationRecordInRecentStore:(id)arg1 timestamp:(id)arg2;
- (void)addNotificationsRecordWithMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)addNotificationsRecordWithSerializedMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (id)getLockscreenBundleIds;
- (id)init;
- (void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3;
- (void)replay;
- (void)replayWithCallback:(id /* block */)arg1;
- (void)resetNotificationsHistory;
- (void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4;

@end
