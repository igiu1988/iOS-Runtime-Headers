/* Generated by RuntimeBrowser.
 */

@protocol IDSDaemonProtocol <NSObject>

@optional

- (void)_removeAccount:(NSString *)arg1;
- (void)_removeAndDeregisterAccount:(NSString *)arg1;
- (void)_reregisterAndReidentify:(NSNumber *)arg1 account:(NSString *)arg2;
- (void)acceptInvitation:(NSString *)arg1;
- (void)acceptInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)acknowledgeMessageWithGUID:(NSString *)arg1 forAccountWithUniqueID:(NSString *)arg2 broadcastTime:(NSNumber *)arg3 messageSize:(NSNumber *)arg4 priority:(NSNumber *)arg5;
- (void)acknowledgeMessageWithStorageGUID:(NSString *)arg1 realGUID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 broadcastTime:(NSNumber *)arg4 messageSize:(NSNumber *)arg5 priority:(NSNumber *)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8;
- (void)acknowledgeOutgoingMessageWithGUID:(NSString *)arg1 alternateCallbackID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3;
- (void)acknowledgeSessionID:(NSString *)arg1 clientID:(NSString *)arg2;
- (void)activateAlias:(NSString *)arg1 onAccount:(NSString *)arg2;
- (void)addAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 uniqueID:(NSString *)arg3 accountType:(int)arg4 accountInfo:(NSDictionary *)arg5;
- (void)addAliases:(NSArray *)arg1 toAccount:(NSString *)arg2;
- (void)addPairedDevice:(NSString *)arg1;
- (void)addPairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)appleCareSignInUserName:(NSString *)arg1 DSID:(NSString *)arg2 authToken:(NSString *)arg3 requestID:(NSString *)arg4;
- (void)appleCareSignOutUserWithRequestID:(NSString *)arg1;
- (void)authTokenChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)authenticateAccount:(NSString *)arg1;
- (void)authenticatePhoneWithRequestUUID:(NSString *)arg1;
- (void)authenticationChangedForAccount:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)cancelInvitation:(NSString *)arg1 withRemoteEndedReasonOverride:(unsigned int)arg2;
- (void)cancelItemWithIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)cleanupSession:(NSString *)arg1;
- (void)closeSocketWithOptions:(NSDictionary *)arg1;
- (void)connectPairedDevice:(NSString *)arg1;
- (void)connectPairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)continuityClientInstanceCreated;
- (void)continuityConnectToPeer:(NSString *)arg1;
- (void)continuityDisconnectFromPeer:(NSString *)arg1;
- (void)continuityStartAdvertisingOfType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 boostedScan:(bool)arg4 duplicates:(bool)arg5;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 peers:(NSArray *)arg4;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 peers:(NSArray *)arg4 boostedScan:(bool)arg5 duplicates:(bool)arg6;
- (void)continuityStartTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityStopAdvertisingOfType:(long long)arg1;
- (void)continuityStopScanningForType:(long long)arg1;
- (void)continuityStopTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)deactivateAlias:(NSString *)arg1 onAccount:(NSString *)arg2;
- (void)deactivateAndPurgeIdentifyForAccount:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)deletePairedDevice:(NSString *)arg1;
- (void)deletePairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)disableAccount:(NSString *)arg1;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)enableAccount:(NSString *)arg1;
- (void)endSession:(NSString *)arg1;
- (void)endSession:(NSString *)arg1 withData:(NSData *)arg2;
- (void)failedDecryptingMessage:(NSDictionary *)arg1 reason:(long long)arg2 forGroupID:(ENGroupID *)arg3 onService:(NSString *)arg4;
- (void)fetchPhoneUserSubscriptionSourceWithRequestUUID:(NSString *)arg1;
- (void)forgetDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)generatePhoneAuthenticationSignatureOverData:(NSData *)arg1 withRequestUUID:(NSString *)arg2;
- (void)getDeliveryStats;
- (void)getLocalDeviceInfo;
- (void)getPairedDeviceInfo;
- (void)getPairedDevicesWithRequestID:(NSString *)arg1;
- (void)getPairingDevicesWithRequestID:(NSString *)arg1;
- (void)getProgressUpdateForIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)getRegisteredIdentities;
- (void)hardDeregister;
- (void)homeKitGetAdminAccessTokensWithServiceUserID:(NSString *)arg1 accessoryID:(NSString *)arg2 pairingToken:(NSData *)arg3;
- (void)homeKitGetConsentTokensWithServiceUserID:(NSString *)arg1 accessoryIDs:(NSArray *)arg2 adminID:(NSString *)arg3;
- (void)homeKitGetServiceUserIDs;
- (void)homeKitGetUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 userHandle:(NSString *)arg3 accessoryRequests:(NSArray *)arg4;
- (void)homeKitRefreshUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 accessoryRequests:(NSArray *)arg3;
- (void)iCloudModifyForUserName:(NSString *)arg1;
- (void)iCloudSignInHackWithUserName:(NSString *)arg1 password:(NSString *)arg2;
- (void)iCloudSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iCloudSignOut;
- (void)iCloudSignOutHack;
- (void)iCloudUpdateForUserName:(NSString *)arg1 accountInfo:(NSDictionary *)arg2;
- (void)iTunesSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iTunesSignOut;
- (void)incomingAccountSyncMessage:(NSDictionary *)arg1;
- (void)initialLocalSyncCompletedForServices:(NSArray *)arg1;
- (void)initialLocalSyncStartedForServices:(NSArray *)arg1;
- (void)joinGroupSession:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)kickGetDependentForAccount:(NSString *)arg1;
- (void)leaveGroupSession:(NSString *)arg1 participantInfo:(NSDictionary *)arg2;
- (void)localSetupCompleted;
- (void)localSetupUnpair;
- (void)localSetupUnpairStart;
- (void)openSocketWithOptions:(NSDictionary *)arg1;
- (void)passwordChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)passwordUpdatedForAccount:(NSString *)arg1;
- (void)reRegisterWithUserID:(NSString *)arg1 action:(NSNumber *)arg2 service:(NSString *)arg3;
- (void)redeliverMessagesForDevice:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)regenerateRegisteredIdentity;
- (void)registerAccount:(NSString *)arg1;
- (void)registerForNotificationsOnServices:(NSSet *)arg1;
- (void)registrationControlGetCurrentiMessageStateWithContextForRequestID:(NSString *)arg1;
- (void)registrationControlGetRegistrationStateForRegistrationType:(long long)arg1 requestID:(NSString *)arg2;
- (void)registrationControlSetRegistrationStateForRegistrationType:(long long)arg1 toState:(long long)arg2 requestID:(NSString *)arg3;
- (void)removeAliases:(NSArray *)arg1 fromAccount:(NSString *)arg2;
- (void)repairAccounts;
- (void)reportiMessageSpam:(NSArray *)arg1 toURI:(NSString *)arg2;
- (void)reportiMessageSpamCheckUnknown:(NSString *)arg1 count:(NSNumber *)arg2 requestID:(NSString *)arg3;
- (void)reportiMessageUnknownSender:(NSString *)arg1 messageID:(NSString *)arg2 messageServerTimestamp:(NSNumber *)arg3 toURI:(NSString *)arg4;
- (void)requestActiveParticipantsForGroupSession:(NSString *)arg1;
- (void)requestPublicKeysForRealTimeEncryption:(NSString *)arg1 forAccountWithID:(NSString *)arg2;
- (void)requestRealTimeEncryptionMasterKeyMaterial:(NSString *)arg1 forGroup:(NSString *)arg2;
- (void)resetRealTimeEncryptionKeys:(NSString *)arg1 forGroup:(NSString *)arg2;
- (void)reunionSyncCompletedForServices:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)reunionSyncStartedForServices:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)sendAllocationRequest:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)sendAppAckWithGUID:(NSString *)arg1 toDestination:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 connectionType:(long long)arg4;
- (void)sendInvitation:(NSString *)arg1 withData:(NSData *)arg2 declineOnError:(bool)arg3;
- (void)sendInvitation:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)sendMessageWithSendParameters:(NSDictionary *)arg1;
- (void)sendPersistedFile:(NSURL *)arg1 userInfo:(NSDictionary *)arg2 toDestinations:(NSArray *)arg3 usingAccountWithUniqueID:(NSString *)arg4 identifier:(NSString *)arg5;
- (void)sendRealTimeEncryptionMKMRecoveryRequest:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)sendRealTimeEncryptionMasterKeyMaterial:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)sendRealTimeMediaPrekey:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)sendServerMessage:(NSDictionary *)arg1 command:(NSNumber *)arg2 usingAccountWithUniqueID:(NSString *)arg3;
- (void)sendSessionMessage:(NSData *)arg1 toDestinations:(NSSet *)arg2 forSessionWithUniqueID:(NSString *)arg3;
- (void)setAllowedTrafficClasses:(NSSet *)arg1;
- (void)setAllowedTrafficClassifiersForDevice:(NSString *)arg1 classifiers:(NSArray *)arg2 requestID:(NSString *)arg3;
- (void)setAudioEnabled:(bool)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setLinkPreferences:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)setListenerServices:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (void)setMuted:(bool)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setNSUUID:(NSString *)arg1 onDeviceWithUniqueID:(NSString *)arg2 forService:(NSString *)arg3;
- (void)setPairedDeviceInfo:(NSDictionary *)arg1;
- (void)setPhoneUserSubscriptionSource:(NSNumber *)arg1 withRequestUUID:(NSString *)arg2;
- (void)setPreferInfraWiFi:(bool)arg1 service:(NSString *)arg2;
- (void)setPreferences:(NSDictionary *)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setupAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 accountType:(int)arg3 accountConfig:(NSDictionary *)arg4 authToken:(NSString *)arg5 password:(NSString *)arg6 transactionID:(NSString *)arg7;
- (void)setupCompletedForPairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)setupNewSessionWithConfiguration:(NSDictionary *)arg1;
- (void)setupRealtimeEncryptionController:(NSString *)arg1 forAccountWithID:(NSString *)arg2;
- (void)startLocalSetup;
- (void)startOTRTest:(NSString *)arg1 priority:(long long)arg2;
- (void)stopLocalPairingForDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)stopLocalSetup;
- (void)switchActivePairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)testCloudQRConnection:(NSString *)arg1;
- (void)triggerFinalDeregister;
- (void)unpairDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)unpairStartForDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)unregisterAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)updateAccount:(NSString *)arg1 withAccountInfo:(NSDictionary *)arg2;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 forAccount:(NSString *)arg3;
- (void)updateMembers:(NSArray *)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3 withContext:(NSData *)arg4 triggeredLocally:(bool)arg5;
- (void)updateParticipantData:(NSData *)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3 withContext:(NSData *)arg4;
- (void)updateSubServices:(NSArray *)arg1 forService:(NSString *)arg2 deviceUniqueID:(NSString *)arg3;
- (void)updateUserWithOldUserName:(NSString *)arg1 newUserName:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)validateProfileForAccount:(NSString *)arg1;
- (void)xpcObject:(NSObject<OS_xpc_object> *)arg1 objectContext:(NSDictionary *)arg2;

@end
