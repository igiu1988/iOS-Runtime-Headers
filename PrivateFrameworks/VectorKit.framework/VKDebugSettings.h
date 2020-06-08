/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDebugSettings : NSObject {
    bool  _altitudeDisableC3mTextureLoading;
    float  _altitudeFadeSpeed;
    bool  _altitudeFreezeViewNode;
    float  _altitudeHideMeshTime;
    bool  _altitudeHighResSatellite;
    float  _altitudeLodScale;
    bool  _altitudeMipmapFlyover;
    bool  _altitudeMipmapObjectTree;
    bool  _altitudeMipmapSatellite;
    bool  _altitudePauseLoading;
    bool  _altitudePrintRenderedTilesStat;
    bool  _altitudeProfilingEnabled;
    unsigned int  _altitudeProfilingType;
    unsigned int  _altitudeProfilingZones;
    bool  _altitudeShowNightLight;
    bool  _altitudeShowTileBounds;
    bool  _altitudeShowTriggerbounds;
    NSString * _altitudeTelemetryURL;
    bool  _altitudeTexturePaging;
    float  _altitudeTileQualityThreshold;
    bool  _altitudeTourSpeedup;
    float  _altitudeTourSpeedupFactor;
    float  _arDefaultHeight;
    bool  _arOverrideDefaults;
    unsigned long long  _arPinchGesture;
    bool  _arRenderAtNativeRate;
    unsigned long long  _arSwipeGesture;
    float  _arVirtualPlaneHeight;
    bool  _constantlyChangeTileGroup;
    struct unique_ptr<(anonymous namespace)::CustomLandmarksContainer, std::__1::default_delete<(anonymous namespace)::CustomLandmarksContainer> >="__ptr_"{__compressed_pair<(anonymous namespace)::CustomLandmarksContainer *, std::__1::default_delete<(anonymous namespace)::CustomLandmarksContainer> >="__value_"^{CustomLandmarksContainer {}  _customLandmarks;
    NSMutableDictionary * _customTiles;
    bool  _debugStyleAnimations;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _debugStyleManager;
    bool  _disableBackgroundLabelLayout;
    bool  _disableIntraLinkTransitLineCrossings;
    bool  _disableRoadSignLimit;
    bool  _disableRoute;
    bool  _disableStylesheetAnimations;
    bool  _disableTransitLineDrawing;
    bool  _disableTransitLineGroupMerging;
    bool  _disableTransitLineMerging;
    bool  _dontMapMatchToSnappedRouteLine;
    bool  _dontMatchRouteLine;
    bool  _dontVerifyRouteToTransitSnapping;
    bool  _drawDebugTransit;
    bool  _drawPerformanceHUD;
    bool  _dumpRouteAndPath;
    bool  _dumpTransitTileContents;
    bool  _enableARDebugConsole;
    bool  _enableAROmniTileLoader;
    bool  _enableEtaLabelDebugging;
    bool  _enableEtaLabelRectDebugging;
    bool  _enableLoggingInLockScreen;
    bool  _enableRouteIntersectionTesting;
    bool  _enableRouteShareSectionDebugging;
    bool  _enableShieldsOnRouteLine;
    bool  _enableSignPostEvents;
    bool  _enableTrafficCameraLabelDebugging;
    unsigned int  _etaLabelDebugOrientationMask;
    unsigned long long  _etaLabelDebugScore;
    bool  _etaLabelsAvoidScreenEdges;
    bool  _expandedPerformanceHUD;
    NSMutableArray * _footprintsToSuppress;
    bool  _forceEtaLabelPlacement;
    bool  _forceHiResBuildings;
    bool  _hideClientPositionedFeatures;
    bool  _hideDirectionalArrows;
    bool  _hideServerPositionedRoadFeatures;
    bool  _hideServerPositionedTransitFeatures;
    bool  _highlightFeaturesOnly;
    bool  _highlightRouteLineSnappingStatus;
    bool  _holdOntoStyleAttributes;
    bool  _immediateRasterTextureLoading;
    bool  _isInstalledInLockScreen;
    bool  _keepTooCloseServerPositionedTransitFeatures;
    bool  _labelAllowDefaultStyle;
    bool  _labelAutoOffsetRoadText;
    bool  _labelBaseSSLPMEnabled;
    bool  _labelCollideContinuously;
    bool  _labelCollisionEnabled;
    bool  _labelFlipAlternatePositionsEnable;
    bool  _labelHideLineFeatures;
    bool  _labelHidePointFeatures;
    bool  _labelHighlighting;
    bool  _labelHighlightingVerboseLoggingEnabled;
    bool  _labelTileDecodeEnabled;
    bool  _labelTransitLineCollisionEnabled;
    bool  _labelUpdateMapTilesContinuously;
    struct { 
        bool borders; 
        bool folds; 
        bool angles; 
        float minAngle; 
        float maxAngle; 
    }  _landmark2DStrokeSettings;
    bool  _layoutContinuously;
    bool  _loadGreenTraffic;
    bool  _overrideNeworkDefaultsBaseSSLPMSwitch;
    bool  _overrideVenueCameraSettings;
    bool  _paintBuildingNormals;
    bool  _paintCoastlines;
    bool  _paintJunctions;
    bool  _paintLabelBounds;
    bool  _paintLabelCollisionLines;
    bool  _paintLabelCounts;
    bool  _paintLabelRoadFeatures;
    bool  _paintLandcoverTiles;
    bool  _paintLoadReason;
    bool  _paintMapTiles;
    bool  _paintPoiTiles;
    bool  _paintPointTiles;
    bool  _paintPolygonTiles;
    bool  _paintRoadBoundaries;
    bool  _paintRoadSigns;
    bool  _paintRoadTiles;
    bool  _paintRoadsStitchedByName;
    bool  _paintRouteDebugMarkers;
    bool  _paintSelectedMapTiles;
    bool  _paintTiles;
    bool  _paintTrafficSkeleton;
    bool  _paintTransitCounts;
    bool  _paintVenues;
    bool  _paintVertices;
    bool  _prioritizeTrafficSkeleton;
    bool  _readLandmarksFromDisk;
    bool  _realisticWireframeEnabled;
    bool  _renderInSeparateThread;
    float  _ribbonCrispness;
    bool  _shouldUseTestTileLoader;
    bool  _showManeuverPoints;
    bool  _showNavCameraDebugConsole;
    bool  _showNavCameraDebugConsoleAttributes;
    bool  _showNavCameraDebugConsoleProperties;
    bool  _showNavCameraDebugLegend;
    bool  _showNavCameraDebugOverlay;
    bool  _showPreliminaryInfo;
    bool  _showTrafficCasing;
    bool  _suppressFootprints;
    bool  _texturedTrafficCasing;
    bool  _traceEtaDebugLog;
    bool  _trackingCameraZoomFurther;
    bool  _trafficCameraLabelCollideOutExternal;
    bool  _trafficCameraLabelCollideWithExternal;
    bool  _trafficCameraLabelSelfCollide;
    bool  _transitHighlighting;
    bool  _useBuildingShadowTexture;
    bool  _useMetalRenderer;
    bool  _useStaticTrafficFeed;
    bool  _useTransactionManager;
    float  _venueBoundsPaddingForCamera;
    float  _venueZoomOutFalloff;
}

@property (nonatomic) bool altitudeDisableC3mTextureLoading;
@property (nonatomic) float altitudeFadeSpeed;
@property (nonatomic) bool altitudeFreezeViewNode;
@property (nonatomic) float altitudeHideMeshTime;
@property (nonatomic) bool altitudeHighResSatellite;
@property (nonatomic) float altitudeLodScale;
@property (nonatomic) bool altitudeMipmapFlyover;
@property (nonatomic) bool altitudeMipmapObjectTree;
@property (nonatomic) bool altitudeMipmapSatellite;
@property (nonatomic) bool altitudePauseLoading;
@property (nonatomic) bool altitudePrintRenderedTilesStat;
@property (nonatomic) bool altitudeProfilingEnabled;
@property (nonatomic) unsigned int altitudeProfilingType;
@property (nonatomic) unsigned int altitudeProfilingZones;
@property (nonatomic) bool altitudeShowNightLight;
@property (nonatomic) bool altitudeShowTileBounds;
@property (nonatomic) bool altitudeShowTriggerBounds;
@property (nonatomic, retain) NSString *altitudeTelemetryURL;
@property (nonatomic) bool altitudeTexturePaging;
@property (nonatomic) float altitudeTileQualityThreshold;
@property (nonatomic) bool altitudeTourSpeedup;
@property (nonatomic) float altitudeTourSpeedupFactor;
@property (nonatomic) float arDefaultHeight;
@property (nonatomic) bool arOverrideDefaults;
@property (nonatomic) unsigned long long arPinchGesture;
@property (nonatomic) bool arRenderAtNativeRate;
@property (nonatomic) unsigned long long arSwipeGesture;
@property (nonatomic) float arVirtualPlaneHeight;
@property (nonatomic) bool constantlyChangeTileGroup;
@property (nonatomic) bool debugStyleAnimations;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } debugStyleManager;
@property (nonatomic) bool disableBackgroundLabelLayout;
@property (nonatomic) bool disableIntraLinkTransitLineCrossings;
@property (nonatomic) bool disableRoadSignLimit;
@property (nonatomic) bool disableRoute;
@property (nonatomic) bool disableStylesheetAnimations;
@property (nonatomic) bool disableTransitLineDrawing;
@property (nonatomic) bool disableTransitLineGroupMerging;
@property (nonatomic) bool disableTransitLineMerging;
@property (nonatomic) bool dontMapMatchToSnappedRouteLine;
@property (nonatomic) bool dontMatchRouteLine;
@property (nonatomic) bool dontVerifyRouteToTransitSnapping;
@property (nonatomic) bool drawDebugTransit;
@property (nonatomic) bool drawPerformanceHUD;
@property (nonatomic) bool dumpRouteAndPath;
@property (nonatomic) bool dumpTransitTileContents;
@property (nonatomic) bool enableARDebugConsole;
@property (nonatomic) bool enableAROmniTileLoader;
@property (nonatomic) bool enableEtaLabelDebugging;
@property (nonatomic) bool enableEtaLabelRectDebugging;
@property (nonatomic) bool enableLoggingInLockScreen;
@property (nonatomic) bool enableRouteIntersectionTesting;
@property (nonatomic) bool enableRouteShareSectionDebugging;
@property (nonatomic) bool enableShieldsOnRouteLine;
@property (nonatomic) bool enableSignPostEvents;
@property (nonatomic) bool enableTrafficCameraLabelDebugging;
@property (nonatomic) unsigned int etaLabelDebugOrientationMask;
@property (nonatomic) unsigned long long etaLabelDebugScore;
@property (nonatomic) bool etaLabelsAvoidScreenEdges;
@property (nonatomic) bool expandedPerformanceHUD;
@property (nonatomic, retain) NSMutableArray *footprintsToSuppress;
@property (nonatomic) bool forceEtaLabelPlacement;
@property (nonatomic) bool forceHiResBuildings;
@property (nonatomic) bool hideClientPositionedFeatures;
@property (nonatomic) bool hideDirectionalArrows;
@property (nonatomic) bool hideServerPositionedRoadFeatures;
@property (nonatomic) bool hideServerPositionedTransitFeatures;
@property (nonatomic) bool highlightFeaturesOnly;
@property (nonatomic) bool highlightRouteLineSnappingStatus;
@property (nonatomic) bool holdOntoStyleAttributes;
@property (nonatomic) bool immediateRasterTextureLoading;
@property (nonatomic) bool isInstalledInLockScreen;
@property (nonatomic) bool keepTooCloseServerPositionedTransitFeatures;
@property (nonatomic) bool labelAllowDefaultStyle;
@property (nonatomic) bool labelAutoOffsetRoadText;
@property (nonatomic) bool labelBaseSSLPMEnabled;
@property (nonatomic) bool labelCollideContinuously;
@property (nonatomic) bool labelCollisionEnabled;
@property (nonatomic) bool labelFlipAlternatePositionsEnable;
@property (nonatomic) bool labelHideLineFeatures;
@property (nonatomic) bool labelHidePointFeatures;
@property (nonatomic) bool labelHighlighting;
@property (nonatomic) bool labelHighlightingVerboseLoggingEnabled;
@property (nonatomic) bool labelTileDecodeEnabled;
@property (nonatomic) bool labelTransitLineCollisionEnabled;
@property (nonatomic) bool labelUpdateMapTilesContinuously;
@property (nonatomic) struct { bool x1; bool x2; bool x3; float x4; float x5; } landmark2DStrokeSettings;
@property (nonatomic) bool layoutContinuously;
@property (nonatomic) bool loadGreenTraffic;
@property (nonatomic) bool overrideNeworkDefaultsBaseSSLPMSwitch;
@property (nonatomic) bool overrideVenueCameraSettings;
@property (nonatomic) bool paintBuildingNormals;
@property (nonatomic) bool paintCoastlines;
@property (nonatomic) bool paintJunctions;
@property (nonatomic) bool paintLabelBounds;
@property (nonatomic) bool paintLabelCollisionLines;
@property (nonatomic) bool paintLabelCounts;
@property (nonatomic) bool paintLabelRoadFeatures;
@property (nonatomic) bool paintLandcoverTiles;
@property (nonatomic) bool paintLoadReason;
@property (nonatomic) bool paintMapTiles;
@property (nonatomic) bool paintPoiTiles;
@property (nonatomic) bool paintPointTiles;
@property (nonatomic) bool paintPolygonTiles;
@property (nonatomic) bool paintRoadBoundaries;
@property (nonatomic) bool paintRoadSigns;
@property (nonatomic) bool paintRoadTiles;
@property (nonatomic) bool paintRoadsStitchedByName;
@property (nonatomic) bool paintRouteDebugMarkers;
@property (nonatomic) bool paintSelectedMapTiles;
@property (nonatomic) bool paintTiles;
@property (nonatomic) bool paintTrafficSkeleton;
@property (nonatomic) bool paintTransitCounts;
@property (nonatomic) bool paintVenues;
@property (nonatomic) bool paintVertices;
@property (nonatomic) bool prioritizeTrafficSkeleton;
@property (nonatomic) bool readLandmarksFromDisk;
@property (nonatomic) bool realisticWireframeEnabled;
@property (nonatomic) bool renderInSeparateThread;
@property (nonatomic) float ribbonCrispness;
@property (nonatomic) bool shouldUseTestTileLoader;
@property (nonatomic) bool showManeuverPoints;
@property (nonatomic) bool showNavCameraDebugConsole;
@property (nonatomic) bool showNavCameraDebugConsoleAttributes;
@property (nonatomic) bool showNavCameraDebugConsoleProperties;
@property (nonatomic) bool showNavCameraDebugLegend;
@property (nonatomic) bool showNavCameraDebugOverlay;
@property (nonatomic) bool showPreliminaryInfo;
@property (nonatomic) bool showTrafficCasing;
@property (nonatomic) bool suppressFootprints;
@property (nonatomic) bool texturedTrafficCasing;
@property (nonatomic) bool traceEtaDebugLog;
@property (nonatomic) bool trackingCameraZoomFurther;
@property (nonatomic) bool trafficCameraLabelCollideOutExternal;
@property (nonatomic) bool trafficCameraLabelCollideWithExternal;
@property (nonatomic) bool trafficCameraLabelSelfCollide;
@property (nonatomic) bool transitHighlighting;
@property (nonatomic) bool useBuildingShadowTexture;
@property (nonatomic) bool useMetalRenderer;
@property (nonatomic) bool useStaticTrafficFeed;
@property (nonatomic) bool useTransactionManager;
@property (nonatomic) float venueBoundsPaddingForCamera;
@property (nonatomic) float venueZoomOutFalloff;

+ (id)sharedSettings;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFootprintToSuppress:(id)arg1;
- (bool)altitudeDisableC3mTextureLoading;
- (float)altitudeFadeSpeed;
- (bool)altitudeFreezeViewNode;
- (float)altitudeHideMeshTime;
- (bool)altitudeHighResSatellite;
- (float)altitudeLodScale;
- (bool)altitudeMipmapFlyover;
- (bool)altitudeMipmapObjectTree;
- (bool)altitudeMipmapSatellite;
- (bool)altitudePauseLoading;
- (bool)altitudePrintRenderedTilesStat;
- (bool)altitudeProfilingEnabled;
- (unsigned int)altitudeProfilingType;
- (unsigned int)altitudeProfilingZones;
- (bool)altitudeShowNightLight;
- (bool)altitudeShowTileBounds;
- (bool)altitudeShowTriggerBounds;
- (id)altitudeTelemetryURL;
- (bool)altitudeTexturePaging;
- (float)altitudeTileQualityThreshold;
- (bool)altitudeTourSpeedup;
- (float)altitudeTourSpeedupFactor;
- (float)arDefaultHeight;
- (bool)arOverrideDefaults;
- (unsigned long long)arPinchGesture;
- (bool)arRenderAtNativeRate;
- (unsigned long long)arSwipeGesture;
- (float)arVirtualPlaneHeight;
- (void)clearFootprintsToSuppress;
- (bool)constantlyChangeTileGroup;
- (const struct vector<std::__1::shared_ptr<md::ObjectGroup>, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > > { struct shared_ptr<md::ObjectGroup> {} *x1; struct shared_ptr<md::ObjectGroup> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::ObjectGroup> *, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > > { struct shared_ptr<md::ObjectGroup> {} *x_3_1_1; } x3; }*)customLandmarkObjectGroupsForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)dealloc;
- (bool)debugStyleAnimations;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })debugStyleManager;
- (bool)disableBackgroundLabelLayout;
- (bool)disableIntraLinkTransitLineCrossings;
- (bool)disableRoadSignLimit;
- (bool)disableRoute;
- (bool)disableStylesheetAnimations;
- (bool)disableTransitLineDrawing;
- (bool)disableTransitLineGroupMerging;
- (bool)disableTransitLineMerging;
- (bool)dontMapMatchToSnappedRouteLine;
- (bool)dontMatchRouteLine;
- (bool)dontVerifyRouteToTransitSnapping;
- (bool)drawDebugTransit;
- (bool)drawPerformanceHUD;
- (bool)dumpRouteAndPath;
- (bool)dumpTransitTileContents;
- (bool)enableARDebugConsole;
- (bool)enableAROmniTileLoader;
- (bool)enableEtaLabelDebugging;
- (bool)enableEtaLabelRectDebugging;
- (bool)enableLoggingInLockScreen;
- (bool)enableRouteIntersectionTesting;
- (bool)enableRouteShareSectionDebugging;
- (bool)enableShieldsOnRouteLine;
- (bool)enableSignPostEvents;
- (bool)enableTrafficCameraLabelDebugging;
- (unsigned int)etaLabelDebugOrientationMask;
- (unsigned long long)etaLabelDebugScore;
- (bool)etaLabelsAvoidScreenEdges;
- (bool)expandedPerformanceHUD;
- (id)footprintsToSuppress;
- (bool)forceEtaLabelPlacement;
- (bool)forceHiResBuildings;
- (bool)hideClientPositionedFeatures;
- (bool)hideDirectionalArrows;
- (void)hidePerformanceGroup:(unsigned int)arg1;
- (bool)hideServerPositionedRoadFeatures;
- (bool)hideServerPositionedTransitFeatures;
- (bool)highlightFeaturesOnly;
- (bool)highlightRouteLineSnappingStatus;
- (bool)holdOntoStyleAttributes;
- (bool)immediateRasterTextureLoading;
- (id)init;
- (bool)isInstalledInLockScreen;
- (bool)isPerformanceGroupShown:(unsigned int)arg1;
- (bool)keepTooCloseServerPositionedTransitFeatures;
- (bool)labelAllowDefaultStyle;
- (bool)labelAutoOffsetRoadText;
- (bool)labelBaseSSLPMEnabled;
- (bool)labelCollideContinuously;
- (bool)labelCollisionEnabled;
- (bool)labelFlipAlternatePositionsEnable;
- (bool)labelHideLineFeatures;
- (bool)labelHidePointFeatures;
- (bool)labelHighlighting;
- (bool)labelHighlightingVerboseLoggingEnabled;
- (bool)labelTileDecodeEnabled;
- (bool)labelTransitLineCollisionEnabled;
- (bool)labelUpdateMapTilesContinuously;
- (struct { bool x1; bool x2; bool x3; float x4; float x5; })landmark2DStrokeSettings;
- (bool)layoutContinuously;
- (bool)loadGreenTraffic;
- (id)nameForPerformanceGroup:(unsigned int)arg1;
- (unsigned int)numPerformanceGroups;
- (bool)overlaysShouldDrawDebug;
- (bool)overrideNeworkDefaultsBaseSSLPMSwitch;
- (bool)overrideVenueCameraSettings;
- (bool)paintBuildingNormals;
- (bool)paintCoastlines;
- (bool)paintJunctions;
- (bool)paintLabelBounds;
- (bool)paintLabelCollisionLines;
- (bool)paintLabelCounts;
- (bool)paintLabelRoadFeatures;
- (bool)paintLandcoverTiles;
- (bool)paintLoadReason;
- (bool)paintMapTiles;
- (bool)paintPoiTiles;
- (bool)paintPointTiles;
- (bool)paintPolygonTiles;
- (bool)paintRoadBoundaries;
- (bool)paintRoadSigns;
- (bool)paintRoadTiles;
- (bool)paintRoadsStitchedByName;
- (bool)paintRouteDebugMarkers;
- (bool)paintSelectedMapTiles;
- (bool)paintTiles;
- (bool)paintTrafficSkeleton;
- (bool)paintTransitCounts;
- (bool)paintVenues;
- (bool)paintVertices;
- (bool)prioritizeTrafficSkeleton;
- (bool)readLandmarksFromDisk;
- (bool)realisticWireframeEnabled;
- (bool)renderInSeparateThread;
- (float)ribbonCrispness;
- (void)setAltitudeDisableC3mTextureLoading:(bool)arg1;
- (void)setAltitudeFadeSpeed:(float)arg1;
- (void)setAltitudeFreezeViewNode:(bool)arg1;
- (void)setAltitudeHideMeshTime:(float)arg1;
- (void)setAltitudeHighResSatellite:(bool)arg1;
- (void)setAltitudeLodScale:(float)arg1;
- (void)setAltitudeMipmapFlyover:(bool)arg1;
- (void)setAltitudeMipmapObjectTree:(bool)arg1;
- (void)setAltitudeMipmapSatellite:(bool)arg1;
- (void)setAltitudePauseLoading:(bool)arg1;
- (void)setAltitudePrintRenderedTilesStat:(bool)arg1;
- (void)setAltitudeProfilingEnabled:(bool)arg1;
- (void)setAltitudeProfilingType:(unsigned int)arg1;
- (void)setAltitudeProfilingZones:(unsigned int)arg1;
- (void)setAltitudeShowNightLight:(bool)arg1;
- (void)setAltitudeShowTileBounds:(bool)arg1;
- (void)setAltitudeShowTriggerBounds:(bool)arg1;
- (void)setAltitudeTelemetryURL:(id)arg1;
- (void)setAltitudeTexturePaging:(bool)arg1;
- (void)setAltitudeTileQualityThreshold:(float)arg1;
- (void)setAltitudeTourSpeedup:(bool)arg1;
- (void)setAltitudeTourSpeedupFactor:(float)arg1;
- (void)setArDefaultHeight:(float)arg1;
- (void)setArOverrideDefaults:(bool)arg1;
- (void)setArPinchGesture:(unsigned long long)arg1;
- (void)setArRenderAtNativeRate:(bool)arg1;
- (void)setArSwipeGesture:(unsigned long long)arg1;
- (void)setArVirtualPlaneHeight:(float)arg1;
- (void)setConstantlyChangeTileGroup:(bool)arg1;
- (void)setCustomLandmarkFromData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 texturePath:(id)arg3;
- (void)setCustomLandmarkFromDisk:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)setCustomLandmarkFromDisk:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 styleKey:(unsigned int)arg3 styleValue:(int)arg4;
- (void)setDebugStyleAnimations:(bool)arg1;
- (void)setDebugStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDisableBackgroundLabelLayout:(bool)arg1;
- (void)setDisableIntraLinkTransitLineCrossings:(bool)arg1;
- (void)setDisableRoadSignLimit:(bool)arg1;
- (void)setDisableRoute:(bool)arg1;
- (void)setDisableStylesheetAnimations:(bool)arg1;
- (void)setDisableTransitLineDrawing:(bool)arg1;
- (void)setDisableTransitLineGroupMerging:(bool)arg1;
- (void)setDisableTransitLineMerging:(bool)arg1;
- (void)setDontMapMatchToSnappedRouteLine:(bool)arg1;
- (void)setDontMatchRouteLine:(bool)arg1;
- (void)setDontVerifyRouteToTransitSnapping:(bool)arg1;
- (void)setDrawDebugTransit:(bool)arg1;
- (void)setDrawPerformanceHUD:(bool)arg1;
- (void)setDumpRouteAndPath:(bool)arg1;
- (void)setDumpTransitTileContents:(bool)arg1;
- (void)setEnableARDebugConsole:(bool)arg1;
- (void)setEnableAROmniTileLoader:(bool)arg1;
- (void)setEnableEtaLabelDebugging:(bool)arg1;
- (void)setEnableEtaLabelRectDebugging:(bool)arg1;
- (void)setEnableLoggingInLockScreen:(bool)arg1;
- (void)setEnableRouteIntersectionTesting:(bool)arg1;
- (void)setEnableRouteShareSectionDebugging:(bool)arg1;
- (void)setEnableShieldsOnRouteLine:(bool)arg1;
- (void)setEnableSignPostEvents:(bool)arg1;
- (void)setEnableTrafficCameraLabelDebugging:(bool)arg1;
- (void)setEtaLabelDebugOrientationMask:(unsigned int)arg1;
- (void)setEtaLabelDebugScore:(unsigned long long)arg1;
- (void)setEtaLabelsAvoidScreenEdges:(bool)arg1;
- (void)setExpandedPerformanceHUD:(bool)arg1;
- (void)setFootprintsToSuppress:(id)arg1;
- (void)setForceEtaLabelPlacement:(bool)arg1;
- (void)setForceHiResBuildings:(bool)arg1;
- (void)setHideClientPositionedFeatures:(bool)arg1;
- (void)setHideDirectionalArrows:(bool)arg1;
- (void)setHideServerPositionedRoadFeatures:(bool)arg1;
- (void)setHideServerPositionedTransitFeatures:(bool)arg1;
- (void)setHighlightFeaturesOnly:(bool)arg1;
- (void)setHighlightRouteLineSnappingStatus:(bool)arg1;
- (void)setHoldOntoStyleAttributes:(bool)arg1;
- (void)setImmediateRasterTextureLoading:(bool)arg1;
- (void)setIsInstalledInLockScreen:(bool)arg1;
- (void)setKeepTooCloseServerPositionedTransitFeatures:(bool)arg1;
- (void)setLabelAllowDefaultStyle:(bool)arg1;
- (void)setLabelAutoOffsetRoadText:(bool)arg1;
- (void)setLabelBaseSSLPMEnabled:(bool)arg1;
- (void)setLabelCollideContinuously:(bool)arg1;
- (void)setLabelCollisionEnabled:(bool)arg1;
- (void)setLabelFlipAlternatePositionsEnable:(bool)arg1;
- (void)setLabelHideLineFeatures:(bool)arg1;
- (void)setLabelHidePointFeatures:(bool)arg1;
- (void)setLabelHighlighting:(bool)arg1;
- (void)setLabelHighlightingVerboseLoggingEnabled:(bool)arg1;
- (void)setLabelTileDecodeEnabled:(bool)arg1;
- (void)setLabelTransitLineCollisionEnabled:(bool)arg1;
- (void)setLabelUpdateMapTilesContinuously:(bool)arg1;
- (void)setLandmark2DStrokeSettings:(struct { bool x1; bool x2; bool x3; float x4; float x5; })arg1;
- (void)setLayoutContinuously:(bool)arg1;
- (void)setLoadGreenTraffic:(bool)arg1;
- (void)setOverrideNeworkDefaultsBaseSSLPMSwitch:(bool)arg1;
- (void)setOverrideVenueCameraSettings:(bool)arg1;
- (void)setPaintBuildingNormals:(bool)arg1;
- (void)setPaintCoastlines:(bool)arg1;
- (void)setPaintJunctions:(bool)arg1;
- (void)setPaintLabelBounds:(bool)arg1;
- (void)setPaintLabelCollisionLines:(bool)arg1;
- (void)setPaintLabelCounts:(bool)arg1;
- (void)setPaintLabelRoadFeatures:(bool)arg1;
- (void)setPaintLandcoverTiles:(bool)arg1;
- (void)setPaintLoadReason:(bool)arg1;
- (void)setPaintMapTiles:(bool)arg1;
- (void)setPaintPoiTiles:(bool)arg1;
- (void)setPaintPointTiles:(bool)arg1;
- (void)setPaintPolygonTiles:(bool)arg1;
- (void)setPaintRoadBoundaries:(bool)arg1;
- (void)setPaintRoadSigns:(bool)arg1;
- (void)setPaintRoadTiles:(bool)arg1;
- (void)setPaintRoadsStitchedByName:(bool)arg1;
- (void)setPaintRouteDebugMarkers:(bool)arg1;
- (void)setPaintSelectedMapTiles:(bool)arg1;
- (void)setPaintTiles:(bool)arg1;
- (void)setPaintTrafficSkeleton:(bool)arg1;
- (void)setPaintTransitCounts:(bool)arg1;
- (void)setPaintVenues:(bool)arg1;
- (void)setPaintVertices:(bool)arg1;
- (void)setPrioritizeTrafficSkeleton:(bool)arg1;
- (void)setReadLandmarksFromDisk:(bool)arg1;
- (void)setRealisticWireframeEnabled:(bool)arg1;
- (void)setRenderInSeparateThread:(bool)arg1;
- (void)setRibbonCrispness:(float)arg1;
- (void)setShouldUseTestTileLoader:(bool)arg1;
- (void)setShowManeuverPoints:(bool)arg1;
- (void)setShowNavCameraDebugConsole:(bool)arg1;
- (void)setShowNavCameraDebugConsoleAttributes:(bool)arg1;
- (void)setShowNavCameraDebugConsoleProperties:(bool)arg1;
- (void)setShowNavCameraDebugLegend:(bool)arg1;
- (void)setShowNavCameraDebugOverlay:(bool)arg1;
- (void)setShowPreliminaryInfo:(bool)arg1;
- (void)setShowTrafficCasing:(bool)arg1;
- (void)setSuppressFootprints:(bool)arg1;
- (void)setTexturedTrafficCasing:(bool)arg1;
- (void)setTraceEtaDebugLog:(bool)arg1;
- (void)setTrackingCameraZoomFurther:(bool)arg1;
- (void)setTrafficCameraLabelCollideOutExternal:(bool)arg1;
- (void)setTrafficCameraLabelCollideWithExternal:(bool)arg1;
- (void)setTrafficCameraLabelSelfCollide:(bool)arg1;
- (void)setTransitHighlighting:(bool)arg1;
- (void)setUseBuildingShadowTexture:(bool)arg1;
- (void)setUseMetalRenderer:(bool)arg1;
- (void)setUseStaticTrafficFeed:(bool)arg1;
- (void)setUseTransactionManager:(bool)arg1;
- (void)setVenueBoundsPaddingForCamera:(float)arg1;
- (void)setVenueZoomOutFalloff:(float)arg1;
- (bool)shouldDrawDebug;
- (bool)shouldUseTestTileLoader;
- (bool)showManeuverPoints;
- (bool)showNavCameraDebugConsole;
- (bool)showNavCameraDebugConsoleAttributes;
- (bool)showNavCameraDebugConsoleProperties;
- (bool)showNavCameraDebugLegend;
- (bool)showNavCameraDebugOverlay;
- (void)showPerformanceGroup:(unsigned int)arg1;
- (bool)showPreliminaryInfo;
- (bool)showTrafficCasing;
- (bool)suppressFootprints;
- (bool)texturedTrafficCasing;
- (bool)traceEtaDebugLog;
- (bool)trackingCameraZoomFurther;
- (bool)trafficCameraLabelCollideOutExternal;
- (bool)trafficCameraLabelCollideWithExternal;
- (bool)trafficCameraLabelSelfCollide;
- (bool)transitHighlighting;
- (bool)useBuildingShadowTexture;
- (bool)useMetalRenderer;
- (bool)useStaticTrafficFeed;
- (bool)useTransactionManager;
- (float)venueBoundsPaddingForCamera;
- (float)venueZoomOutFalloff;

@end
