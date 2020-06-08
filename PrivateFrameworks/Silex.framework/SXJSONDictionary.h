/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration> {
    unsigned long long  _count;
    NSDictionary * _json;
    NSArray * _keys;
    id /* block */  _objectValueClassBlock;
    NSMutableDictionary * _objects;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSString * _specificationVersion;
    id /* block */  _valueClassBlock;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *json;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) id /* block */ objectValueClassBlock;
@property (nonatomic, readonly) NSMutableDictionary *objects;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, readonly) id /* block */ valueClassBlock;

- (void).cxx_destruct;
- (id)NSDictionary;
- (id)allKeys;
- (id)allObjects;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)initWithValueClassBlock:(id /* block */)arg1 objectValueClassBlock:(id /* block */)arg2 purgeBlock:(id /* block */)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;
- (id)json;
- (id)jsonDictionary;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (id /* block */)objectValueClassBlock;
- (id)objects;
- (id)semaphore;
- (id)specificationVersion;
- (id /* block */)valueClassBlock;

@end
