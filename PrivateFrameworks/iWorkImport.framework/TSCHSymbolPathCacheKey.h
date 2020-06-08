/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSymbolPathCacheKey : NSObject <NSCopying> {
    bool  mForHitCheck;
    double  mSize;
    TSDStroke * mStroke;
    int  mSymbolType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSymbolType:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(bool)arg4;
- (bool)isEqual:(id)arg1;

@end
