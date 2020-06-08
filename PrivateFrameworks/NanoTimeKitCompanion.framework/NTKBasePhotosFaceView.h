/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBasePhotosFaceView : NTKBackgroundImageFaceView <NTKPhotoImageViewDelegate, UIGestureRecognizerDelegate> {
    UIView * _blackView;
    NTKUtilityComplicationFactory * _complicationFactory;
    UIView * _cornerView;
    UIView * _currentGradientView;
    unsigned long long  _dateAlignment;
    UIColor * _foregroundColor;
    unsigned int  _isContentLoaded;
    unsigned int  _isInteractive;
    unsigned int  _isUsingLegibility;
    bool  _lastLongPressGestureWasCancelled;
    UILongPressGestureRecognizer * _longPressGesture;
    NTKAlbumEmptyView * _noPhotosView;
    bool  _noPhotosViewVisible;
    bool  _paused;
    NSTimer * _playOnWakeTimeout;
    NTKPhotoImageView * _posterImageView;
    bool  _preLoadingPhotoOnSleep;
    bool  _preloadedPhotoOnSleep;
    long long  _previousDataMode;
    UIColor * _shadowColor;
    bool  _shouldPlayIntro;
    bool  _shouldPlayOnWake;
    NTKTaskScheduler * _taskScheduler;
    bool  _updateWhenUnpausing;
}

@property (nonatomic, readonly) UIView *cornerView;
@property (nonatomic, readonly) unsigned long long dateAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteractive;
@property (getter=isNoPhotosViewVisible, nonatomic) bool noPhotosViewVisible;
@property (nonatomic, readonly) NTKPhotoImageView *posterImageView;
@property (readonly) Class superclass;

+ (id)_analysisForPhoto:(id)arg1 dateAlignment:(unsigned long long)arg2;
+ (id)_analyzeSidecarPhoto:(id)arg1 dateAlignment:(unsigned long long)arg2;
+ (id)_saveSidecarPhotoAnalysis:(id)arg1;
+ (id)_temporaryDirectory;

- (void).cxx_destruct;
- (void)_animateIn;
- (void)_applyAlignment;
- (void)_applyComplicationContentSpecificAttributesAnimated:(bool)arg1;
- (void)_applyDataMode;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (void)_applySlow;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterOrb:(bool)arg1;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationFactory;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (bool)_curtainViewVisible;
- (id)_digitalTimeLabelStyle;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_hideCurtainView;
- (void)_invalidatePreloadedPhoto;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newGradientViewWithColor:(id)arg1;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_playPhoto;
- (void)_playStill;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)arg1;
- (bool)_preloadNextPhoto;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_scheduleSleepPreloadTask;
- (bool)_screenOn;
- (id)_selectedContentView;
- (void)_setComplicationsHidden:(bool)arg1;
- (void)_setDateAttributes:(id)arg1 animated:(bool)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_showCurtainView;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (bool)_timeLabelUsesLegibility;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_updatePaused;
- (bool)_usesCustomZoom;
- (long long)_utilitySlotForSlot:(id)arg1;
- (id)cornerView;
- (unsigned long long)dateAlignment;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)imageViewDidBeginPlaying:(id)arg1;
- (void)imageViewDidEndPlaying:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (bool)isInteractive;
- (bool)isNoPhotosViewVisible;
- (void)layoutSubviews;
- (id)posterImageView;
- (void)setNoPhotosViewVisible:(bool)arg1;

@end
