/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMViewfinderView : UIView <CAMBadgeViewDelegate, CAMInstructionLabelDelegate> {
    CAMHDRBadge * _HDRBadge;
    UIView * __bottomBarExtensionView;
    CAMViewfinderFlipTransition * __flipTransition;
    CAMViewfinderOpenAndCloseTransition * __openAndCloseTransition;
    CAMPreviewContainerMaskingView * __previewContainerMaskingView;
    CAMPreviewContainerView * __previewContainerView;
    UIView * __topBarExtensionView;
    bool  _automaticallyAdjustsTopBarOrientation;
    CAMBottomBar * _bottomBar;
    CAMBurstIndicatorView * _burstIndicatorView;
    long long  _desiredAspectRatio;
    CAMDisabledModeOverlayView * _disabledModeOverlayView;
    CAMElapsedTimeView * _elapsedTimeView;
    CAMFilterNameBadge * _filterNameBadge;
    CAMFlashBadge * _flashBadge;
    CAMFlipButton * _flipButton;
    CAMFocusLockBadge * _focusAndExposureLockBadge;
    CAMFramerateIndicatorView * _framerateIndicatorView;
    long long  _layoutStyle;
    CAMLightingControl * _lightingControl;
    CAMLightingNameBadge * _lightingNameBadge;
    CAMLivePhotoBadge * _livePhotoBadge;
    long long  _maskingAspectRatio;
    long long  _orientation;
    CAMPanoramaView * _panoramaView;
    CAMPortraitModeDescriptionOverlayView * _portraitModeDescriptionOverlayView;
    CAMPortraitModeInstructionLabel * _portraitModeInstructionLabel;
    CAMPreviewView * _previewView;
    long long  _previewViewOrientation;
    CAMQRCodeDescriptionOverlayView * _qrCodeDescriptionOverlayView;
    CAMQRCodeInstructionLabel * _qrCodeInstructionLabel;
    CAMShallowDepthOfFieldBadge * _shallowDepthOfFieldBadge;
    CUShutterButton * _shutterButton;
    CAMShutterIndicatorView * _shutterIndicatorView;
    CAMTimerIndicatorView * _timerIndicatorView;
    CAMTopBar * _topBar;
    bool  _useCreativeControls;
    <CAMControlVisibilityDelegate> * _visibilityDelegate;
    NSArray * _visibleTopBadges;
    CAMZoomControl * _zoomControl;
    CAMZoomSlider * _zoomSlider;
}

