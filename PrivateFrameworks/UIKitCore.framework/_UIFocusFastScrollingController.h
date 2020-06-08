/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingController : NSObject {
    double  _accelerationLastSwipeTime;
    double  _accelerationMultiplier;
    double  _accelerationStartMultiplier;
    unsigned long long  _accelerationSwipeCount;
    unsigned long long  _allowedHeadings;
    _UIDynamicAnimationGroup * _animationGroup;
    _UIDynamicValueAnimation * _animationX;
    _UIDynamicValueAnimation * _animationY;
    NSTimer * _cooldownTimer;
    NSArray * _displayedEntries;
    struct { 
        unsigned int isDragging : 1; 
        unsigned int isDecelerating : 1; 
        unsigned int isInTrackingMode : 1; 
        unsigned int isIndicatingDestination : 1; 
        unsigned int isAttemptingToStop : 1; 
        unsigned int isCancellingScrollAnimation : 1; 
    }  _flags;
    unsigned long long  _heading;
    long long  _highlightedIndexEntry;
    _UIFocusFastScrollingIndexBarView * _indexBarView;
    NSArray * _indexEntries;
    double  _initialEdgeDigitizerLocation;
    long long  _initialIndexEntry;
    struct { 
        double _x; 
        double _y; 
    }  _initialVelocity;
    _UIFocusEngineJoystickGestureRecognizer * _joystickGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetWhenPanStarted;
    UIPanGestureRecognizer * _panGesture;
    CADisplayLink * _pressAnimationDisplayLink;
    struct { 
        double _x; 
        double _y; 
    }  _pressAnimationVelocity;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _pressForce;
    NSArray * _pressGestures;
    struct { 
        double _x; 
        double _y; 
    }  _previousPanVelocity;
    double  _scrollHighlight;
    UIScrollView * _scrollView;
    long long  _style;
}

@property (getter=isDecelerating, nonatomic, readonly) bool decelerating;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (nonatomic, readonly) _UIFocusFastScrollingIndexBarEntry *highlightedEntry;
@property (nonatomic, readonly) _UIFocusFastScrollingIndexBarView *indexBarView;
@property (nonatomic, copy) NSArray *indexEntries;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) long long scrollingStyle;
@property (getter=isScrollingX, nonatomic, readonly) bool scrollingX;
@property (getter=isScrollingY, nonatomic, readonly) bool scrollingY;

+ (id)controllerWithRequest:(id)arg1;
+ (id)indexBarViewForScrollView:(id)arg1;
+ (long long)indexOfEntryNearestToScrollViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDisplayedEntries:(id)arg2;

- (void).cxx_destruct;
- (void)_attemptToStop;
- (void)_attemptToStopDueToExternalEvent:(bool)arg1;
- (void)_beginCooldownWithDuration:(double)arg1;
- (void)_beginDeceleratingAfterPressGesture;
- (void)_beginInitialSwipeDeceleration;
- (void)_cancelCooldown;
- (void)_configureWithRequest:(id)arg1;
- (void)_cooldownEnded;
- (struct { double x1; double x2; })_currentScrollViewDecelerationVelocity;
- (void)_endDraggingWithFinalVelocity:(struct { double x1; double x2; })arg1;
- (void)_finishDecelerating;
- (void)_handleAnimationGroupScrollingAnimations;
- (void)_handleAnimationGroupScrollingCompletionWithInitialVelocity:(struct CGPoint { double x1; double x2; })arg1 bounces:(bool)arg2;
- (void)_handleEdgePanBegin:(id)arg1;
- (void)_handleEdgePanChanged:(id)arg1;
- (void)_handleEdgePanEnd:(id)arg1;
- (void)_handleJoystickGesture:(id)arg1;
- (void)_handlePanBegin:(id)arg1;
- (void)_handlePanChanged:(id)arg1;
- (void)_handlePanEnd:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_handleSwipePanBegin:(id)arg1;
- (void)_handleSwipePanChanged:(id)arg1;
- (void)_handleSwipePanEnd:(id)arg1;
- (void)_hideDestinationIndicators;
- (void)_interpretDigitzerLocation:(struct CGPoint { double x1; double x2; })arg1 toFindEntryIndex:(long long*)arg2 deflection:(double*)arg3;
- (void)_pressAnimationHeartbeat:(id)arg1;
- (void)_resetAllPressGestures;
- (void)_resetSwipeAcceleration;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 withVelocity:(struct { double x1; double x2; })arg2;
- (bool)_shouldShowEntriesInIndexBar;
- (void)_showDestinationIndicators;
- (void)_start;
- (void)_startEdgeGesture;
- (void)_startPressDisplayLink;
- (void)_startPressTrackingWithVelocity:(struct { double x1; double x2; })arg1;
- (void)_startScrollingAnimationWithVelocity:(struct { double x1; double x2; })arg1 friction:(struct CGPoint { double x1; double x2; })arg2;
- (void)_startTrackingModeIfNecessary;
- (void)_stopDueToExternalEvent;
- (void)_stopPressDisplayLink;
- (void)_stopScrollingAnimation;
- (void)_stopTrackingMode;
- (void)_updateEdgeGesture;
- (void)_updateIndexBarIndicator;
- (void)_updateSoftFocusForVelocity:(struct { double x1; double x2; })arg1;
- (id)highlightedEntry;
- (id)indexBarView;
- (id)indexEntries;
- (id)initWithRequest:(id)arg1;
- (bool)isDecelerating;
- (bool)isDragging;
- (bool)isScrollingX;
- (bool)isScrollingY;
- (id)scrollView;
- (long long)scrollingStyle;
- (void)setIndexEntries:(id)arg1;
- (void)start;
- (void)stop;

@end
