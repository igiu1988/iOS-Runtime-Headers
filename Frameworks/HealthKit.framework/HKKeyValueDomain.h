/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKKeyValueDomain : NSObject <_HKXPCExportable> {
    long long  _category;
    NSString * _domainName;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)allValuesWithCompletion:(id /* block */)arg1;
- (void)connectionInvalidated;
- (void)dateForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3;
- (void)invalidate;
- (void)numberForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)removeValuesForKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setValuesWithDictionary:(id)arg1 completion:(id /* block */)arg2;

@end
