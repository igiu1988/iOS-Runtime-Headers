/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteLine : NSObject {
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _bounds;
    double  _boundsInWorldUnit;
    double  _boundsUnitsPerMeter;
    double  _builtViewUnitsPerPoint;
    bool  _hasNewRoadMatches;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _inverseMatrix;
    double  _lastTrafficTimeStamp;
    struct ManeuverArrowCoordinates { 
        struct vector<md::ManeuverArrowInfo, std::__1::allocator<md::ManeuverArrowInfo> > { 
            struct ManeuverArrowInfo {} *__begin_; 
            struct ManeuverArrowInfo {} *__end_; 
            struct __compressed_pair<md::ManeuverArrowInfo *, std::__1::allocator<md::ManeuverArrowInfo> > { 
                struct ManeuverArrowInfo {} *__value_; 
            } __end_cap_; 
        } _maneuverArrows; 
    }  _maneuverArrowCoordinates;
    bool  _matchToRoads;
    double  _metersPerPoint;
    <VKRouteLineObserverProtocol> * _observer;
    VKPolylineOverlay * _overlay;
    VKPolylineOverlayRenderRegion * _renderRegion;
    NSSet * _retainedTiles;
    struct vector<geo::fast_shared_ptr<md::RouteLineSection, std::allocator>, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> > > { 
        struct fast_shared_ptr<md::RouteLineSection, std::allocator> {} *__begin_; 
        struct fast_shared_ptr<md::RouteLineSection, std::allocator> {} *__end_; 
        struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> *, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> > > { 
            struct fast_shared_ptr<md::RouteLineSection, std::allocator> {} *__value_; 
        } __end_cap_; 
    }  _sections;
    double  _simplificationEpsilonPoints;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _userLocation;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _userLocationIndex;
    struct fast_shared_ptr<md::RouteLineSection, std::allocator> { 
        struct _fast_shared_ptr_control {} *_control; 
    }  _userLocationSection;
    double  _viewUnitsPerPoint;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  bounds; /* unknown property attribute:  1>=[2d]}} */
@property bool hasNewRoadMatches;
@property (nonatomic) <VKRouteLineObserverProtocol> *observer;
@property (nonatomic, readonly) VKPolylineOverlay *overlay;
@property (nonatomic, readonly) VKPolylineOverlayRenderRegion *renderRegion;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<geo::fast_shared_ptr<md::RouteLineSection' */ struct  sections; /* unknown property attribute:  std::allocator>}}} */
@property (nonatomic) double simplificationEpsilonPoints;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateBounds:(id)arg1;
- (void)_updateTilesCovered:(id)arg1;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })bounds;
- (double)boundsUnitsPerMeter;
- (bool)buildRouteLine:(id)arg1 tiles:(id)arg2 viewUnitsPerPoint:(double)arg3 force:(bool)arg4 selected:(bool)arg5 isNavMode:(bool)arg6;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)dealloc;
- (void)forEachSection:(id /* block */)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (bool)hasNewRoadMatches;
- (id)initWithPolylineOverlay:(id)arg1;
- (struct Matrix<double, 4, 4> { double x1[16]; })inverseManeuverTransform;
- (bool)isTrafficUpToDate;
- (bool)isTrafficUptoDate:(double)arg1;
- (struct vector<gm::Matrix<float, 2, 1>, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> {} *x_3_1_1; } x3; })maneuverPoints;
- (struct Matrix<double, 4, 4> { double x1[16]; })maneuverTransform;
- (bool)needsUpdateForViewingScale:(double)arg1;
- (id)observer;
- (id)overlay;
- (id)renderRegion;
- (struct vector<geo::fast_shared_ptr<md::RouteLineSection, std::allocator>, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> > > { struct fast_shared_ptr<md::RouteLineSection, std::allocator> {} *x1; struct fast_shared_ptr<md::RouteLineSection, std::allocator> {} *x2; struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> *, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> > > { struct fast_shared_ptr<md::RouteLineSection, std::allocator> {} *x_3_1_1; } x3; })sections;
- (void)setHasNewRoadMatches:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setSimplificationEpsilonPoints:(double)arg1;
- (double)simplificationEpsilonPoints;
- (void)splitRouteLineAtAnnotation:(id)arg1;

@end
