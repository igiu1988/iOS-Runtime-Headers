/* Generated by RuntimeBrowser.
 */

@protocol MSPCloudRequest <NSObject>

@required

- (void)addCloudAccessCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setNetworkBehaviorIsDiscretionary:(bool)arg1;
- (bool)shouldEnqueueDependenciesWhenPerformingAsCloudRequest;

@optional

- (unsigned long long)maximumRetries;

@end
