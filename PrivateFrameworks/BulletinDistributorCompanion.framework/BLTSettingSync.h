/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, BLTSectionConfigurationDelegate, BLTSectionInfoListDelegate, BLTSiriActionAppListDelegate> {
    BLTSectionInfoListBridgeProvider * _bridgeProvider;
    bool  _initialSyncPerformed;
    BBObserver * _observer;
    NSMutableDictionary * _reloadBBCompletions;
    BLTSectionInfoList * _sectionInfoList;
    BLTSectionInfoSyncCoordinator * _sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> * _sectionInfoSyncCoordinatorQueue;
    BLTSettingSyncSendQueue * _settingSendQueue;
    unsigned long long  _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSiriActionAppList * _siriActionAppList;
    unsigned long long  _stateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BBObserver *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addReloadBBCompletion:(id /* block */)arg1 sectionID:(id)arg2;
- (id)_alertingSectionIDs;
- (void)_callAndRemoveReloadBBCompletion:(id /* block */)arg1 sectionID:(id)arg2;
- (void)_callReloadBBCompletionsForSectionID:(id)arg1;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (unsigned long long)_fetchSyncState;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (void)_logNotificationSettings;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(bool)arg3 spoolToFile:(bool)arg4 andCompletion:(id /* block */)arg5;
- (void)_sendSiriAppListWithInstalled:(struct NSDictionary { Class x1; }*)arg1 removed:(id)arg2;
- (void)_sendSpooledSyncWithCompletion:(id /* block */)arg1 withProgress:(id /* block */)arg2;
- (void)_setupSectionInfoListWithCompletion:(id /* block */)arg1;
- (void)_spoolInitialSync;
- (id)_stateDescription;
- (void)_storeSyncState:(unsigned long long)arg1;
- (void)_updateAllBBSectionsWithCompletion:(id /* block */)arg1 withProgress:(id /* block */)arg2 spoolToFile:(bool)arg3;
- (bool)_willSectionIDAlert:(id)arg1;
- (void)clearSectionInfoSentCache;
- (void)dealloc;
- (void)handleAllSyncComplete;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (bool)isSectionInfoSentCacheEmpty;
- (id)observer;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)performInitialSyncWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performSyncIfNeededForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
- (void)sendAllSectionInfoWithSpool:(bool)arg1 completion:(id /* block */)arg2;
- (void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(bool)arg3;
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(id /* block */)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2 spoolToFile:(bool)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(bool)arg3 fromRemote:(bool)arg4;
- (void)setObserver:(id)arg1;
- (void)setSectionInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)settingOverrides;
- (void)siriActionAppListUpdated:(id)arg1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;

@end
