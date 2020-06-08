/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INUpcomingMediaManager : NSObject {
    CSSearchableIndex * _index;
}

@property (nonatomic, readonly) CSSearchableIndex *index;

+ (id)mediaQueue;
+ (id)sharedManager;

- (void).cxx_destruct;
- (long long)_predictionModeForBundleId:(id)arg1 type:(long long)arg2 error:(id*)arg3;
- (void)_replaceMediaIntents:(id)arg1;
- (id)index;
- (id)initWithSearchableIndex:(id)arg1;
- (id)keyWithMediaItemTypeName:(id)arg1 bundleId:(id)arg2;
- (void)setPredictionMode:(long long)arg1 forType:(long long)arg2;
- (void)setSuggestedMediaIntents:(id)arg1;

@end
