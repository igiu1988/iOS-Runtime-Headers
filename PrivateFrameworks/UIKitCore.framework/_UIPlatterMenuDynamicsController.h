/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPlatterMenuDynamicsController : NSObject <_UIPlatterMenuPanningTransformerDelegate> {
    UIDynamicAnimator * _animator;
    UIView * _containerView;
    <_UIPlatterMenuDynamicsControllerDelegate> * _delegate;
    long long  _didPresentCount;
    UIAttachmentBehavior * _gestureAttachmentBehavior;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchPoint;
    bool  _isCurrentlyUnderDirectManipulation;
    bool  _leadingSwipeActionViewSelected;
    double  _leadingSwipeEdgeMultiplier;
    _UIPlatterMenuSnapBehavior * _menuDismissedSnapBehavior;
    UIDynamicItemBehavior * _menuItemBehavior;
    _UIPlatterMenuSnapBehavior * _menuPresentedSnapBehavior;
    UIAttachmentBehavior * _menuVerticalLockAttachment;
    UIView * _menuView;
    UIDynamicItemBehavior * _noRotationBehavior;
    _UIDynamicItemObservingBehavior * _observingBehavior;
    _UIPlatterMenuPanningTransformer * _panningLockTransformer;
    <UIDynamicItem> * _platterItem;
    UIDynamicItemBehavior * _platterItemBehavior;
    UIAttachmentBehavior * _platterMenuAttachmentBehavior;
    UICollisionBehavior * _platterMenuCollisionBounds;
    UIAttachmentBehavior * _platterMenuSlidingAttachmentBehavior;
    _UIPlatterMenuSnapBehavior * _platterSnapBehavior;
    UIView * _platterView;
    long long  _state;
    _UIStatesFeedbackGenerator * _swipeFeedbackGenerator;
    bool  _trailingSwipeActionViewSelected;
    double  _trailingSwipeEdgeMultiplier;
}

@property (nonatomic, retain) UIDynamicAnimator *animator;
@property (nonatomic) UIView *containerView;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } currentTranslation;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } currentVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPlatterMenuDynamicsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long didPresentCount;
@property (nonatomic, retain) UIAttachmentBehavior *gestureAttachmentBehavior;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialTouchPoint;
@property (nonatomic) bool isCurrentlyUnderDirectManipulation;
@property (nonatomic) bool leadingSwipeActionViewSelected;
@property (nonatomic) double leadingSwipeEdgeMultiplier;
@property (nonatomic, retain) _UIPlatterMenuSnapBehavior *menuDismissedSnapBehavior;
@property (nonatomic, retain) UIDynamicItemBehavior *menuItemBehavior;
@property (nonatomic, retain) _UIPlatterMenuSnapBehavior *menuPresentedSnapBehavior;
@property (nonatomic, retain) UIAttachmentBehavior *menuVerticalLockAttachment;
@property (nonatomic) UIView *menuView;
@property (nonatomic, retain) UIDynamicItemBehavior *noRotationBehavior;
@property (nonatomic, retain) _UIDynamicItemObservingBehavior *observingBehavior;
@property (nonatomic, retain) _UIPlatterMenuPanningTransformer *panningLockTransformer;
@property (nonatomic) <UIDynamicItem> *platterItem;
@property (nonatomic, retain) UIDynamicItemBehavior *platterItemBehavior;
@property (nonatomic, retain) UIAttachmentBehavior *platterMenuAttachmentBehavior;
@property (nonatomic, retain) UICollisionBehavior *platterMenuCollisionBounds;
@property (nonatomic, retain) UIAttachmentBehavior *platterMenuSlidingAttachmentBehavior;
@property (nonatomic, retain) _UIPlatterMenuSnapBehavior *platterSnapBehavior;
@property (nonatomic) UIView *platterView;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;
@property (nonatomic) bool trailingSwipeActionViewSelected;
@property (nonatomic) double trailingSwipeEdgeMultiplier;

