/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCSpotlightCollection : FPSpotlightCollection {
    NSString * _enumeratedItemIdentifier;
    NSArray * _fileTypes;
    unsigned long long  _itemOrigin;
    DOCQueryObservation * _observation;
}

@property (nonatomic, retain) NSString *enumeratedItemIdentifier;
@property (nonatomic, retain) NSArray *fileTypes;
@property (nonatomic) unsigned long long itemOrigin;
@property (nonatomic, retain) DOCQueryObservation *observation;

- (void).cxx_destruct;
- (void)_unregister;
- (void)dealloc;
- (id)enumeratedItemIdentifier;
- (void)enumerationWasResumed;
- (id)fileTypes;
- (id)initWithIdentifier:(id)arg1 fileTypes:(id)arg2;
- (unsigned long long)itemOrigin;
- (id)observation;
- (void)setEnumeratedItemIdentifier:(id)arg1;
- (void)setFileTypes:(id)arg1;
- (void)setItemOrigin:(unsigned long long)arg1;
- (void)setObservation:(id)arg1;
- (void)startObserving;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)startingObservationWithEnumerationProperties:(id)arg1;
- (void)stoppingObservation;
- (void)userSearchStringDidChange:(id)arg1;

@end
