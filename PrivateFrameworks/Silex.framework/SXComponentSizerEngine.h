/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentSizerEngine : NSObject <SXComponentSizerEngine> {
    SXComponentTypeMatching * _factoryMatching;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXComponentTypeMatching *factoryMatching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFactory:(id)arg1;
- (id)factoryMatching;
- (id)init;
- (void)removeFactory:(id)arg1;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;

@end
