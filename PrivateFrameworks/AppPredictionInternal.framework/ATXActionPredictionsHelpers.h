/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionPredictionsHelpers : NSObject

+ (void)applyJointLogProbabilityToActionPredictions:(id)arg1 withAppActionTypePredictionScore:(double)arg2;
+ (void)applyLogOfLinearProbabilityTransformationToPredictions:(id)arg1;
+ (void)applyLogSoftmaxToPredictions:(id)arg1;
+ (void)applyNormalizationToPredictions:(id)arg1;
+ (void)keepRandomPredictionItems:(id)arg1 limit:(unsigned long long)arg2 predictionItemsToKeep:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x_3_1_1; } x3; }*)arg3;
+ (id)limitTheNumberOfPredictions:(id)arg1 withLimit:(int)arg2;
+ (id)processCandidateActionPredictions:(id)arg1 limit:(int)arg2 predictionItemsToKeep:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x_3_1_1; } x3; }*)arg3;
+ (void)sortPredictions:(id)arg1;
+ (id)sortedPredictions:(id)arg1;

@end
