/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPearlPasscodeController : PSUIBiometricController <BKUIPearlEnrollControllerDelegate, LAUIDelegate> {
    PSPearlAttentionGroupController * _attentionGroupController;
    LAContext * _authContext;
    PSEnrollmentNavigationController * _enrollFaceController;
    PSSpecifier * _enrollFaceSpecifier;
    OBPrivacyPresenter * _presenter;
}

@property (nonatomic, retain) PSPearlAttentionGroupController *attentionGroupController;
@property (nonatomic, retain) LAContext *authContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSEnrollmentNavigationController *enrollFaceController;
@property (nonatomic, retain) PSSpecifier *enrollFaceSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBPrivacyPresenter *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attentionGroupController;
- (id)authContext;
- (void)backgrounded:(id)arg1;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (void)dealloc;
- (void)deleteAllIdentities;
- (void)enroll:(id)arg1;
- (void)enrollBiometric;
- (id)enrollFaceController;
- (id)enrollFaceSpecifier;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)headerForUseBiometricSection;
- (id)init;
- (bool)isEnrolled;
- (bool)isEnrollmentAvailable;
- (unsigned long long)numberOfAppsUsingPearl;
- (id)numberOfAppsUsingPearlDescription:(id)arg1;
- (id)passcodeController;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (id)pearlEnrollSpecifiers;
- (void)pearlLearnMoreTapped:(id)arg1;
- (void)popPearlEnrollmentController;
- (id)presenter;
- (void)setAttentionGroupController:(id)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setBiometricUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEnrollFaceController:(id)arg1;
- (void)setEnrollFaceSpecifier:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
