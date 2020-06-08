/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCScreenCapture : VCVideoCapture <VideoCaptureProtocol> {
    int  _captureFramerate;
    int  _captureHeight;
    int  _captureWidth;
    bool  _isCapturing;
    bool  _isPreviewing;
    NSDictionary * _options;
    struct __CVPixelBufferPool { } * _rotationBufferPool;
    struct OpaqueVTImageRotationSession { } * _rotationSession;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _screenCaptureLock;
    struct OpaqueFigVirtualDisplaySession { } * _session;
}

- (int)_startCapture;
- (void)callbackWithEventString:(id)arg1;
- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (void)capturedScreen:(struct opaqueCMSampleBuffer { }*)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 desRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(unsigned int)arg4;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (id)getCameraUID;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 error:(int*)arg5;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (int)setCameraWithUID:(id)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@end
