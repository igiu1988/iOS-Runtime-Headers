/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusEventRecognizer : NSObject <UIGestureRecognizerDelegate, _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusFastScrollingRecognizerDelegate> {
    CARInputDeviceTouchpad * _currentCarTouchpad;
    <_UIFocusEventRecognizerDelegate> * _delegate;
    bool  _enabled;
    _UIFocusFastScrollingRecognizer * _fastScrollingRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstMomentumTouchPoint;
    struct { 
        unsigned int isEligibleToCrossSpeedBump : 1; 
        unsigned int isContinuingTouchWithMomentum : 1; 
        unsigned int isPerformingJoystickRollback : 1; 
        unsigned int isJoystickInRepeatMode : 1; 
        unsigned int isPendingJoystickRepeat : 1; 
        unsigned int isFastScrolling : 1; 
        unsigned int shouldApplyAcceleration : 1; 
    }  _flags;
    unsigned long long  _focusUpdateCountSinceLastPanBegan;
    unsigned long long  _inputType;
    CADisplayLink * _joystickFocusDirectionDisplayLink;
    _UIFocusEngineJoystickGestureRecognizer * _joystickGestureRecognizer;
    NSTimer * _joystickModeExitTimer;
    NSTimer * _joystickModeRepeatTimer;
    long long  _joystickRepeatCount;
    unsigned long long  _joystickRepeatingHeading;
    double  _lastEdgeScrollEdgeValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastKnownTouchPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastMomentumTouchPoint;
    UIScrollView * _lastScrolledScroll;
    CADisplayLink * _momentumDisplayLink;
    double  _momentumFriction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _momentumVelocity;
    _UIFocusMotionEffectsController * _motionEffectsController;
    UIMoveEvent * _moveEvent;
    UIView * _owningView;
    _UIFocusEnginePanGestureRecognizer * _panGestureRecognizer;
    _UIFocusMovementInfo * _previousJoystickFocusMovementInfo;
    double  _previousJoystickFocusMovementTime;
    double  _previousJoystickRegionEntryTime;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _progressAccumulator;
    NSArray * _remoteGestures;
    _UIFocusPressGestureRecognizer * _selectGestureRecognizer;
    CARSessionStatus * _sessionStatus;
    bool  _supportsFastScrolling;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchBeganPoint;
    UIView * _viewForTouchDeferredFocus;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIFocusEventRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=_motionEffectsController, nonatomic, readonly) _UIFocusMotionEffectsController *motionEffectsController;
@property (getter=_moveEvent, setter=_setMoveEvent:, nonatomic, retain) UIMoveEvent *moveEvent;
@property (nonatomic, readonly) UIView *owningView;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsFastScrolling;
@property (nonatomic) UIView *viewForTouchDeferredFocus;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_continueTouchWithMomentum;
- (void)_createFastScrollingRecognizerIfNeeded;
- (bool)_didRecognizeFocusMovementRequest:(id)arg1;
- (void)_exitJoystickModeForReal:(id)arg1;
- (void)_fastScrollingBeganInScrollView:(id)arg1;
- (void)_fastScrollingEnded;
- (id)_focusMovementForJoystickPosition:(struct CGPoint { double x1; double x2; })arg1 usingMinimumRadius:(double)arg2 focusMovementStyle:(long long)arg3;
- (id)_focusMovementSystem;
- (void)_focusSystemEnabledStateDidChange:(id)arg1;
- (double)_frictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2 slope:(double)arg3 shortDistance:(double)arg4 longDistance:(double)arg5;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleButtonGesture:(id)arg1;
- (void)_handleJoystickGesture:(id)arg1;
- (void)_handleJoystickRepeatMode:(id)arg1;
- (void)_handleJoystickTiltMode:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleSelectGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (unsigned long long)_headingForJoystickPosition:(struct CGPoint { double x1; double x2; })arg1 usingMinimumRadius:(double)arg2;
- (double)_horizontalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2;
- (bool)_joystickAttemptFocusMovementWithRequest:(id)arg1;
- (void)_joystickDisplayLinkHeartbeat:(id)arg1;
- (bool)_joystickFocusMovement:(id)arg1 shouldBeConsideredEqualToFocusMovement:(id)arg2;
- (void)_joystickGestureBegan:(id)arg1;
- (void)_joystickGestureEnded:(id)arg1;
- (void)_joystickGestureUpdated:(id)arg1;
- (void)_joystickPerformRepeat:(id)arg1;
- (double)_joystickRepeatDurationForTimeInMovementZone:(double)arg1;
- (struct CGVector { double x1; double x2; })_joystickVelocityForHeading:(unsigned long long)arg1;
- (void)_momentumHeartbeat:(id)arg1;
- (id)_motionEffectsController;
- (id)_moveEvent;
- (bool)_moveInDirection:(unsigned long long)arg1;
- (bool)_moveWithEvent:(id)arg1;
- (void)_panGestureEnd:(id)arg1;
- (void)_panGestureStart:(id)arg1;
- (void)_recordMomentumForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_removeGestureRecognizers;
- (void)_resetJoystick;
- (void)_resetMomentum;
- (void)_resetMotionEffects;
- (void)_resetPanGestureState;
- (void)_resetProgressAccumulatorWithRequest:(id)arg1;
- (void)_sendGestureBeginNotification;
- (void)_sendMomentumEndNotificationsAndAnimateRollback:(bool)arg1;
- (void)_setMoveEvent:(id)arg1;
- (void)_setSupportsFastScrolling:(bool)arg1;
- (bool)_shouldAcceptInputType:(unsigned long long)arg1;
- (bool)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
- (void)_stopMomentumAndPerformRollback;
- (int)_touchRegionForDigitizerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_touchSensitivityForItem:(id)arg1;
- (void)_uiktest_handlePanGesture:(id)arg1;
- (id)_uiktest_panGestureRecognizer;
- (void)_uiktest_setPanGestureRecognizer:(id)arg1;
- (void)_updatePanLocation:(struct CGPoint { double x1; double x2; })arg1 reportedVelocity:(struct CGVector { double x1; double x2; })arg2;
- (double)_verticalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (void)fastScrollingRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2;
- (bool)focusEnginePanGestureRecognizerShouldRecognizeImmediately:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithOwningView:(id)arg1;
- (bool)isEnabled;
- (id)owningView;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSupportsFastScrolling:(bool)arg1;
- (void)setViewForTouchDeferredFocus:(id)arg1;
- (bool)supportsFastScrolling;
- (id)viewForTouchDeferredFocus;

@end
