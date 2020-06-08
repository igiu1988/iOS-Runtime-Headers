/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTEffectFrame : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    PCMatrix44Double * _clipTransform;
    bool  _isPosterFrame;
    PCMatrix44Double * _objectTransform;
    struct CGSize { 
        double width; 
        double height; 
    }  _relativeToSize;
    double  _rotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    PCMatrix44Double * _transform;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, retain) PCMatrix44Double *clipTransform;
@property (nonatomic) bool isPosterFrame;
@property (nonatomic, retain) PCMatrix44Double *objectTransform;
@property (nonatomic) struct CGSize { double x1; double x2; } relativeToSize;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x1; double x2; } scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, retain) PCMatrix44Double *transform;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })center;
- (id)clipTransform;
- (id)init;
- (bool)isPosterFrame;
- (id)objectTransform;
- (struct CGSize { double x1; double x2; })relativeToSize;
- (double)rotation;
- (struct CGPoint { double x1; double x2; })scale;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClipTransform:(id)arg1;
- (void)setIsPosterFrame:(bool)arg1;
- (void)setObjectTransform:(id)arg1;
- (void)setRelativeToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTransform:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)transform;

@end
