/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCColorGradient : NSObject <NSCopying> {
    NSArray * _colors;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    NSArray * _locations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;

+ (id)blackGradient;
+ (id)colorGradientWithColors:(id)arg1 locations:(id)arg2;
+ (id)colorGradientWithConfigDict:(id)arg1;
+ (id)colorGradientWithPBColorGradient:(id)arg1;
+ (id)whiteGradient;

- (void).cxx_destruct;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 colors:(id)arg3 locations:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2;
- (id)locations;
- (id)pbColorGradient;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
