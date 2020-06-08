/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionResponseCache : NSObject

+ (void)restartFeedbackTimers;
+ (id)retrieveActionResponseFromCachePath:(id)arg1 maxValidCacheAge:(double)arg2 cacheAgeOut:(double*)arg3 unlink:(bool)arg4;
+ (id)retrieveActionResponseWithConsumerSubType:(unsigned char)arg1 cacheAgeOut:(double*)arg2 unlink:(bool)arg3;
+ (bool)storeActionResponse:(id)arg1 cachePath:(id)arg2;
+ (bool)storeActionResponseAndStartTimer:(id)arg1;
+ (bool)unexpiredCacheExistsForConsumerSubType:(unsigned char)arg1 cacheAgeOut:(double*)arg2;

@end
