/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISignInViewController : UIViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    AAUIHeaderView * _accountsHeaderView;
    long long  _akServiceType;
    bool  _allowsAccountCreation;
    NSArray * _compactConstraints;
    <AAUISignInViewControllerDelegate> * _delegate;
    NSArray * _expandedConstraints;
    UITableViewCell * _passwordCell;
    id /* block */  _passwordHandler;
    bool  _shouldAnticipatePiggybacking;
    bool  _showServiceIcons;
    UITableViewHeaderFooterView * _tableFooterView;
    UITableViewHeaderFooterView * _tableHeaderView;
    UITableView * _tableView;
    UITableViewCell * _usernameCell;
}

@property (setter=_setAkServiceType:, nonatomic) long long _akServiceType;
@property (setter=_setShouldAnticipatePiggybacking:, nonatomic) bool _shouldAnticipatePiggybacking;
@property (nonatomic) bool allowsAccountCreation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISignInViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic) bool showServiceIcons;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) AAUIBuddyView *view;

+ (void)phoneNumberSupportedWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_accountsHeaderView;
- (void)_actionButtonSelected:(id)arg1;
- (long long)_akServiceType;
- (void)_attemptAuthentication;
- (void)_attemptAuthenticationWithContext:(id)arg1;
- (id)_authorizationValueForAuthenticationResults:(id)arg1;
- (void)_beginObservingKeyboardWillShowNotifications;
- (void)_beginObservingSizeCategoryNotification;
- (void)_beginObservingTextFieldDidChangeNotifications;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_cancelPasswordDelegateIfNecessary;
- (void)_delegate_signInViewControllerDidCancel;
- (void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1;
- (void)_endObservingKeyboardWillShowNotifications;
- (void)_endObservingSizeCategoryNotification;
- (void)_endObservingTextFieldDidChangeNotifications;
- (bool)_hasValidCredentials;
- (bool)_isGreenTeaCapable;
- (bool)_isPasswordFieldVisible;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_nextBarButtonItem;
- (void)_nextButtonSelected:(id)arg1;
- (id)_passwordCell;
- (id)_passwordFieldIndexPath;
- (void)_presentCreateAppleIDPane;
- (void)_presentForgotAppleIDPane;
- (void)_prewarmSignInFlowIfApplicable;
- (void)_repairCloudAccountWithAuthenticationResults:(id)arg1;
- (void)_setAkServiceType:(long long)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setPasswordFieldHidden:(bool)arg1;
- (void)_setShouldAnticipatePiggybacking:(bool)arg1;
- (void)_setUsernameCellWaiting:(bool)arg1;
- (bool)_shouldAnticipatePiggybacking;
- (id)_stringForFooter;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)_tableView;
- (void)_textFieldDidChange:(id)arg1;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)_updateContentInsetWithHeight:(double)arg1;
- (id)_usernameCell;
- (bool)allowsAccountCreation;
- (id)authenticationContext;
- (void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2;
- (void)context:(id)arg1 needsPasswordWithCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)messageLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)setAllowsAccountCreation:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowServiceIcons:(bool)arg1;
- (bool)showServiceIcons;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
