/* Generated by RuntimeBrowser.
 */

@protocol GEOLogAdaptor <NSObject>

@required

- (bool)acceptsLogMessageOfType:(int)arg1;
- (NSObject<OS_dispatch_queue> *)adaptorQueue;
- (void)flushLogs;
- (bool)isLogFrameworkAdaptor;
- (void)queueLogMessage:(GEOLogMessage *)arg1;

@optional

- (void)adaptorDidGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorDidGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)forceFlushLogs;
- (void)registerLogMsgState:(GEOLogMsgState *)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)updateAdaptorPolicyConfiguration:(NSDictionary *)arg1;

@end
