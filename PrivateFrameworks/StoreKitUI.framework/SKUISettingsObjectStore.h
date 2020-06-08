/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingsObjectStore : NSObject {
    NSMutableOrderedSet * _allObjects;
    bool  _dirty;
    NSMutableOrderedSet * _visibleObjects;
}

- (void).cxx_destruct;
- (void)_updateVisibleOrder;
- (void)addObject:(id)arg1 hidden:(bool)arg2;
- (id)allObjects;
- (bool)containsObject:(id)arg1;
- (id)description;
- (void)enumerateObjects:(id /* block */)arg1;
- (void)enumerateVisibleObjects:(id /* block */)arg1;
- (void)hideObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfVisibleObject:(id)arg1;
- (id)init;
- (unsigned long long)numberOfObjects;
- (unsigned long long)numberOfVisibleObjects;
- (id)objectAtIndex:(unsigned long long)arg1;
- (bool)objectIsVisible:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)revealObject:(id)arg1;
- (id)visibleObjectAtIndex:(unsigned long long)arg1;

@end
