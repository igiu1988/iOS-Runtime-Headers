/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate> {
    _UIPanOrFlickGestureRecognizer * _activePress;
    UITapGestureRecognizer * _activeTap;
    id  _deallocToken;
    _UIKeyboardTextSelectionGestureController * _owner;
    NSTimer * _touchPadTimer;
    id /* block */  _touchPadTimerCompletion;
    NSMapTable * _weakMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3;

- (void)_beginLongForcePressTimerForGesture:(id)arg1;
- (void)_cancelLongForcePressTimer;
- (void)_cancelTouchPadTimer;
- (void)_clearHiding;
- (void)_clearTouchPadCallback;
- (void)_configureLongPressRecognizer:(id)arg1;
- (void)_configureLongPressTapRecognizer:(id)arg1;
- (void)_configureOneFingerForcePressRecognizer:(id)arg1;
- (void)_configureTwoFingerPanGestureRecognizer:(id)arg1;
- (void)_configureTwoFingerTapGestureRecognizer:(id)arg1;
- (void)_didEndIndirectSelectionGesture:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(bool)arg3;
- (void)_logTapCounts:(id)arg1;
- (void)_longForcePressDetected:(id)arg1;
- (void)_prepareForGesture;
- (void)_startTouchPadTimerWithCompletion:(id /* block */)arg1;
- (void)_tidyUpGesture;
- (void)_willBeginIndirectSelectionGesture:(id)arg1;
- (struct CGPoint { double x1; double x2; })acceleratedTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 isActive:(bool)arg3;
- (void)beginCursorManipulationFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerLongPressWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (struct CGPoint { double x1; double x2; })boundedTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;
- (void)clearKeyboardTouchesForGesture:(id)arg1;
- (struct CGPoint { double x1; double x2; })cursorLocationForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)detach;
- (void)disableEnclosingScrollViewScrolling;
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;
- (void)endTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;
- (void)finishTwoFingerLongPressWithExecutionContext:(id)arg1;
- (bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 forForce:(bool)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;
- (id)gestures;
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;
- (void)hideInsideRecogniser:(id)arg1;
- (void)hideRecogniser:(id)arg1 forKey:(id)arg2;
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2;
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 withFlickDirection:(unsigned long long)arg3;
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 withFlickDirection:(unsigned long long)arg3;
- (id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3;
- (bool)isPlacedCarefully;
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (id)owner;
- (void)panningGesture:(id)arg1;
- (void)panningGestureTap:(id)arg1;
- (void)registerOwner:(id)arg1;
- (void)removeTemporaryGesture;
- (id)selectionController;
- (void)twoFingerLongPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2;
- (void)twoFingerTap:(id)arg1;
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateTwoFingerLongPressWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;

@end
