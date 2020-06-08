/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSApplicationStateMonitor : NSObject {
    NSString * _bundleIdentifier;
    BKSApplicationStateMonitor * _stateMonitor;
    NSObject<OS_dispatch_queue> * _stateObserverQueue;
    NSHashTable * _stateObservers;
}

@property (getter=isApplicationActive, nonatomic, readonly) bool applicationActive;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) BKSApplicationStateMonitor *stateMonitor;
@property (nonatomic, retain) NSHashTable *stateObservers;

- (void).cxx_destruct;
- (void)_handleStateChange:(id)arg1;
- (void)addApplicationStateObserver:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isApplicationActive;
- (void)removeAllObservers;
- (void)removeApplicationStateObserver:(id)arg1;
- (void)setStateMonitor:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (id)stateMonitor;
- (id)stateObservers;

@end
