/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder {
    NSSet * _stagedEvents;
}

@property (nonatomic, retain) NSSet *stagedEvents;

- (void).cxx_destruct;
- (void)_setupWithExistingTrigger:(id)arg1;
- (id)_updateEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (void)setRecurrences:(id)arg1;
- (void)setStagedEvents:(id)arg1;
- (id)stagedEvents;

@end
