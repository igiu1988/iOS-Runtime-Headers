/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient <FBSApplicationDataStoreRepositoryClient> {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSMutableDictionary * _pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue> * _prefetchedDataQueue;
    NSMutableDictionary * _prefetchedKeyValues;
    NSCountedSet * _prefetchedKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (void)_handleStoreInvalidated:(id)arg1;
- (void)_handleValueChanged:(id)arg1;
- (bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (id)_observers;
- (void)_sendMessageType:(int)arg1 withMessage:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3 waitForReply:(bool)arg4;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setChangeInFlight:(bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)addPrefetchedKeys:(id)arg1;
- (id)availableDataStores;
- (id)clientCallbackQueue;
- (void)fireCompletion:(id /* block */)arg1 error:(id)arg2;
- (void)fireCompletion:(id /* block */)arg1 result:(id)arg2 error:(id)arg3;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)init;
- (void)invalidate;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)synchronizeWithCompletion:(id /* block */)arg1;

@end
