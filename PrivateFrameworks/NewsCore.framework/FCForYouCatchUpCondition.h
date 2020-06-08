/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouCatchUpCondition : NSObject {
    long long  _contentTypes;
    id /* block */  _testBlock;
}

@property (nonatomic) long long contentTypes;
@property (nonatomic, copy) id /* block */ testBlock;

+ (id)caughtUpWithContentTypes:(long long)arg1;
+ (id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (long long)contentTypes;
- (bool)isSatisfiedWithCatchUpOperation:(id)arg1;
- (void)setContentTypes:(long long)arg1;
- (void)setTestBlock:(id /* block */)arg1;
- (id /* block */)testBlock;

@end
