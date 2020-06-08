/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUEmbedConfigurationOperation : FCOperation {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    id /* block */  _completion;
    FCFlintResourceManager * _flintResourceManager;
    NUEmbedConfigurationOperationResult * _result;
}

@property (nonatomic, retain) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, retain) NUEmbedConfigurationOperationResult *result;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id /* block */)completion;
- (id)flintResourceManager;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)result;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlintResourceManager:(id)arg1;
- (void)setResult:(id)arg1;

@end
