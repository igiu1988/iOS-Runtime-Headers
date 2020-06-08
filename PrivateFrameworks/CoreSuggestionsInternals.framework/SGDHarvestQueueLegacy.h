/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueLegacy : SGDHarvestQueue {
    bool  _highPriority;
    SGDWorkQueue * _workQueue;
}

- (void).cxx_destruct;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (void)close;
- (unsigned long long)count;
- (void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2;
- (id)initWithDirectory:(id)arg1 highPriority:(bool)arg2;
- (void)pop:(id /* block */)arg1;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;

@end
