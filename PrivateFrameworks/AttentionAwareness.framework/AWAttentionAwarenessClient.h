/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionAwarenessClient : NSObject <AWFrameworkClient> {
    id /* block */  _clientBlock;
    NSObject<OS_dispatch_queue> * _clientQueue;
    int  _clientState;
    AWAttentionAwarenessConfiguration * _configuration;
    bool  _invalidated;
    AWClientPollWaiter * _pollWaiter;
    NSObject<OS_dispatch_queue> * _queue;
    <NSXPCProxyCreating> * _remoteClientProxy;
    unsigned long long  _suspensionCount;
}

@property (nonatomic, copy) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) AWAttentionEvent *lastEvent;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_invokeRequiringClient:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)cancelPollForAttentionWithError:(id*)arg1;
- (id)configuration;
- (id)init;
- (bool)invalidateRemoteClientWithError:(id*)arg1;
- (bool)invalidateWithError:(id*)arg1;
- (bool)invokeRequiringClient:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)lastEvent;
- (void)notifyEvent:(id)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (bool)pollForAttentionWithTimeout:(double)arg1 event:(id*)arg2 error:(id*)arg3;
- (bool)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3 error:(id*)arg4;
- (id)reconnect;
- (bool)resetAttentionLostTimeoutWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 shouldReset:(bool)arg2;
- (void)setEventHandlerWithQueue:(id)arg1 block:(id /* block */)arg2;
- (bool)suspendWithError:(id*)arg1;
- (id)unitTestSampler;
- (void)useUnitTestSampling:(bool)arg1;

@end
