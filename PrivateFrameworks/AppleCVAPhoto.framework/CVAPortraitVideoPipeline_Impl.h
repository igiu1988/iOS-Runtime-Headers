/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline> {
    struct __CVPixelBufferPool { } * _canonicalDisparityPixelBufferPool;
    int  _debugGPUCaptureFrameNumber;
    bool  _debugLogTransition;
    bool  _debugLogTransitionPrintTrivial01;
    struct unique_ptr<DisparityAutofocus, std::__1::default_delete<DisparityAutofocus> > { 
        struct __compressed_pair<DisparityAutofocus *, std::__1::default_delete<DisparityAutofocus> > { 
            struct DisparityAutofocus {} *__value_; 
        } __ptr_; 
    }  _disparityAutofocus;
    struct unique_ptr<DisparityConversion, std::__1::default_delete<DisparityConversion> > { 
        struct __compressed_pair<DisparityConversion *, std::__1::default_delete<DisparityConversion> > { 
            struct DisparityConversion {} *__value_; 
        } __ptr_; 
    }  _disparityConversion;
    struct unique_ptr<GeometricTransformation, std::__1::default_delete<GeometricTransformation> > { 
        struct __compressed_pair<GeometricTransformation *, std::__1::default_delete<GeometricTransformation> > { 
            struct GeometricTransformation {} *__value_; 
        } __ptr_; 
    }  _disparityGeometricTransformation;
    struct unique_ptr<DisparityStatistics, std::__1::default_delete<DisparityStatistics> > { 
        struct __compressed_pair<DisparityStatistics *, std::__1::default_delete<DisparityStatistics> > { 
            struct DisparityStatistics {} *__value_; 
        } __ptr_; 
    }  _disparityStatistics;
    NSDictionary * _faceKitProcessOutput;
    CVAFilterAlphaBlend * _filterAlphaBlend;
    struct unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine> > { 
        struct __compressed_pair<cva::FocusStateMachine *, std::__1::default_delete<cva::FocusStateMachine> > { 
            struct FocusStateMachine {} *__value_; 
        } __ptr_; 
    }  _focusStateMachine;
    struct unique_ptr<FocusStatsPostprocessing, std::__1::default_delete<FocusStatsPostprocessing> > { 
        struct __compressed_pair<FocusStatsPostprocessing *, std::__1::default_delete<FocusStatsPostprocessing> > { 
            struct FocusStatsPostprocessing {} *__value_; 
        } __ptr_; 
    }  _focusStatsPostprocessing;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateRelightSourceBuffer;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateTransitionBufferFrom;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateTransitionBufferTo;
    struct CVAPhotoMetalContext { 
        <MTLDeviceSPI> *device; 
        <MTLCommandQueue> *commandQueue; 
        <MTLLibrary> *library; 
        <MTLCaptureScope> *captureScope; 
        struct CVAPerfEndTimeProfilerSet { 
            bool _display; 
            bool _log; 
            long long _frameIndex; 
            struct unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > > > > { 
                struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > > > > { 
                    struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> *> > > { 
                        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> *> > > { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> {} **__value_; 
                            struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> *> > { 
                                struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> *> > { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, void *> *> {} *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, boost::accumulators::tag::mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } _nameToTimeStats; 
            struct optional<CVAPerfEndTimeProfilerSet::TimeSample> { 
                union { 
                    BOOL __null_state_; 
                    struct TimeSample { 
                        double endTime; 
                    } __val_; 
                } ; 
                bool __engaged_; 
            } _prevTimeSample; 
            double _frameTotalTime; 
            struct mutex { 
                struct _opaque_pthread_mutex_t { 
                    long long __sig; 
                    BOOL __opaque[56]; 
                } __m_; 
            } _mutex; 
            <MTLTexture> *_texStubSrc; 
            <MTLTexture> *_texStubDst; 
        } profiler; 
        bool _alreadyInCaptureScope; 
    }  _metalContext;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct Preferences { 
        bool drawFocusMachineState; 
        int overlayShiftOnRendering; 
        int displayFrameTime; 
        int noiseBits; 
        int fNumber_tenths; 
        bool bypassGPUProcessing; 
        bool bypassCPUProcessing; 
    }  _preferences;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _referenceLensPosition_um;
    struct RelightingTransitionData { 
        float proxyToFaceEffectLerp; 
        float originalToRelightEffectLerp; 
        float backgroundAlphaMultiplier; 
        float colorCubeIntensity; 
        float colorCubeLerpSelfToOther; 
        int otherCubeType; 
        float rgbTransformMapLerpSelfToOther; 
    }  _relightingTransitionData;
    struct unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine> > { 
        struct __compressed_pair<SdofStateMachine *, std::__1::default_delete<SdofStateMachine> > { 
            struct SdofStateMachine {} *__value_; 
        } __ptr_; 
    }  _sdofIntensityStateMachine;
    struct unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine> > { 
        struct __compressed_pair<StageLightStateMachine *, std::__1::default_delete<StageLightStateMachine> > { 
            struct StageLightStateMachine {} *__value_; 
        } __ptr_; 
    }  _stageLightStateMachine;
    struct TransitionData { 
        bool _inTransition; 
    }  _transitionData;
    struct __CVBuffer { } * _untransformedCanonicalDisparityPixelBuffer;
    VideoMattingMetal * _vmAccelerator;
    struct DynamicMetaParams { 
        float mattingCoeffUpdateRate; 
        float mattingCoeffUpdateRateFast; 
        float mattingCoeffColorStd; 
        float mattingCoeffColorStdFast; 
    }  _vmDynamicMetaParams;
    struct VideoMattingDynamicParams { 
        float updateRate; 
        float sdofDeltaCanonicalDisparity; 
        float alphaCoeffFilterColorStd; 
        float alphaGuidedFilterEps; 
        float alphaGammaExponent; 
        float focusCanonicalDisparity; 
        float backgroundCanonicalDisparity; 
        float thresholdHardness; 
        struct array<float, 3> { 
            float __elems_[3]; 
        } gravity; 
        float alphaMatteDeltaCanonicalDisparity; 
    }  _vmDynamicParams;
    struct VideoPostprocessingParams { 
        bool useFaceAsFocus; 
        float faceSizeRatioInFocus; 
        bool fillLargeHolesWithBackground; 
        float disparityIntervalInHoleSearch; 
        float backgroundFillMarginFromValidDisparity_px; 
        bool useTemporalRejection; 
    }  _vmPostprocessingParams;
    struct VideoMattingStaticParams { 
        unsigned int colorWidth; 
        unsigned int colorHeight; 
        unsigned int shiftWidth; 
        unsigned int shiftHeight; 
        unsigned int alphaWidth; 
        unsigned int alphaHeight; 
        int guidedFilterWidth; 
        int guidedFilterHeight; 
        unsigned int kernelSize; 
        float referenceShift; 
        float guidedFilterUnconfidentWeight; 
        float guidedFilterMinDistToDeweight; 
        float alphaMaxLaplacian; 
        float alphaContrastExponent; 
        float shiftFilterColorStd; 
        float shiftFilterUpdateRate; 
        float maxShiftFillingInconsistency; 
        float maxShiftFillingDistFromFg; 
        unsigned int maxDistToPushShiftEdgesFwd; 
        unsigned int maxDistToPushShiftEdgesRev; 
        int shiftPushingBgToFgShiftDifference; 
    }  _vmStaticParams;
    VideoRelightingMetal * _vrAccelerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) <CVAVideoPipelineProperties> *videoPipelineProperties;

+ (void)drawCanonicalDisparity:(struct __CVBuffer { }*)arg1 onColor:(struct __CVBuffer { }*)arg2 focusMachineState:(int)arg3 offsetX:(unsigned long long)arg4 offsetY:(unsigned long long)arg5;
+ (int)pixelBufferPoolCreateWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 pool:(struct __CVPixelBufferPool {}**)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)extractMatteWithRequest:(id)arg1;
- (int)extractMatteWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3;
- (id)initWithProperties:(id)arg1 error:(id*)arg2;
- (id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(bool)arg3 gravity:(struct CVAVector { double x1; double x2; double x3; })arg4 transitionData:(const struct TransitionData { bool x1; }*)arg5 mattingCompletionHandler:(id /* block */)arg6 isFinalStage:(bool)arg7 status:(int*)arg8;
- (int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg1;
- (id)internal_postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 isFinalStage:(bool)arg3 status:(int*)arg4;
- (void)internal_relightWithRequest:(id)arg1 intermediateSourceBuffer:(struct __CVBuffer { }*)arg2 faceKitProcessOutput:(id)arg3 mattingResult:(id)arg4 singleCubeData:(id)arg5 transitionData:(const struct RelightingTransitionData { float x1; float x2; float x3; float x4; float x5; int x6; float x7; }*)arg6 portraitCompletionHandler:(id /* block */)arg7 timestamp:(long long)arg8 status:(int*)arg9;
- (void)internal_renderStageLightWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(id /* block */)arg3 status:(int*)arg4;
- (void)internal_renderWithRequest:(id)arg1 dstBuffer:(struct __CVBuffer { }*)arg2 mattingResult:(id)arg3 portraitCompletionHandler:(id /* block */)arg4 status:(int*)arg5 timestamp:(long long)arg6;
- (int)postprocessDisparityWithRequest:(id)arg1;
- (int)postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2;
- (int)renderSingleEffectWithRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3 disparityPostprocessingCompletionHandler:(id /* block */)arg4 mattingCompletionHandler:(id /* block */)arg5 portraitCompletionHandler:(id /* block */)arg6 requestFrom:(id)arg7 requestTo:(id)arg8;
- (int)renderWithRequest:(id)arg1;
- (int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3 portraitCompletionHandler:(id /* block */)arg4;
- (int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(id /* block */)arg6 mattingCompletionHandler:(id /* block */)arg7 portraitCompletionHandler:(id /* block */)arg8;
- (void)setVideoPipelineProperties:(id)arg1;
- (bool)validateDisparityPostprocessingRequest:(id)arg1 error:(id*)arg2;
- (bool)validateMattingRequest:(id)arg1 error:(id*)arg2;
- (bool)validatePortraitRequest:(id)arg1 error:(id*)arg2;
- (bool)validateSegmentationPixelBuffer:(struct __CVBuffer { }*)arg1 matchFormat:(unsigned int)arg2 error:(id*)arg3;
- (id)videoPipelineProperties;

@end