- (void).cxx_destruct;
- (void)_activateFeedbackIfNeeded;
- (void)_animateToPlatterDismissedWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_animateToPlatterPresentedWithVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)_beginInYLockedStatePresented;
- (void)_configureAnimator;
- (void)_configureFeedbackGenerator;
- (void)_deactivateFeedbackIfNeeded;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(bool)arg1 finalSelectionState:(bool)arg2;
- (bool)_isPlatterInYLockedPosition;
- (void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
- (long long)_stateForPosition:(struct CGPoint { double x1; double x2; })arg1 offset:(struct CGVector { double x1; double x2; })arg2 velocity:(struct CGVector { double x1; double x2; })arg3;
- (void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)addBehaviorIfNotPresent:(id)arg1;
- (id)animator;
- (void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(long long)arg3;
- (struct CGPoint { double x1; double x2; })centerForCurrentPlatterPosition;
- (struct CGPoint { double x1; double x2; })centerForMenuPresentedRelativeToCurrentPlatter;
- (id)containerView;
- (struct CGVector { double x1; double x2; })currentTranslation;
- (struct CGVector { double x1; double x2; })currentVelocity;
- (void)dealloc;
- (id)delegate;
- (void)didBeginPanningWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)didEndPanningWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)didPanWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)didPresentCount;
- (id)gestureAttachmentBehavior;
- (bool)hasBeenPresented;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4;
- (struct CGPoint { double x1; double x2; })initialTouchPoint;
- (bool)isCurrentlyUnderDirectManipulation;
- (bool)isDefaultAnimatorBehavior:(id)arg1;
- (bool)isMenuPresented;
- (bool)isMenuPresenting;
- (bool)isSelectingSwipeAction;
- (bool)leadingSwipeActionViewSelected;
- (double)leadingSwipeEdgeMultiplier;
- (void)lockIntoYAxis;
- (struct CGPoint { double x1; double x2; })menuCenter;
- (id)menuDismissedSnapBehavior;
- (id)menuItemBehavior;
- (id)menuPresentedSnapBehavior;
- (id)menuVerticalLockAttachment;
- (id)menuView;
- (struct CGVector { double x1; double x2; })modifiedOffsetForPosition:(struct CGPoint { double x1; double x2; })arg1 offset:(struct CGVector { double x1; double x2; })arg2 touchPosition:(struct CGPoint { double x1; double x2; })arg3 axisLock:(int)arg4;
- (id)noRotationBehavior;
- (id)observingBehavior;
- (id)panningLockTransformer;
- (void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(struct CGPoint { double x1; double x2; })arg2 offsetFromPrevious:(struct CGVector { double x1; double x2; })arg3 velocity:(struct CGVector { double x1; double x2; })arg4;
- (void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)panningTransformer:(id)arg1 didPanToTransformedPosition:(struct CGPoint { double x1; double x2; })arg2 offsetFromPrevious:(struct CGVector { double x1; double x2; })arg3 touchPosition:(struct CGPoint { double x1; double x2; })arg4 velocity:(struct CGVector { double x1; double x2; })arg5 didChangeAxis:(bool)arg6 axisLock:(int)arg7;
- (void)performActionsAndEnterState:(long long)arg1;
- (void)performActionsAndEnterState:(long long)arg1 velocity:(struct CGVector { double x1; double x2; })arg2 underDirectManipulation:(bool)arg3;
- (struct CGPoint { double x1; double x2; })platterCenter;
- (id)platterItem;
- (id)platterItemBehavior;
- (id)platterMenuAttachmentBehavior;
- (id)platterMenuCollisionBounds;
- (id)platterMenuSlidingAttachmentBehavior;
- (bool)platterPanned;
- (id)platterSnapBehavior;
- (id)platterView;
- (void)resetAnimator;
- (void)resetAnimatorToDefaultBehaviors;
- (void)setAnimator:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidPresentCount:(long long)arg1;
- (void)setGestureAttachmentBehavior:(id)arg1;
- (void)setInitialTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIsCurrentlyUnderDirectManipulation:(bool)arg1;
- (void)setLeadingSwipeActionViewSelected:(bool)arg1;
- (void)setLeadingSwipeEdgeMultiplier:(double)arg1;
- (void)setMenuDismissedSnapBehavior:(id)arg1;
- (void)setMenuItemBehavior:(id)arg1;
- (void)setMenuPresentedSnapBehavior:(id)arg1;
- (void)setMenuVerticalLockAttachment:(id)arg1;
- (void)setMenuView:(id)arg1;
- (void)setNoRotationBehavior:(id)arg1;
- (void)setObservingBehavior:(id)arg1;
- (void)setPanningLockTransformer:(id)arg1;
- (void)setPlatterItem:(id)arg1;
- (void)setPlatterItemBehavior:(id)arg1;
- (void)setPlatterMenuAttachmentBehavior:(id)arg1;
- (void)setPlatterMenuCollisionBounds:(id)arg1;
- (void)setPlatterMenuSlidingAttachmentBehavior:(id)arg1;
- (void)setPlatterSnapBehavior:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSwipeFeedbackGenerator:(id)arg1;
- (void)setTrailingSwipeActionViewSelected:(bool)arg1;
- (void)setTrailingSwipeEdgeMultiplier:(double)arg1;
- (long long)state;
- (void)stopObservingBehavior;
- (id)swipeFeedbackGenerator;
- (void)toggleAnimatorDebugState;
- (bool)trailingSwipeActionViewSelected;
- (double)trailingSwipeEdgeMultiplier;

@end
