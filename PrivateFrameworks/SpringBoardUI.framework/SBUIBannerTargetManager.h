/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerTargetManager : NSObject {
    NSMapTable * _implementationToProxyMap;
    NSHashTable * _observers;
    NSHashTable * _proxies;
}

@property (nonatomic, readonly) NSArray *targets;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObservers:(id /* block */)arg1;
- (id)_proxyForTargetImplementation:(id)arg1;
- (void)_registerTargetImplementation:(id)arg1;
- (void)_unregisterTargetImplementation:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)targets;

@end
