/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFObjectObserver : HMFObject {
    unsigned long long  _cachedHash;
    id /* block */  _deallocationBlock;
    NSUUID * _identifier;
    id  _observedObject;
}

@property (readonly) unsigned long long cachedHash;
@property (nonatomic, copy) id /* block */ deallocationBlock;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) id observedObject;

- (void).cxx_destruct;
- (void)_startObserving;
- (void)_stopObserving;
- (unsigned long long)cachedHash;
- (void)dealloc;
- (id /* block */)deallocationBlock;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithObservedObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)observedObject;
- (id)observerKey;
- (void)setDeallocationBlock:(id /* block */)arg1;

@end