@property (nonatomic, retain) CAMHDRBadge *HDRBadge;
@property (setter=_setBottomBarExtensionView:, nonatomic, retain) UIView *_bottomBarExtensionView;
@property (setter=_setFlipTransition:, nonatomic, retain) CAMViewfinderFlipTransition *_flipTransition;
@property (setter=_setOpenAndCloseTransition:, nonatomic, retain) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition;
@property (nonatomic, readonly) CAMPreviewContainerMaskingView *_previewContainerMaskingView;
@property (nonatomic, readonly) CAMPreviewContainerView *_previewContainerView;
@property (setter=_setTopBarExtensionView:, nonatomic, retain) UIView *_topBarExtensionView;
@property (nonatomic) bool automaticallyAdjustsTopBarOrientation;
@property (nonatomic, retain) CAMBottomBar *bottomBar;
@property (nonatomic, retain) CAMBurstIndicatorView *burstIndicatorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long desiredAspectRatio;
@property (nonatomic, retain) CAMDisabledModeOverlayView *disabledModeOverlayView;
@property (nonatomic, retain) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic, retain) CAMFilterNameBadge *filterNameBadge;
@property (nonatomic, retain) CAMFlashBadge *flashBadge;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (nonatomic, retain) CAMFocusLockBadge *focusAndExposureLockBadge;
@property (nonatomic, retain) CAMFramerateIndicatorView *framerateIndicatorView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, retain) CAMLightingControl *lightingControl;
@property (nonatomic, retain) CAMLightingNameBadge *lightingNameBadge;
@property (nonatomic, retain) CAMLivePhotoBadge *livePhotoBadge;
@property (nonatomic) long long maskingAspectRatio;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) CAMPanoramaView *panoramaView;
@property (nonatomic, retain) CAMPortraitModeDescriptionOverlayView *portraitModeDescriptionOverlayView;
@property (nonatomic, retain) CAMPortraitModeInstructionLabel *portraitModeInstructionLabel;
@property (nonatomic, retain) CAMPreviewView *previewView;
@property (nonatomic) long long previewViewOrientation;
@property (nonatomic, retain) CAMQRCodeDescriptionOverlayView *qrCodeDescriptionOverlayView;
@property (nonatomic, retain) CAMQRCodeInstructionLabel *qrCodeInstructionLabel;
@property (nonatomic, retain) CAMShallowDepthOfFieldBadge *shallowDepthOfFieldBadge;
@property (nonatomic, retain) CUShutterButton *shutterButton;
@property (nonatomic, retain) CAMShutterIndicatorView *shutterIndicatorView;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMTimerIndicatorView *timerIndicatorView;
@property (nonatomic, retain) CAMTopBar *topBar;
@property (nonatomic) bool useCreativeControls;
@property (nonatomic) <CAMControlVisibilityDelegate> *visibilityDelegate;
@property (nonatomic, retain) NSArray *visibleTopBadges;
@property (nonatomic, retain) CAMZoomControl *zoomControl;
@property (nonatomic, retain) CAMZoomSlider *zoomSlider;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)HDRBadge;
- (double)_badgeTrayHeightForLayoutStyle:(long long)arg1;
- (id)_bottomBarExtensionView;
- (struct CGSize { double x1; double x2; })_bottomBarSizeForLayoutStyle:(long long)arg1 withProposedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_cameraAppPreviewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(bool)arg2 outPreviewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 outPreviewCenter:(struct CGPoint { double x1; double x2; }*)arg4 outFourThreeTopBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outBottomBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cameraPreviewFrameForAspectRatio:(long long)arg1 topBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bottomBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 shouldShiftPreviewForUtilityBar:(bool)arg4;
- (void)_cameraTopBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(bool)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 center:(struct CGPoint { double x1; double x2; }*)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg5;
- (void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_correctingTransformFromPreviewViewOrientation:(long long)arg1;
- (void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 fadeInDuration:(double)arg4 fadeInDelay:(double)arg5;
- (void)_createPlaceholderSnapshotAndPerformSingleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3;
- (void)_enforceBadgeSubviewOrderingWithAppearingBadges:(id)arg1;
- (id)_flipTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForBadgeTrayForLayoutStyle:(long long)arg1 orientation:(long long)arg2;
- (double)_interpolatedBottomBarHeightWithProposedHeight:(double)arg1;
- (double)_interpolatedBottomBarWidthWithProposedWidth:(double)arg1;
- (double)_interpolatedTopBarHeight;
- (double)_interpolatedVerticalOffsetForShutterIndicator;
- (bool)_isAdjustingTopBarOrientationForLayoutStyle:(long long)arg1;
- (void)_layoutBadgeForTinyLayoutStyle:(id)arg1 animated:(bool)arg2;
- (void)_layoutBadgeTrayForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(bool)arg4;
- (void)_layoutBadgeTrayWithBadges:(id)arg1 layoutStyle:(long long)arg2;
- (void)_layoutBarExtensionViews;
- (void)_layoutBottomBadgesForLayoutStyle:(long long)arg1;
- (void)_layoutBottomCenteredView:(id)arg1 aboveView:(id)arg2 aboveViewSpacing:(double)arg3 forLayoutStyle:(long long)arg4;
- (void)_layoutBurstIndicatorForLayoutStyle:(long long)arg1;
- (void)_layoutDescriptionOverlayView:(id)arg1;
- (void)_layoutElapsedTimeViewForLayoutStyle:(long long)arg1;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutFramerateIndicatorViewForLayoutStyle:(long long)arg1;
- (void)_layoutInstructionLabelOnTop:(id)arg1 forLayoutStyle:(long long)arg2;
- (void)_layoutLightingControlForLayoutStyle:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_layoutMarginInsetsForLayoutStyle:(long long)arg1;
- (void)_layoutPanoramaViewForLayoutStyle:(long long)arg1;
- (void)_layoutPortraitModeInstructionLabelForLayoutStyle:(long long)arg1;
- (void)_layoutQRCodeInstructionLabelForLayoutStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutShutterIndicatorForLayoutStyle:(long long)arg1;
- (void)_layoutSnapshotsOfPreviewView;
- (void)_layoutTimerIndicatorViewForLayoutStyle:(long long)arg1;
- (void)_layoutTopBadgesForLayoutStyle:(long long)arg1 animated:(bool)arg2;
- (void)_layoutTopBadgesForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(bool)arg4;
- (void)_layoutTopBarForLayoutStyle:(long long)arg1;
- (void)_layoutZoomControlForLayoutStyle:(long long)arg1;
- (void)_layoutZoomSliderForLayoutStyle:(long long)arg1;
- (double)_multiplierForAspectRatio:(long long)arg1;
- (id)_openAndCloseTransition;
- (id)_previewContainerMaskingView;
- (id)_previewContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previewFrameForAspectRatio:(long long)arg1 topBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bottomBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 shouldShiftPreviewForUtilityBar:(bool)arg4;
- (void)_previewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(bool)arg2 outPreviewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 outPreviewCenter:(struct CGPoint { double x1; double x2; }*)arg4 outFourThreeTopBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outBottomBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (struct CGSize { double x1; double x2; })_previewSizeForAspectRatio:(long long)arg1;
- (void)_setBottomBarExtensionView:(id)arg1;
- (void)_setFlipTransition:(id)arg1;
- (void)_setOpenAndCloseTransition:(id)arg1;
- (void)_setTopBarExtensionView:(id)arg1;
- (bool)_shouldLayoutPortraitInstructionsAtTop;
- (id)_topBarExtensionView;
- (void)_topBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(bool)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 center:(struct CGPoint { double x1; double x2; }*)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg5;
- (struct CGSize { double x1; double x2; })_topBarSizeForLayoutStyle:(long long)arg1;
- (void)_updateBarExtensionViewsIfNecessary;
- (id)_viewToLayoutBadgesBelowForLayoutStyle:(long long)arg1 orientation:(long long)arg2;
- (bool)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(long long)arg1;
- (bool)_wantsInterfaceOrientedPreviewForLayoutStyle:(long long)arg1;
- (bool)automaticallyAdjustsTopBarOrientation;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)bottomBar;
- (id)burstIndicatorView;
- (void)closeAndRotateWithDirection:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)closeWithBlur:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (long long)desiredAspectRatio;
- (id)disabledModeOverlayView;
- (id)elapsedTimeView;
- (id)filterNameBadge;
- (id)flashBadge;
- (id)flipButton;
- (id)focusAndExposureLockBadge;
- (id)framerateIndicatorView;
- (void)handleApplicationDidEnterBackground;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)lightingControl;
- (id)lightingNameBadge;
- (id)livePhotoBadge;
- (long long)maskingAspectRatio;
- (void)openForReason:(long long)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (long long)orientation;
- (id)panoramaView;
- (id)portraitModeDescriptionOverlayView;
- (id)portraitModeInstructionLabel;
- (void)prepareForAutorotation;
- (void)prepareForResumingUsingCrossfade;
- (id)previewView;
- (long long)previewViewOrientation;
- (id)qrCodeDescriptionOverlayView;
- (id)qrCodeInstructionLabel;
- (void)removeInflightBlurAnimations;
- (void)setAutomaticallyAdjustsTopBarOrientation:(bool)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setBurstIndicatorView:(id)arg1;
- (void)setDesiredAspectRatio:(long long)arg1;
- (void)setDisabledModeOverlayView:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFilterNameBadge:(id)arg1;
- (void)setFlashBadge:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setFocusAndExposureLockBadge:(id)arg1;
- (void)setFramerateIndicatorView:(id)arg1;
- (void)setHDRBadge:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setLightingControl:(id)arg1;
- (void)setLightingNameBadge:(id)arg1;
- (void)setLivePhotoBadge:(id)arg1;
- (void)setMaskingAspectRatio:(long long)arg1;
- (void)setMaskingAspectRatio:(long long)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setPanoramaView:(id)arg1;
- (void)setPortraitModeDescriptionOverlayView:(id)arg1;
- (void)setPortraitModeInstructionLabel:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setPreviewViewOrientation:(long long)arg1;
- (void)setQrCodeDescriptionOverlayView:(id)arg1;
- (void)setQrCodeInstructionLabel:(id)arg1;
- (void)setShallowDepthOfFieldBadge:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setShutterIndicatorView:(id)arg1;
- (void)setTimerIndicatorView:(id)arg1;
- (void)setTopBar:(id)arg1;
- (void)setUseCreativeControls:(bool)arg1;
- (void)setVisibilityDelegate:(id)arg1;
- (void)setVisibleTopBadges:(id)arg1;
- (void)setVisibleTopBadges:(id)arg1 animated:(bool)arg2;
- (void)setZoomControl:(id)arg1;
- (void)setZoomSlider:(id)arg1;
- (id)shallowDepthOfFieldBadge;
- (id)shutterButton;
- (id)shutterIndicatorView;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forAspectRatio:(long long)arg2;
- (id)timerIndicatorView;
- (id)topBar;
- (bool)useCreativeControls;
- (id)visibilityDelegate;
- (id)visibleTopBadges;
- (id)zoomControl;
- (id)zoomSlider;

@end
