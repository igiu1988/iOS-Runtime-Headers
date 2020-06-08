/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

@interface APUIIntentHandlingViewController : UIViewController <APUIWFLIntentControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    ATXAction * _atxAction;
    CRKCardPresentation * _cardPresentation;
    UIViewController<CRKCardViewControlling> * _currentCardViewController;
    <APUIIntentHandlingViewControllerDelegate> * _delegate;
    long long  _executionContext;
    INIntent * _intent;
    bool  _intentIsDirty;
    double  _preferredPlatterContentHeight;
    bool  _suppressSpinner;
    APUIWFLIntentController * _wfIntentController;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) ATXAction *atxAction;
@property (nonatomic, retain) CRKCardPresentation *cardPresentation;
@property (nonatomic, readonly) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (nonatomic, retain) UIViewController<CRKCardViewControlling> *currentCardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APUIIntentHandlingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long executionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic) bool intentIsDirty;
@property (nonatomic) double preferredPlatterContentHeight;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressSpinner;
@property (nonatomic, retain) APUIWFLIntentController *wfIntentController;

- (void).cxx_destruct;
- (void)_constructCardViewControllerForInteraction:(id)arg1 completion:(id /* block */)arg2;
- (id)_contentForCardRequestWithInteraction:(id)arg1;
- (void)_createOrUpdateCardViewControllerForInteraction:(id)arg1 completion:(id /* block */)arg2;
- (void)_installChildViewController:(id)arg1;
- (void)_setWorkflowControllerExecutionContext;
- (void)_setupProgressIndicator;
- (void)_updateCardViewControllerForInteraction:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)activityIndicatorView;
- (id)atxAction;
- (void)beginRunningIntent;
- (id)cardPresentation;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (id)cardViewControllerDelegate;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)confirmationGranted:(bool)arg1;
- (id)currentCardViewController;
- (id)delegate;
- (long long)executionContext;
- (id)initWithIntent:(id)arg1;
- (id)intent;
- (void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
- (void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
- (void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(id /* block */)arg3;
- (bool)intentController:(id)arg1 shouldRequireConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)intentControllerDidFailAuthorizationCheck:(id)arg1;
- (bool)intentIsDirty;
- (void)launchAppWithCompletionHandler:(id /* block */)arg1;
- (double)preferredPlatterContentHeight;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAtxAction:(id)arg1;
- (void)setCardPresentation:(id)arg1;
- (void)setCurrentCardViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionContext:(long long)arg1;
- (void)setIntent:(id)arg1;
- (void)setIntentIsDirty:(bool)arg1;
- (void)setPreferredPlatterContentHeight:(double)arg1;
- (void)setPreferredPlatterContentHeight:(double)arg1 notifyDelegate:(bool)arg2;
- (void)setSuppressSpinner:(bool)arg1;
- (void)setWfIntentController:(id)arg1;
- (bool)suppressSpinner;
- (id)titleForConfirmAction;
- (void)viewDidLoad;
- (id)wfIntentController;

@end
