/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXInspectionClient : NSObject <_ATXInspectionInterface> {
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (void)appHistoryActionWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)appHistoryAddAppIntentLaunch:(id)arg1 intent:(id)arg2 source:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(id /* block */)arg5;
- (void)appHistoryAddNSUALaunch:(id)arg1 requiredString:(id)arg2 itemIdentifier:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appHistoryClear:(id /* block */)arg1;
- (void)appHistoryClearAppIntent:(id /* block */)arg1;
- (void)appHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appHistoryUpdateActionPredictionPipelineWithAction:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reply:(id /* block */)arg4;
- (void)appInstallHistoryClear:(id /* block */)arg1;
- (void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(id /* block */)arg3;
- (void)appInstallHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appInstallHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appIntentHistoryDonateINIntent:(id)arg1 intentType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appIntentHistoryMockIntentLaunch:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg1 ntimes:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)dealloc;
- (void)feedbackClear:(id /* block */)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(id /* block */)arg3;
- (void)getABGroups:(id /* block */)arg1;
- (void)getActionLogs:(id /* block */)arg1;
- (void)getAppFeedbackData:(id /* block */)arg1;
- (void)getNotificationLogs:(id /* block */)arg1;
- (void)getNotificationsSuggestionResponses:(id /* block */)arg1;
- (void)getParseTreeForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)getPredictionModelDetails:(id /* block */)arg1;
- (id)init;
- (void)predictAppsAndReturnInputsAndSubscores:(id /* block */)arg1;
- (void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIds:(id)arg3 candidateActiontypes:(id)arg4 reply:(id /* block */)arg5;
- (void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 reply:(id /* block */)arg3;
- (void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 reply:(id /* block */)arg3;
- (void)resetActionPredictions:(id /* block */)arg1;
- (void)resetNotificationsHistory:(id /* block */)arg1;
- (void)resetNotificationsSuggestionResponses:(id /* block */)arg1;
- (void)retrainActionHistograms:(id /* block */)arg1;
- (void)retrainActionSlotDatabase:(id /* block */)arg1;

@end
