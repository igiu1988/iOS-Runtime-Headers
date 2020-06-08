/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationBezelView : NTKRichComplicationView {
    double  _bezelTextAlpha;
    double  _bezelTextWidthInRadius;
    <NTKRichComplicationBezelViewDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitTestBounds;
    UIBezierPath * _hitTestPath;
    long long  _hitTestShape;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitTestShapeFrame;
    UIColor * _platterTextColor;
}

@property (nonatomic) double bezelTextAlpha;
@property (nonatomic) double bezelTextWidthInRadius;
@property (nonatomic) <NTKRichComplicationBezelViewDelegate> *delegate;
@property (nonatomic, retain) UIColor *platterTextColor;

+ (id)_createHitTestPathWithViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shape:(long long)arg2 shapeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forDevice:(id)arg4;
+ (id)keylineImageWithFilled:(bool)arg1 forDevice:(id)arg2;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)layoutRuleForState:(long long)arg1 faceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dialDiameter:(double)arg3 forDevice:(id)arg4;
+ (void)startDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(bool)arg3 bezelTextUpdateHandler:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForState:(long long)arg1;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2 rotationInDegree:(double)arg3 centerScale:(double)arg4;
- (void)_updateHitTestShape:(long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)bezelTextAlpha;
- (double)bezelTextWidthInRadius;
- (id)delegate;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (id)platterTextColor;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBezelTextAlpha:(double)arg1;
- (void)setBezelTextWidthInRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlatterTextColor:(id)arg1;

@end
