/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountID;
    id  _contentIdentifier;
    long long  _options;
}

@property (readonly) NSNumber *accountID;
@property (copy) id contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long keybagOptions;
@property (readonly) Class superclass;

- (id)accountID;
- (id)accountIdentifier;
- (id)contentIdentifier;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)keybagOptions;
- (void)setContentIdentifier:(id)arg1;
- (void)setKeybagOptions:(long long)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
