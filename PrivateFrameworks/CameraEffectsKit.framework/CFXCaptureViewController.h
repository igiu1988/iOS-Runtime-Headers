/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXCaptureViewController : UIViewController <CAMControlVisibilityUpdateDelegate, CAMZoomControlDelegate, CAMZoomSliderDelegate, CFXCameraControlsViewControllerDelegate, CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, CFXLiveCaptureViewControllerDelegate, JTPassThroughContainerViewDelegate> {
    unsigned long long  _appliedDirectOverlayEditingGestures;
    CFXControlsViewController * _cameraControls;
    UIView * _cameraControlsContainerView;
    bool  _cameraIsFlipping;
    CFXLiveCaptureViewController * _cameraViewController;
    bool  _captureContainerUncroppedFrameWasCalculatedWithContentRect;
    NSLayoutConstraint * _captureControlsContainerHeightConstraint;
    NSLayoutConstraint * _captureControlsContainerLeadingConstraint;
    NSLayoutConstraint * _captureControlsContainerTopConstraint;
    NSLayoutConstraint * _captureControlsContainerTrailingConstraint;
    NSLayoutConstraint * _captureControlsContainerWidthConstraint;
    long long  _captureMode;
    CFXEffectComposition * _composition;
    <CFXCaptureViewControllerDelegate> * _delegate;
    bool  _dockIsMagnified;
    double  _dockMagnifiedHeightDelta;
    PUReviewScreenDoneButton * _doneButton;
    NSObject<OS_dispatch_group> * _editingOverlayWithGestureGroup;
    CFXEffectBrowserContentPresenterViewController * _effectBrowserContentPresenterViewController;
    CFXEffectEditorView * _effectEditor;
    JTPassThroughContainerView * _effectEditorContainerView;
    CAMElapsedTimeView * _elapsedTimeView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _externalUncroppedPresentationRect;
    CAMFlashButton * _flashButton;
    bool  _isRecording;
    UIView * _liveCaptureContainer;
    JTPassThroughContainerView * _liveCaptureContainerContainer;
    CAMSnapshotView * _liveCaptureContainerSnapshot;
    bool  _observingOrientationChanges;
    CAMTopBar * _topBar;
    NSLayoutConstraint * _topBarContaineHeightConstraint;
    NSLayoutConstraint * _topBarTopConstraint;
    CFXViewfinderFlipTransition * _viewfinderFlipTransition;
    CAMZoomControl * _zoomControl;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _zoomControlFrame;
    double  _zoomFactor;
    double  _zoomFactorAtPinchStart;
    CAMZoomSlider * _zoomSlider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _zoomSliderFrame;
}

@property (nonatomic) unsigned long long appliedDirectOverlayEditingGestures;
@property (nonatomic, retain) CFXControlsViewController *cameraControls;
@property (nonatomic, retain) UIView *cameraControlsContainerView;
@property (nonatomic) bool cameraIsFlipping;
@property (nonatomic, retain) CFXLiveCaptureViewController *cameraViewController;
@property (nonatomic) bool captureContainerUncroppedFrameWasCalculatedWithContentRect;
@property (nonatomic, retain) NSLayoutConstraint *captureControlsContainerHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *captureControlsContainerLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *captureControlsContainerTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *captureControlsContainerTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *captureControlsContainerWidthConstraint;
@property (nonatomic) long long captureMode;
@property (nonatomic, retain) CFXEffectComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXCaptureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dockIsMagnified;
@property (nonatomic) double dockMagnifiedHeightDelta;
@property (nonatomic, retain) PUReviewScreenDoneButton *doneButton;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *editingOverlayWithGestureGroup;
@property (nonatomic, retain) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController;
@property (nonatomic, retain) CFXEffectEditorView *effectEditor;
@property (nonatomic, retain) JTPassThroughContainerView *effectEditorContainerView;
@property (nonatomic, retain) UIView *effectsPickerDrawer;
@property (nonatomic, retain) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } externalUncroppedPresentationRect;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRecording;
@property (nonatomic) UIView *liveCaptureContainer;
@property (nonatomic, retain) JTPassThroughContainerView *liveCaptureContainerContainer;
@property (nonatomic, retain) CAMSnapshotView *liveCaptureContainerSnapshot;
@property (nonatomic, readonly) bool livePlayerIsSaturated;
@property (nonatomic) bool observingOrientationChanges;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMTopBar *topBar;
@property (nonatomic, retain) NSLayoutConstraint *topBarContaineHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topBarTopConstraint;
@property (nonatomic) bool useLocalCameraViewfinder;
@property (nonatomic) double userInterfaceAlpha;
@property (nonatomic, retain) CFXViewfinderFlipTransition *viewfinderFlipTransition;
@property (nonatomic, retain) CAMZoomControl *zoomControl;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } zoomControlFrame;
@property (nonatomic) double zoomFactor;
@property (setter=setZoomFactorAtPinchStart:, nonatomic) double zoomFactorAtPinchStart;
@property (nonatomic, retain) CAMZoomSlider *zoomSlider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } zoomSliderFrame;

