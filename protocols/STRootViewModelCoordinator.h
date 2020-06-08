/* Generated by RuntimeBrowser.
 */

@protocol STRootViewModelCoordinator <NSObject>

@required

- (NSObject<STContentPrivacyViewModelCoordinator> *)contentPrivacyCoordinator;
- (id)coordinatorForChild:(STUser *)arg1;
- (void)enableScreenTimeWithPIN:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)hasAlreadyEnteredPINForSession;
- (bool)hasShownMiniBuddy;
- (bool)isPasscodeEnabled;
- (void)setHasAlreadyEnteredPINForSession:(bool)arg1;
- (void)setHasShownMiniBuddy:(bool)arg1;
- (void)setPIN:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setScreenTimeEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setScreenTimeSyncingEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setShareWebUsageEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<STTimeAllowancesViewModelCoordinator> *)timeAllowancesCoordinator;
- (NSObject<STUsageDetailsViewModelCoordinator> *)usageDetailsCoordinator;
- (bool)validatePIN:(NSString *)arg1;
- (STRootViewModel *)viewModel;

@end
