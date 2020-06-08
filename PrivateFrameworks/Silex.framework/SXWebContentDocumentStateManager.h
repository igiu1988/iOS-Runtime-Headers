/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentDocumentStateManager : NSObject <SXWebContentDocumentStateProviding, SXWebContentDocumentStateReporting, WKScriptMessageHandler> {
    NSMutableArray * _onLoadBlocks;
    NSMutableArray * _onReadyBlocks;
    NSMutableArray * _onUnloadBlocks;
    NFStateMachine * _stateMachine;
    WKUserContentController * _userContentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *onLoadBlocks;
@property (nonatomic, readonly) NSMutableArray *onReadyBlocks;
@property (nonatomic, readonly) NSMutableArray *onUnloadBlocks;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserContentController *userContentController;

- (void).cxx_destruct;
- (void)documentIsReady;
- (void)documentStartedLoading;
- (void)documentWillUnload;
- (id)initWithUserContentController:(id)arg1;
- (void)onLoad:(id /* block */)arg1;
- (id)onLoadBlocks;
- (void)onReady:(id /* block */)arg1;
- (id)onReadyBlocks;
- (void)onUnload:(id /* block */)arg1;
- (id)onUnloadBlocks;
- (id)stateMachine;
- (id)userContentController;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