- (void).cxx_destruct;
- (void)CFX_addEffect:(id)arg1 allowImmediateTextEditing:(bool)arg2;
- (long long)CFX_camFlashModeForCaptureFlashMode:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CFX_cameraViewFinderUncroppedFrame;
- (long long)CFX_captureFlashModeForCAMFlashMode:(long long)arg1;
- (long long)CFX_captureTorchModeForCAMFlashMode:(long long)arg1;
- (void)CFX_disableFaceTrackingForFullScreenTextEditingEffect:(id)arg1;
- (void)CFX_executeBlockAfterNextFrameRendered:(id /* block */)arg1;
- (void)CFX_hideAppStripUpperBackgroundView:(bool)arg1;
- (void)CFX_setRenderSize;
- (void)CFX_toggleCaptureUI;
- (void)addEffect:(id)arg1;
- (void)addEffect:(id)arg1 allowImmediateTextEditing:(bool)arg2;
- (void)addOverlayEffect:(id)arg1 atNormalizedPlanePoint:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 rotationAngle:(double)arg4;
- (void)addOverlayEffect:(id)arg1 atScreenLocation:(struct CGPoint { double x1; double x2; })arg2 atScreenSize:(struct CGSize { double x1; double x2; })arg3 rotationAngle:(double)arg4;
- (unsigned long long)appliedDirectOverlayEditingGestures;
- (void)applyAutoRotationCorrectionToEditorViews;
- (void)applyAutoRotationCorrectionToEditorViewsIfNeeded;
- (void)applyAutoRotationCorrectionToEditorViewsWithTransitionCoordinator:(id)arg1;
- (id)cameraControls;
- (id)cameraControlsContainerView;
- (void)cameraControlsViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)cameraControlsViewControllerShutterButtonWasTapped:(id)arg1;
- (void)cameraControlsViewControllerSwitchCameraButtonWasTapped:(id)arg1;
- (void)cameraDidStart;
- (void)cameraDidStop;
- (bool)cameraIsFlipping;
- (id)cameraViewController;
- (bool)captureContainerUncroppedFrameWasCalculatedWithContentRect;
- (id)captureControlsContainerHeightConstraint;
- (id)captureControlsContainerLeadingConstraint;
- (id)captureControlsContainerTopConstraint;
- (id)captureControlsContainerTrailingConstraint;
- (id)captureControlsContainerWidthConstraint;
- (long long)captureMode;
- (void)clear;
- (void)completedStillRecordWithURL:(id)arg1;
- (void)completedVideoRecordWithURL:(id)arg1;
- (id)composition;
- (void)configureUIForOrientation;
- (void)configureUIForWindowOrientation:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)configureZoomControl;
- (void)dealloc;
- (id)delegate;
- (void)displayEffectEditorForEffect:(id)arg1 forMode:(unsigned long long)arg2;
- (bool)dockIsMagnified;
- (double)dockMagnifiedHeightDelta;
- (id)doneButton;
- (id)doneButtonForCameraControlsViewController:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)editingOverlayWithGestureGroup;
- (id)effectBrowserContentPresenterViewController;
- (id)effectEditor;
- (id)effectEditorContainerView;
- (void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3;
- (void)effectEditorView:(id)arg1 didEndEditingEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(bool)arg3;
- (void)effectEditorView:(id)arg1 didMoveEffect:(id)arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)effectEditorView:(id)arg1 effectAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includeTracking:(bool)arg4;
- (bool)effectEditorView:(id)arg1 isEffectAtPoint:(struct CGPoint { double x1; double x2; })arg2 effect:(id)arg3;
- (unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2;
- (bool)effectEditorView:(id)arg1 presentCustomTextEditingUI:(id)arg2;
- (struct CGPoint { double x1; double x2; })effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2;
- (struct CGPoint { double x1; double x2; })effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 displayScale:(double)arg4;
- (id)effectEditorView:(id)arg1 textForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)effectEditorViewDidBeginEditing:(id)arg1;
- (void)effectEditorViewDidEndEditing:(id)arg1;
- (bool)effectEditorViewShouldShowFaceReticle:(id)arg1;
- (id)effectsPickerDrawer;
- (id)elapsedTimeView;
- (void)enableAnimationForOverlayEffect:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })externalUncroppedPresentationRect;
- (id)flashButton;
- (id)flashButtonForCameraControlsViewController:(id)arg1;
- (void)flashButtonTapped:(id)arg1;
- (long long)flashMode;
- (void)flashModeDidChange:(id)arg1;
- (void)fullScreenTextEditViewController:(id)arg1 didBeginEditingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishEditingByRemovingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishEditingEffect:(id)arg2 withUpdatedText:(id)arg3;
- (void)handleZoomPinchGestureRecognizer:(id)arg1;
- (bool)isEditingEffect;
- (bool)isRecording;
- (void)layoutZoomControlRelativeToBottomBarAndPreview;
- (void)layoutZoomSliderRelativeToBottomBarAndPreview;
- (void)layoutZoomUI;
- (id)liveCaptureContainer;
- (id)liveCaptureContainerContainer;
- (id)liveCaptureContainerSnapshot;
- (void)liveCaptureViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)liveCaptureViewController:(id)arg1 livePreviewDoubleTappedAtNormalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(id)arg3;
- (void)liveCaptureViewController:(id)arg1 livePreviewPannedAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(id)arg3;
- (void)liveCaptureViewController:(id)arg1 livePreviewPinchedAtNormalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(id)arg3;
- (void)liveCaptureViewController:(id)arg1 livePreviewRotatedAtNormalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(id)arg3;
- (void)liveCaptureViewController:(id)arg1 livePreviewTappedAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)livePlayerIsSaturated;
- (double)maxZoom;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)observingOrientationChanges;
- (bool)passThroughContainerView:(id)arg1 shouldHandleTouchWithinView:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (bool)presentFullScreenTextEditorForEffect:(id)arg1 insertingEffect:(bool)arg2;
- (void)removeAllEffectsOfType:(id)arg1;
- (void)removeEffectEditorAnimated:(bool)arg1;
- (void)removeEffectsForCameraSwitch;
- (void)removeLiveCaptureSnapshot;
- (void)saveLiveCaptureSnapshotForReview;
- (void)setAppliedDirectOverlayEditingGestures:(unsigned long long)arg1;
- (void)setCameraControls:(id)arg1;
- (void)setCameraControlsContainerView:(id)arg1;
- (void)setCameraIsFlipping:(bool)arg1;
- (void)setCameraViewController:(id)arg1;
- (void)setCaptureContainerUncroppedFrameWasCalculatedWithContentRect:(bool)arg1;
- (void)setCaptureControlsContainerHeightConstraint:(id)arg1;
- (void)setCaptureControlsContainerLeadingConstraint:(id)arg1;
- (void)setCaptureControlsContainerTopConstraint:(id)arg1;
- (void)setCaptureControlsContainerTrailingConstraint:(id)arg1;
- (void)setCaptureControlsContainerWidthConstraint:(id)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setComposition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockIsMagnified:(bool)arg1;
- (void)setDockMagnifiedHeightDelta:(double)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditingOverlayWithGestureGroup:(id)arg1;
- (void)setEffectBrowserContentPresenterViewController:(id)arg1;
- (void)setEffectEditor:(id)arg1;
- (void)setEffectEditorContainerView:(id)arg1;
- (void)setEffectsPickerDrawer:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setExternalUncroppedPresentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setIsRecording:(bool)arg1;
- (void)setLiveCaptureContainer:(id)arg1;
- (void)setLiveCaptureContainerContainer:(id)arg1;
- (void)setLiveCaptureContainerSnapshot:(id)arg1;
- (void)setLiveCapturePresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setObservingOrientationChanges:(bool)arg1;
- (void)setTopBar:(id)arg1;
- (void)setTopBarContaineHeightConstraint:(id)arg1;
- (void)setTopBarTopConstraint:(id)arg1;
- (void)setUseLocalCameraViewfinder:(bool)arg1;
- (void)setUserInterfaceAlpha:(double)arg1;
- (void)setViewfinderFlipTransition:(id)arg1;
- (void)setZoomControl:(id)arg1;
- (void)setZoomControlFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomFactorAtPinchStart:(double)arg1;
- (void)setZoomSlider:(id)arg1;
- (void)setZoomSliderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldUseFaceTracking;
- (void)showLiveCaptureSnapshotBlurred:(bool)arg1 animated:(bool)arg2;
- (void)shutdownLivePlayer;
- (void)startVideoRecording;
- (void)stopVideoRecording;
- (void)takeStillPhoto;
- (id)topBar;
- (id)topBarContaineHeightConstraint;
- (id)topBarTopConstraint;
- (void)updateControlVisibilityAnimated:(bool)arg1;
- (void)updateEffectEditorLayout;
- (void)updateFullScreenTextEditorLayout;
- (void)updateTopBar;
- (void)updateUIForDevicePosition:(long long)arg1;
- (void)updateUIForDockMagnify:(bool)arg1 dockHeightDelta:(double)arg2;
- (void)updateUIForVideoRecording:(bool)arg1;
- (void)updateZoomUIForCapturing:(bool)arg1 animated:(bool)arg2;
- (void)updateZoomUIVisibility;
- (bool)useLocalCameraViewfinder;
- (double)userInterfaceAlpha;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)viewfinderFlipTransition;
- (void)willDropCameraFrame;
- (id)zoomControl;
- (void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomControlFrame;
- (double)zoomFactor;
- (double)zoomFactorAtPinchStart;
- (id)zoomSlider;
- (void)zoomSliderDidBeginAutozooming:(id)arg1;
- (void)zoomSliderDidEndAutozooming:(id)arg1;
- (void)zoomSliderDidEndZooming:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomSliderFrame;
- (void)zoomSliderValueDidChange:(id)arg1 forEvent:(id)arg2;

@end
