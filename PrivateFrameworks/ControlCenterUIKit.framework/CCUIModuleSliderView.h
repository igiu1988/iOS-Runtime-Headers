/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIModuleSliderView : UIControl <CCUIContentClipping, CCUIContentModuleExpandedStateListener, CCUIContentModuleTopLevelGestureProvider, CCUIGroupRendering, UIGestureRecognizerDelegate> {
    CCUICAPackageView * _compensatingGlyphPackageView;
    double  _continuousSliderCornerRadius;
    UIView * _continuousValueBackgroundView;
    UIView * _continuousValueClippingView;
    _UIEdgeFeedbackGenerator * _edgeFeedbackGenerator;
    bool  _firstStepIsDisabled;
    bool  _firstStepIsOff;
    bool  _gestureStartedInside;
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    CCUICAPackageDescription * _glyphPackageDescription;
    CCUICAPackageView * _glyphPackageView;
    NSString * _glyphState;
    bool  _glyphVisible;
    bool  _interactiveWhenUnexpanded;
    unsigned long long  _numberOfSteps;
    float  _previousValue;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    NSArray * _separatorViews;
    double  _startingHeight;
    float  _startingValue;
    unsigned long long  _step;
    NSArray * _stepBackgroundViews;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _throttleUpdates;
    NSTimer * _updatesCommitTimer;
    float  _value;
    UIPanGestureRecognizer * _valueChangeGestureRecognizer;
}

@property (getter=isContentClippingRequired, nonatomic, readonly) bool contentClippingRequired;
@property (nonatomic) double continuousSliderCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstStepIsDisabled;
@property (nonatomic) bool firstStepIsOff;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, retain) NSString *glyphState;
@property (getter=isGlyphVisible, nonatomic) bool glyphVisible;
@property (getter=isGroupRenderingRequired, nonatomic, readonly) bool groupRenderingRequired;
@property (readonly) unsigned long long hash;
@property (getter=isInteractiveWhenUnexpanded, nonatomic) bool interactiveWhenUnexpanded;
@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic, readonly) CALayer *punchOutRootLayer;
@property (nonatomic) unsigned long long step;
@property (getter=isStepped, nonatomic, readonly) bool stepped;
@property (readonly) Class superclass;
@property (nonatomic) bool throttleUpdates;
@property (nonatomic, readonly) NSArray *topLevelBlockingGestureRecognizers;
@property (nonatomic, readonly) NSArray *topLevelGestureRecognizers;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_configureCompensatingGlyphPackageView:(id)arg1;
- (void)_configureGlyphPackageView:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (id)_continuousValueClippingView;
- (id)_createBackgroundViewForStep:(unsigned long long)arg1;
- (void)_createContinuousSliderClippingViewWithBackgroundView:(id)arg1;
- (id)_createSeparatorView;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (double)_fullStepHeight;
- (void)_handleValueChangeGestureRecognizer:(id)arg1;
- (void)_handleValueTapGestureRecognizer:(id)arg1;
- (double)_heightForStep:(unsigned long long)arg1;
- (void)_layoutContinuousValueView;
- (void)_layoutContinuousValueViewForValue:(float)arg1;
- (void)_layoutValueViews;
- (void)_layoutValueViewsForStepChange;
- (void)_layoutValueViewsForStepChange:(bool)arg1;
- (id)_newGlyphPackageView;
- (double)_sliderHeight;
- (double)_sliderHeightForValue:(float)arg1;
- (unsigned long long)_stepFromValue:(float)arg1;
- (unsigned long long)_stepFromValue:(float)arg1 avoidCurrentStep:(bool)arg2;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(bool)arg2;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(bool)arg2 toggleCurrentStep:(bool)arg3;
- (void)_updateValueForPanGestureRecognizer:(id)arg1 withAbsolutePosition:(bool)arg2 forContinuedGesture:(bool)arg3;
- (float)_valueForPanGestureRecognizer:(id)arg1 withAbsoluteReference:(bool)arg2;
- (float)_valueForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (float)_valueForTouchTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (float)_valueFromStep:(unsigned long long)arg1;
- (void)contentModuleWillTransitionToExpandedContentMode:(bool)arg1;
- (double)continuousSliderCornerRadius;
- (bool)firstStepIsDisabled;
- (bool)firstStepIsOff;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (id)glyphState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContentClippingRequired;
- (bool)isGlyphVisible;
- (bool)isGroupRenderingRequired;
- (bool)isInteractiveWhenUnexpanded;
- (bool)isStepped;
- (void)layoutSubviews;
- (unsigned long long)numberOfSteps;
- (id)punchOutRootLayer;
- (void)setContinuousSliderCornerRadius:(double)arg1;
- (void)setFirstStepIsDisabled:(bool)arg1;
- (void)setFirstStepIsOff:(bool)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setGlyphVisible:(bool)arg1;
- (void)setInteractiveWhenUnexpanded:(bool)arg1;
- (void)setNumberOfSteps:(unsigned long long)arg1;
- (void)setStep:(unsigned long long)arg1;
- (void)setThrottleUpdates:(bool)arg1;
- (void)setValue:(float)arg1;
- (unsigned long long)step;
- (bool)throttleUpdates;
- (id)topLevelBlockingGestureRecognizers;
- (id)topLevelGestureRecognizers;
- (float)value;

@end
