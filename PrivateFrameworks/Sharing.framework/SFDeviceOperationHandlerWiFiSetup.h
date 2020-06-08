/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceOperationHandlerWiFiSetup : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    CUReachabilityMonitor * _reachabilityMonitor;
    unsigned int  _repairFlags;
    id /* block */  _responseHandler;
    NSDictionary * _scanResult;
    SFSession * _sfSession;
    int  _state;
    bool  _stepDone;
    NSError * _stepError;
    int  _wifiChannel;
    bool  _wifiDirected;
    bool  _wifiHomeNetwork;
    NSData * _wifiPSK;
    NSString * _wifiPassword;
    NSString * _wifiSSID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeError:(id)arg1;
- (void)_handleWiFiSetupRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_run;
- (void)_runJoinStart:(int)arg1;
- (void)_runReachabilityStart;
- (void)_runScanResults:(id)arg1 error:(id)arg2 channel:(int)arg3;
- (void)_runScanStart:(int)arg1;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end
