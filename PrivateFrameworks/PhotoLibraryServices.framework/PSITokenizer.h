/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSCharacterSet;

@interface PSITokenizer : NSObject {
    NSCharacterSet *_excludedSingleCharacterSet;
}

- (void)dealloc;
- (void)enumerateTokensInString:(id)arg1 withOptions:(long long)arg2 block:(id)arg3;
- (id)init;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3;

@end