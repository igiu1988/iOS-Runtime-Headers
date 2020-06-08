/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPanelController : NSObject <UILayoutContainerViewDelegate> {
    bool  __changingViewControllerParentage;
    UIView * __contentView;
    UIView * __destTransitionView;
    bool  __hasUpdatedForTraitCollection;
    _UIPanelInternalState * __internalState;
    UISlidingBarState * __lastComputedPublicState;
    NSArray * __lastPossiblePublicStates;
    struct CGSize { 
        double width; 
        double height; 
    }  __lastViewSize;
    UIView * __leadingBorderView;
    bool  __needsFirstTimeUpdateForTraitCollection;
    _UIPanelInternalState * __previousInternalState;
    UIView * __sourceTransitionView;
    UIView * __trailingBorderView;
    UIView * _dimmingView;
    UIViewController * _owningViewController;
    struct { 
        unsigned int isUpdatingState : 1; 
        unsigned int needsDeferredUpdateWhileUpdatingState : 1; 
        unsigned int isPerformingDeferredUpdate : 1; 
        unsigned int nextLayoutIsForInitializingAnimation : 1; 
        unsigned int inWillTransitionToTraitCollection : 1; 
        unsigned int inViewWillTransitionToSize : 1; 
        unsigned int inViewWillTransitionToSizeRecursingToChildren : 1; 
        unsigned int viewsLocked : 1; 
        unsigned int takingDestinationSnapshot : 1; 
        unsigned int registeredForKeyboardNotifications : 1; 
        unsigned int borderViewsObservingViewBackgroundColor : 1; 
        unsigned int updateLayoutRequested : 1; 
    }  _panelControllerFlags;
    UILayoutContainerView * _view;
    NSMutableArray * _wrapperBlocksForNextUpdate;
}

@property (setter=_setChangingViewControllerParentage:, nonatomic) bool _changingViewControllerParentage;
@property (setter=_setContentView:, nonatomic, retain) UIView *_contentView;
@property (setter=_setDestinationTransitionView:, nonatomic, retain) UIView *_destTransitionView;
@property (setter=_setHasUpdatedForTraitCollection:, nonatomic) bool _hasUpdatedForTraitCollection;
@property (setter=_setInternalState:, nonatomic, retain) _UIPanelInternalState *_internalState;
@property (setter=_setLastComputedPublicState:, nonatomic, copy) UISlidingBarState *_lastComputedPublicState;
@property (setter=_setLastPossiblePublicStates:, nonatomic, copy) NSArray *_lastPossiblePublicStates;
@property (setter=_setLastViewSize:, nonatomic) struct CGSize { double x1; double x2; } _lastViewSize;
@property (setter=_setLeadingBorderView:, nonatomic, retain) UIView *_leadingBorderView;
@property (setter=_setNeedsFirstTimeUpdateForTraitCollection:, nonatomic) bool _needsFirstTimeUpdateForTraitCollection;
@property (setter=_setPreviousInternalState:, nonatomic, retain) _UIPanelInternalState *_previousInternalState;
@property (setter=_setSourceTransitionView:, nonatomic, retain) UIView *_sourceTransitionView;
@property (setter=_setTrailingBorderView:, nonatomic, retain) UIView *_trailingBorderView;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, readonly) long long collapsedState;
@property (nonatomic, readonly) UIViewController *collapsedViewController;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPanelControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *leadingViewController;
@property (nonatomic, retain) UIViewController *mainViewController;
@property (nonatomic) UIViewController *owningViewController;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *trailingViewController;
@property (nonatomic, retain) UILayoutContainerView *view;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_addIdentifiedChildViewController:(id)arg1;
- (void)_adjustForKeyboardInfo:(id)arg1;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3;
- (bool)_changingViewControllerParentage;
- (void)_collapseWithTransitionCoordinator:(id)arg1;
- (id)_contentView;
- (id)_createBorderView;
- (id)_destTransitionView;
- (void)_expandWithTransitionCoordinator:(id)arg1;
- (bool)_hasUpdatedForTraitCollection;
- (id)_internalState;
- (id)_lastComputedPublicState;
- (id)_lastPossiblePublicStates;
- (struct CGSize { double x1; double x2; })_lastViewSize;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (id)_leadingBorderView;
- (bool)_needsFirstTimeUpdateForTraitCollection;
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;
- (void)_performDeferredUpdate;
- (void)_performSingleDeferredUpdatePass;
- (void)_performWrappedUpdate:(id /* block */)arg1;
- (id)_previousInternalState;
- (void)_removeIdentifiedChildViewController:(id)arg1;
- (void)_setChangingViewControllerParentage:(bool)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setDestinationTransitionView:(id)arg1;
- (void)_setHasUpdatedForTraitCollection:(bool)arg1;
- (void)_setInternalState:(id)arg1;
- (void)_setLastComputedPublicState:(id)arg1;
- (void)_setLastPossiblePublicStates:(id)arg1;
- (void)_setLastViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLeadingBorderView:(id)arg1;
- (void)_setNeedsDeferredUpdate;
- (void)_setNeedsFirstTimeUpdateForTraitCollection:(bool)arg1;
- (void)_setNeedsLayoutAndPerformImmediately:(bool)arg1;
- (void)_setPreviousInternalState:(id)arg1;
- (void)_setSourceTransitionView:(id)arg1;
- (void)_setTrailingBorderView:(id)arg1;
- (id)_sourceTransitionView;
- (void)_stopObservingKeyboardNotifications;
- (id)_trailingBorderView;
- (void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_willCollapseWithNewTraitCollection:(id)arg1;
- (bool)_willExpandWithNewTraitCollection:(id)arg1;
- (void)addWrapperBlockForNextUpdate:(id /* block */)arg1;
- (id)allViewControllers;
- (void)animateToRequest:(id)arg1;
- (long long)collapsedState;
- (id)collapsedViewController;
- (id)configuration;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (id)dimmingView;
- (id)initWithOwningViewController:(id)arg1;
- (bool)isAnimating;
- (bool)isCollapsed;
- (id)leadingViewController;
- (void)loadView;
- (id)mainViewController;
- (id)owningViewController;
- (id)possibleStates;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setLeadingViewController:(id)arg1;
- (void)setMainViewController:(id)arg1;
- (void)setNeedsUpdate;
- (void)setOwningViewController:(id)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setTrailingViewController:(id)arg1;
- (void)setView:(id)arg1;
- (id)stateRequest;
- (id)trailingViewController;
- (id)view;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2 superBlock:(id /* block */)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(id /* block */)arg3;

@end
