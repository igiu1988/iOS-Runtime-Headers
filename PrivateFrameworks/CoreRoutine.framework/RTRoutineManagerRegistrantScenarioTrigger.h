/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant {
    NSMutableDictionary * __scenarioTriggerHandlers;
    unsigned long long  _monitoredScenarioTriggerTypes;
    bool  _registered;
}

@property (nonatomic, readonly) unsigned long long monitoredScenarioTriggerTypes;
@property (nonatomic, readonly) bool registered;
@property (nonatomic, readonly, copy) NSDictionary *scenarioTriggerHandlers;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)monitoredScenarioTriggerTypes;
- (void)onScenarioTriggers:(id)arg1 error:(id)arg2;
- (bool)registered;
- (id)scenarioTriggerHandlers;
- (id)startMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)arg1;

@end
