/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STPINListViewController : STListViewController <STRestrictionsPINControllerDelegate> {
    NSObject<STRootViewModelCoordinator> * _coordinator;
    PSSpecifier * _showingPinSpecifier;
    id  _showingPinTarget;
}

@property (nonatomic, retain) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSpecifier *showingPinSpecifier;
@property (nonatomic, retain) id showingPinTarget;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coordinator;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAcceptRemovePIN;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)initWithRootViewModelCoordinator:(id)arg1;
- (void)restoreSpecifierTarget;
- (void)setCoordinator:(id)arg1;
- (void)setShowingPinSpecifier:(id)arg1;
- (void)setShowingPinTarget:(id)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (bool)shouldShowPINSheetForSpecifier:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (id)showingPinSpecifier;
- (id)showingPinTarget;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)validatePIN:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
