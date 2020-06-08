/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
 */

@interface STYDiagnosticsCollector : NSObject {
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _serialUtilityQueue;
    ABCStats * _stats;
    SDRDiagnosticReporter * _symptomsReporter;
}

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue;
@property (retain) ABCStats *stats;
@property (retain) SDRDiagnosticReporter *symptomsReporter;

+ (id)sharedDiagnosticsCollector;

- (void).cxx_destruct;
- (void)collectTailspinForScenarioReport:(id)arg1 tailspinFileDescriptor:(int)arg2 completionHandler:(id /* block */)arg3;
- (id)logger;
- (id)serialUtilityQueue;
- (void)setLogger:(id)arg1;
- (void)setSerialUtilityQueue:(id)arg1;
- (void)setStats:(id)arg1;
- (void)setSymptomsReporter:(id)arg1;
- (id)stats;
- (id)symptomsReporter;
- (void)tailspinCollectedForScenarioReport:(id)arg1 tailspinFilepath:(id)arg2 completionHandler:(id /* block */)arg3;

@end
