/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIActivityContinuationManager : NSObject <NSUserActivityDelegate> {
    <UIActivityContinuationManagerApplicationContext> * _context;
    NSProgress * _currentActivityContinuationProgress;
    NSString * _currentActivityContinuationType;
    NSString * _currentActivityContinuationUUIDString;
}

@property (getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:, nonatomic, retain) NSProgress *currentActivityContinuationProgress;
@property (getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:, nonatomic, copy) NSString *currentActivityContinuationType;
@property (getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:, nonatomic, copy) NSString *currentActivityContinuationUUIDString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2;
- (void)_clearCurrentActivityContinuationCancelingProgress:(bool)arg1;
- (bool)_continueUserActivity:(id)arg1;
- (id)_currentActivityContinuationProgress;
- (id)_currentActivityContinuationType;
- (id)_currentActivityContinuationUUIDString;
- (bool)_delegateHandledContinueActivityWithType:(id)arg1;
- (void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (void)_displayCurrentActivityContinuationProgressUI;
- (void)_endCurrentActivityContinuationAndDisplayError:(id)arg1;
- (void)_endCurrentActivityContinuationWithCompletion:(id /* block */)arg1;
- (id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_hideCurrentActivityContinuationProgressUI;
- (void)_setCurrentActivityContinuationProgress:(id)arg1;
- (void)_setCurrentActivityContinuationType:(id)arg1;
- (void)_setCurrentActivityContinuationUUIDString:(id)arg1;
- (void)_userActivityWillSave:(id)arg1;
- (id)activityContinuationDictionaryWithAction:(id)arg1;
- (bool)activityContinuationsAreBeingTracked;
- (void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;
- (void)handleActivityContinuation:(id)arg1 isSuspended:(bool)arg2;
- (id)init;
- (id)initWithApplicationContext:(id)arg1;
- (void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;
- (void)userActivityWillSave:(id)arg1;

@end
