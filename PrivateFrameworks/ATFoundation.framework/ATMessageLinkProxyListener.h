/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    ATMessageLink * _messageLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATMessageLink *messageLink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithMessageLink:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)messageLink;
- (void)setMessageLink:(id)arg1;
- (void)start;
- (void)stop;

@end
