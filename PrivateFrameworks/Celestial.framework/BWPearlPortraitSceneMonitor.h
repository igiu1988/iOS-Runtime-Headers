/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPearlPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    bool  _aeStableAfterStartStreaming;
    float  _closeDepthDistanceAverage;
    bool  _depthSensorOccluded;
    bool  _disablePreviewWhenTooBright;
    float  _luxLevelFiltered;
    float  _luxLevelSmoothingFactor;
    int  _numberOfFramesToWaitForAEAndLTMToStabilize;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    float  _sdofDepthQuality;
    float  _sdofDepthQualityFiltered;
    float  _sdofDepthQualityKCount;
    float  _sdofDepthQualitySmoothingFactor;
    int  _sdofNumFramesSinceAEBecameStable;
    float  _sdofTooBrightDepthQualityMinThreshold;
    unsigned short  _sdofTooBrightLuxLevelThreshold;
    unsigned short  _sdofTooBrightMaxLuxLevelThreshold;
    float  _sdofTooBrightTooFarDepthDistanceThreshold;
    float  _sdofTooCloseDepthDistanceThreshold;
    float  _sdofTooFarDepthDistanceThreshold;
    float  _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short  _stageBackgroundTooFarLuxLevelThreshold;
    float  _stageDepthQuality;
    bool  _stageFaceDetected;
    bool  _stageFaceHasBeenSeen;
    int  _stageFaceNumberOfFramesSinceLastFace;
    int  _stageFaceNumberOfFramesSinceLastFaceThreshold;
    int  _stageMostRecentFacesCount;
    float  _stageTooBrightDepthQualityThreshold;
    float  _stageTooCloseDepthDistanceThreshold;
    float  _stageTooFarDepthDistanceThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool portraitSceneMonitoringRequiresStageThresholds;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(bool)arg2;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; unsigned char x17; unsigned char x18; float x19; float x20; float x21; unsigned char x22; double x23; double x24; int x25; int x26; int x27; float x28; float x29; float x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned char x35; int x36; int x37; float x38; float x39; int x40; int x41; long long x42; }*)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(bool)arg4 effectStatus:(int*)arg5 stagePreviewStatus:(int*)arg6;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(id)arg8;

@end
