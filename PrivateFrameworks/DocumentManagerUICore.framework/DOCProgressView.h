/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCProgressView : UIView {
    UIColor * _activeStrokeColor;
    bool  _canShowStopButton;
    DOCDeterminateProgressRingView * _determinateProgressRingView;
    DOCGhostRingView * _ghostRingView;
    bool  _graduallyIncreasingProgress;
    UIColor * _inactiveStrokeColor;
    DOCIndeterminateProgressRingView * _indeterminateProgressRingView;
    NSProgress * _observedProgress;
    NSOperationQueue * _pendingAnimationQueue;
    double  _progress;
}

@property (nonatomic, retain) UIColor *activeStrokeColor;
@property (nonatomic) bool canShowStopButton;
@property (nonatomic, retain) DOCDeterminateProgressRingView *determinateProgressRingView;
@property (nonatomic, retain) DOCGhostRingView *ghostRingView;
@property (nonatomic, retain) UIColor *inactiveStrokeColor;
@property (nonatomic, retain) DOCIndeterminateProgressRingView *indeterminateProgressRingView;
@property (nonatomic, retain) NSProgress *observedProgress;

- (void).cxx_destruct;
- (void)_addToPendingAnimationQueue:(id /* block */)arg1;
- (void)_commonInit;
- (void)_setProgress:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateStatusPropertiesAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)activeStrokeColor;
- (void)animateToFullRingAndHideWithCompletion:(id /* block */)arg1;
- (void)beginGraduallyIncreasingProgress;
- (bool)canShowStopButton;
- (void)dealloc;
- (id)determinateProgressRingView;
- (void)fadeoutWithCompletion:(id /* block */)arg1;
- (id)ghostRingView;
- (id)inactiveStrokeColor;
- (id)indeterminateProgressRingView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedProgress;
- (void)setActiveStrokeColor:(id)arg1;
- (void)setCanShowStopButton:(bool)arg1;
- (void)setDeterminateProgressRingView:(id)arg1;
- (void)setGhostRingView:(id)arg1;
- (void)setInactiveStrokeColor:(id)arg1;
- (void)setIndeterminateProgressRingView:(id)arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setProgress:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
