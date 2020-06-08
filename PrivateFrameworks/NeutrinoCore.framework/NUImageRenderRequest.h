/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageRenderRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    <NUExtentPolicy> * _extentPolicy;
    NUPixelFormat * _pixelFormat;
    <NURegionPolicy> * _regionPolicy;
    <NUScalePolicy> * _scalePolicy;
    <NUMutableImage> * _targetImage;
    struct { 
        long long width; 
        long long height; 
    }  _tileSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (retain) <NUExtentPolicy> *extentPolicy;
@property (retain) NUPixelFormat *pixelFormat;
@property (retain) <NURegionPolicy> *regionPolicy;
@property (retain) <NUScalePolicy> *scalePolicy;
@property (retain) <NUMutableImage> *targetImage;
@property struct { long long x1; long long x2; } tileSize;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extentPolicy;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)pixelFormat;
- (id)regionPolicy;
- (id)scalePolicy;
- (void)setColorSpace:(id)arg1;
- (void)setExtentPolicy:(id)arg1;
- (void)setPixelFormat:(id)arg1;
- (void)setRegionPolicy:(id)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)setTargetImage:(id)arg1;
- (void)setTileSize:(struct { long long x1; long long x2; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)targetImage;
- (struct { long long x1; long long x2; })tileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
