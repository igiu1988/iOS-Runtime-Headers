/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceExecutable, BWInferencePreventable, BWInferenceScalingProvider> {
    bool  _applyUprightExifOrientation;
    bool  _applyValidBufferRect;
    NSDictionary * _colorSpaceProperties;
    bool  _computeAndApplyAspectRatioCrop;
    float  _customFiltersLastUsedHorizontalRatio;
    float  _customFiltersLastUsedVerticalRatio;
    BWInferenceVideoRequirement * _inputRequirement;
    float  _outputAspectRatio;
    NSArray * _outputRequirements;
    FigM2MController * _scalerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mustExecuteWhenAllowed;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (void)_configureCustomFiltersForScalingFromSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 destinationWidth:(unsigned long long)arg3 destinationHeight:(unsigned long long)arg4;
- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (id)extractable;
- (id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 applyingValidBufferRectIfPresent:(bool)arg3;
- (bool)mustExecuteWhenAllowed;
- (id)newStorage;
- (int)prepareForExecution;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)propagatable;
- (id)submittable;
- (int)type;

@end
