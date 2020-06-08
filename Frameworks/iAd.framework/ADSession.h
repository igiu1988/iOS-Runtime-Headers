/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADSession : NSObject <ADAdServingDaemonConnectionDelegate, ADSession_RPC> {
    NSObject<OS_dispatch_queue> * _adSpaceQueue;
    NSMutableArray * _adSpaces;
    bool  _appExtensionCanReceiveAds;
    bool  _applicationCanReceiveBackgroundAds;
    bool  _applicationCanRecieveAds;
    NSString * _bundleIdentifier;
    int  _classicUnavailableToken;
    ADAdServingDaemonConnection * _connection;
    ADDeviceInfo * _deviceInfo;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *adSpaceQueue;
@property (nonatomic, retain) NSMutableArray *adSpaces;
@property (nonatomic) bool appExtensionCanReceiveAds;
@property (nonatomic) bool applicationCanReceiveBackgroundAds;
@property (nonatomic) bool applicationCanRecieveAds;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) int classicUnavailableToken;
@property (nonatomic, retain) ADAdServingDaemonConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ADDeviceInfo *deviceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ADSSession_RPC> *rpcProxy;
@property (readonly) Class superclass;

+ (bool)adShouldCreateADSession;
+ (id)sharedInstance;

- (id)_adSpaceForIdentifier:(id)arg1;
- (void)_appDidBecomeActive;
- (void)_appDidEnterBackground;
- (void)_currentClientAdSpaces;
- (id)_linkedOnVersion;
- (void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2;
- (void)_remote_adImpressionReportedWithIdentifier:(id)arg1;
- (void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_configVersionDidChange:(id)arg1;
- (void)_remote_contentProxyURLConnectDidChange:(id)arg1;
- (void)_remote_contentProxyURLDidChange:(id)arg1;
- (void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;
- (void)_remote_deviceInfo:(id /* block */)arg1;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_proxyTypeDidChange:(long long)arg1;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3;
- (void)_remote_setRequiresFastVisibilityTestOnly:(bool)arg1 withIdentifier:(id)arg2;
- (void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_reportAdSubscriptionEvent:(id)arg1;
- (void)adAnalyticsEventReceived:(id)arg1;
- (void)adServingDaemonConnectionEstablished;
- (void)adServingDaemonConnectionLost;
- (id)adServingDaemonMachServiceName;
- (id)adSpaceQueue;
- (id)adSpaces;
- (void)addClientToSegments:(id)arg1 replaceExisting:(bool)arg2;
- (void)addClientToSegments:(id)arg1 replaceExisting:(bool)arg2 privateSegment:(bool)arg3;
- (id)additionalAdServingDaemonLaunchOptions;
- (bool)appExtensionCanReceiveAds;
- (bool)applicationCanReceiveBackgroundAds;
- (bool)applicationCanRecieveAds;
- (id)bundleIdentifier;
- (int)classicUnavailableToken;
- (void)configureConnection:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)deviceInfo;
- (void)establishRPCConnection;
- (id)init;
- (void)orientationChanged:(id)arg1;
- (void)performWhenConnected:(id /* block */)arg1;
- (void)prepareForAdRequests;
- (void)registerAdSpace:(id)arg1;
- (void)reportPrerollRequest;
- (id)rpcProxy;
- (id)rpcProxyWithErrorHandler:(id /* block */)arg1;
- (void)segmentDataForSignedInUserWithBlock:(id /* block */)arg1;
- (void)setAdSpaceQueue:(id)arg1;
- (void)setAdSpaces:(id)arg1;
- (void)setAppExtensionCanReceiveAds:(bool)arg1;
- (void)setApplicationCanReceiveBackgroundAds:(bool)arg1;
- (void)setApplicationCanRecieveAds:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClassicUnavailableToken:(int)arg1;
- (void)setConnection:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (bool)shouldConnectToAdServingDaemon;
- (void)unregisterAdSpace:(id)arg1;
- (void)updateDeviceInfo;

@end
