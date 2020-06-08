/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHEarnedInstanceStore : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> {
    NSMutableArray * _allEarnedInstances;
    unsigned char  _device;
    ACHEarnedInstanceDuplicateUtility * _duplicateUtility;
    NSObject<OS_dispatch_queue> * _earnedInstanceQueue;
    ACHEarnedInstanceEntityWrapper * _entityWrapper;
    bool  _initialEarnedInstanceFetchComplete;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
}

@property (nonatomic, retain) NSMutableArray *allEarnedInstances;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char device;
@property (nonatomic, retain) ACHEarnedInstanceDuplicateUtility *duplicateUtility;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *earnedInstanceQueue;
@property (nonatomic, readonly) NSArray *earnedInstances;
@property (nonatomic, retain) ACHEarnedInstanceEntityWrapper *entityWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialEarnedInstanceFetchComplete;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyInitialFetchComplete;
- (void)_notifyObserversOfAddedEarnedInstances:(id)arg1;
- (void)_notifyObserversOfRemovedEarnedInstances:(id)arg1;
- (bool)_queue_addEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(bool)arg4 error:(id*)arg5;
- (id)_queue_addEarnedInstancesWithSingleTemplate:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4;
- (void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)arg1;
- (id)_queue_earnedInstancesArray;
- (bool)_queue_removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (bool)addEarnedInstances:(id)arg1 databaseContext:(id)arg2 error:(id*)arg3;
- (bool)addEarnedInstances:(id)arg1 error:(id*)arg2;
- (void)addObserver:(id)arg1;
- (id)allEarnedInstances;
- (unsigned char)device;
- (id)duplicateUtility;
- (bool)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (id)earnedInstanceQueue;
- (id)earnedInstances;
- (id)earnedInstancesForTemplateUniqueName:(id)arg1;
- (id)entityWrapper;
- (id)initWithProfile:(id)arg1 earnedInstanceEntityWrapper:(id)arg2 earnedInstanceDuplicateUtility:(id)arg3 device:(unsigned char)arg4;
- (bool)initialEarnedInstanceFetchComplete;
- (void)loadAllEarnedInstancesFromDatabaseIfNecessary;
- (id)observerQueue;
- (id)observers;
- (id)profile;
- (bool)removeAllEarnedInstancesWithError:(id*)arg1;
- (bool)removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (void)removeObserver:(id)arg1;
- (void)setAllEarnedInstances:(id)arg1;
- (void)setDevice:(unsigned char)arg1;
- (void)setDuplicateUtility:(id)arg1;
- (void)setEarnedInstanceQueue:(id)arg1;
- (void)setEntityWrapper:(id)arg1;
- (void)setInitialEarnedInstanceFetchComplete:(bool)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProfile:(id)arg1;

@end
