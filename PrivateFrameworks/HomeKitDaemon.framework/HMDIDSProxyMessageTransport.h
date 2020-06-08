/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport {
    HMDCompanionManager * _companionManager;
    HMDWatchManager * _watchManager;
}

@property (nonatomic, readonly) HMDCompanionManager *companionManager;
@property (nonatomic, readonly) HMDWatchManager *watchManager;

+ (long long)priorityForMessage:(id)arg1;
+ (unsigned long long)restriction;
+ (bool)transportSupportsDevice:(id)arg1;

- (void).cxx_destruct;
- (int)awdTransportType;
- (bool)canSendMessage:(id)arg1;
- (id)companionManager;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForSenderContext:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isDeviceConnected:(id)arg1;
- (bool)isSecure;
- (long long)qualityOfService;
- (id)remoteMessageFromMessage:(id)arg1;
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id*)arg7;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)watchDeviceForDevice:(id)arg1;
- (id)watchManager;

@end
