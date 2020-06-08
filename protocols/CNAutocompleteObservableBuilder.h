/* Generated by RuntimeBrowser.
 */

@protocol CNAutocompleteObservableBuilder <NSObject>

@required

- (void)addCachedCalendarServerObservable:(CNObservable *)arg1;
- (void)addCachedDirectoryServerObservable:(CNObservable *)arg1;
- (void)addCalendarServerObservable:(CNObservable *)arg1;
- (void)addContactsObservable:(CNObservable *)arg1;
- (void)addCoreRecentsObservable:(CNObservable *)arg1;
- (void)addDirectoryServerObservable:(CNObservable *)arg1;
- (void)addDuetObservable:(void *)arg1 doOnTimeout:(void *)arg2; // needs 2 arg types, found 6: CNObservable *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)addSuggestionsObservable:(CNObservable *)arg1;
- (void)addSupplementalObservable:(CNObservable *)arg1;
- (CNObservable *)makeObservable;
- (void)setNetworkActivityDidStartHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setNetworkActivityDidStopHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setNetworkActivityStartDelay:(double)arg1;
- (void)setSupplementalResultsUseNetwork:(bool)arg1;

@end
