/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKDevicePearl : BKDevice {
    <BKDevicePearlDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <BKDevicePearlDelegate> *delegate;
@property (nonatomic, readonly) long long pearlState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (bool)deviceAvailableWithError:(id*)arg1;

- (void).cxx_destruct;
- (bool)clearIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)createEnrollOperationWithError:(id*)arg1;
- (id)createMatchOperationWithError:(id*)arg1;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (id)delegate;
- (long long)deviceEventWithStatus:(unsigned int)arg1;
- (long long)deviceStateWithStatus:(unsigned int)arg1;
- (bool)disableFieldDiagnosticsWithError:(id*)arg1;
- (id)dispatchQueue;
- (id)eligibleForAugmentation:(id)arg1 error:(id*)arg2;
- (bool)enableFieldDiagnosticsWithTatsuManifest:(id)arg1 error:(id*)arg2;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id*)arg1;
- (id)fieldDiagnosticsRemainingTimeWithError:(id*)arg1;
- (id)fieldDiagnosticsTatsuManifestWithError:(id*)arg1;
- (id)generateFieldDiagnosticsNonceWithError:(id*)arg1;
- (bool)isDelegate;
- (long long)pearlState;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id*)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;

@end
