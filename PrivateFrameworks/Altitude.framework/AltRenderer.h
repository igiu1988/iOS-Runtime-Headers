/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <AltRendererCallback>, EAGLContext, CAEAGLLayer;

@interface AltRenderer : NSObject {
    struct CameraManager { 
        int (**_vptr$CameraManager)(); 
        bool_panBegin; 
        bool_panInProgress; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _panStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panPreviousCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panCurrentCursor; 
        bool_rotateBegin; 
        bool_rotateInProgress; 
        bool_rotateEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _rotateStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _rotatePreviousCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _rotateCurrentCursor; 
        double _rotateAngle; 
        bool_tiltBegin; 
        bool_tiltInProgress; 
        bool_tiltEnd; 
        bool_tiltRubberBandInProgress; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _tiltStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _tiltPreviousCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _tiltCurrentCursor; 
        double _tiltAngle; 
        double _tiltRubberBandAngle; 
        bool_zoomBegin; 
        bool_zoomInProgress; 
        bool_zoomEnd; 
        bool_zoomRubberBandInProgress; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _zoomStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _zoomPreviousCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _zoomCurrentCursor; 
        double _zoomFactor; 
        double _zoomRubberBandDistance; 
    struct TestManager { 
        struct vector<c3::test::TestComponent, std::__1::allocator<c3::test::TestComponent> > { 
            struct TestComponent {} *__begin_; 
            struct TestComponent {} *__end_; 
            struct __compressed_pair<c3::test::TestComponent *, std::__1::allocator<c3::test::TestComponent> > { 
                struct TestComponent {} *__first_; 
            } __end_cap_; 
        } _testComponents; 
        struct __wrap_iter<c3::test::TestComponent *> { 
            struct TestComponent {} *__i; 
        } _activeTest; 
        struct vector<bool, std::__1::allocator<bool> > { 
            unsigned long *__begin_; 
            unsigned int __size_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
                unsigned long __first_; 
            } __cap_alloc_; 
        } result; 
        struct ViewerImp {} *_viewer; 
    BOOL _alwaysDraws;
    int _backingHeight;
    int _backingWidth;
    <AltRendererCallback> *_callback;
    } _cameraManager;
    double _fps;
    unsigned int _frameCount;
    id _launchCallback;
    CAEAGLLayer *_layer;
    BOOL _needsToCreateFrameBuffer;
    id _sceneDidLoadCallback;
    unsigned int _systemIcon;
    } _testManager;
    BOOL _updateCalledNeedsRedraw;
    struct ViewerImp { int (**x1)(); struct GlobeViewImp {} *x2; int x3; int x4; int x5; double x6; double x7; struct Viewport { int x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Scene {} *x9; struct basic_ofstream<char, std::__1::char_traits<char> > { int (**x_10_1_1)(); struct basic_filebuf<char, std::__1::char_traits<char> > { int (**x_2_2_1)(); struct locale { struct __imp {} *x_2_3_1; } x_2_2_2; char *x_2_2_3; char *x_2_2_4; char *x_2_2_5; char *x_2_2_6; char *x_2_2_7; char *x_2_2_8; char *x_2_2_9; char *x_2_2_10; char *x_2_2_11; BOOL x_2_2_12[8]; unsigned int x_2_2_13; char *x_2_2_14; unsigned int x_2_2_15; struct __sFILE {} *x_2_2_16; struct codecvt<char, char, __mbstate_t> {} *x_2_2_17; union { BOOL x_18_3_1[128]; long long x_18_3_2; } x_2_2_18; unsigned int x_2_2_19; unsigned int x_2_2_20; boolx_2_2_21; boolx_2_2_22; boolx_2_2_23; } x_10_1_2; int (**x_10_1_3)(); unsigned int x_10_1_4; int x_10_1_5; int x_10_1_6; unsigned int x_10_1_7; unsigned int x_10_1_8; void *x_10_1_9; void *x_10_1_10; int (**x_10_1_11)(); int *x_10_1_12; unsigned int x_10_1_13; unsigned int x_10_1_14; long *x_10_1_15; unsigned int x_10_1_16; unsigned int x_10_1_17; void **x_10_1_18; unsigned int x_10_1_19; unsigned int x_10_1_20; struct basic_ostream<char, std::__1::char_traits<char> > {} *x_10_1_21; BOOL x_10_1_22; } x10; boolx11; boolx12; struct AnimationReferenceTimer { double x_13_1_1; double x_13_1_2; double x_13_1_3; } x13; boolx14; boolx15; float x16; float x17[12]; float x18[8]; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_19_1_1; } x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_20_1_1; } x20; boolx21; struct queue<c3::Viewer::ViewerMessage, std::__1::deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage>> > { struct deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage> > { struct __split_buffer<c3::Viewer::ViewerMessage *, std::__1::allocator<c3::Viewer::ViewerMessage *> > { int **x_1_3_1; int **x_1_3_2; int **x_1_3_3; struct __compressed_pair<c3::Viewer::ViewerMessage **, std::__1::allocator<c3::Viewer::ViewerMessage *> > { int **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<c3::Viewer::ViewerMessage> > { unsigned long x_3_3_1; } x_1_2_3; } x_22_1_1; } x22; unsigned int x23; struct ViewerCallback {} *x24; boolx25; boolx26; boolx27; struct set<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > { struct __tree<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > { struct __tree_node<c3::ManifestListener *, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<c3::ManifestListener *, void *>> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<c3::ManifestListener *> > { unsigned long x_3_3_1; } x_1_2_3; } x_28_1_1; } x28; struct shared_ptr<altitude::Stylesheet> { struct Stylesheet {} *x_29_1_1; struct __shared_weak_count {} *x_29_1_2; } x29; } *_viewer;
    bool_isLoading;
    unsigned int colorRenderbuffer;
    EAGLContext *context;
    unsigned int defaultFramebuffer;
    unsigned int depthRenderbuffer;
}

@property(readonly) struct ViewerImp { int (**x1)(); struct GlobeViewImp {} *x2; int x3; int x4; int x5; double x6; double x7; struct Viewport { int x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Scene {} *x9; /* Warning: unhandled struct encoding: '{basic_ofstream<char' */ struct x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; SEL x32; void*x33; void*x34; void*x35; void*x36; unsigned long x37; oneway int x38; void*x39; void*x40; void*x41; const unsigned int x42; void*x43; void*x44; void*x45; int (**x46)(); struct GlobeViewImp {} *x47; int x48; int x49; int x50; double x51; double x52; struct Viewport { int x_53_1_1; int x_53_1_2; int x_53_1_3; int x_53_1_4; } x53; struct Scene {} *x54; struct x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; int x85; in void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; int x98; in void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; int x111; in void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; }* viewer; /* unknown property attribute:  std::__1::less<c3::ManifestListener *> >=L}}}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}} */
@property BOOL alwaysDraws;
@property(readonly) int backingHeight;
@property(readonly) int backingWidth;
@property <AltRendererCallback> * callback;
@property(readonly) struct CameraManager { int (**x1)(); boolx2; boolx3; struct Position3d { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct Vector2i { int x_5_1_1; int x_5_1_2; } x5; struct Vector2i { int x_6_1_1; int x_6_1_2; } x6; boolx7; boolx8; boolx9; struct Position3d { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct Vector2i { int x_11_1_1; int x_11_1_2; } x11; struct Vector2i { int x_12_1_1; int x_12_1_2; } x12; double x13; boolx14; boolx15; boolx16; boolx17; struct Position3d { double x_18_1_1; double x_18_1_2; double x_18_1_3; } x18; struct Vector2i { int x_19_1_1; int x_19_1_2; } x19; struct Vector2i { int x_20_1_1; int x_20_1_2; } x20; double x21; double x22; boolx23; boolx24; boolx25; boolx26; struct Position3d { double x_27_1_1; double x_27_1_2; double x_27_1_3; } x27; struct Vector2i { int x_28_1_1; int x_28_1_2; } x28; struct Vector2i { int x_29_1_1; int x_29_1_2; } x29; double x30; double x31; }* cameraManager;
@property(readonly) double fps;
@property(copy) id launchCallback;
@property(copy) id sceneDidLoadCallback;
@property(readonly) unsigned int systemIcon;

- (struct CameraManager { int (**x1)(); boolx2; boolx3; struct Position3d { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct Vector2i { int x_5_1_1; int x_5_1_2; } x5; struct Vector2i { int x_6_1_1; int x_6_1_2; } x6; boolx7; boolx8; boolx9; struct Position3d { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct Vector2i { int x_11_1_1; int x_11_1_2; } x11; struct Vector2i { int x_12_1_1; int x_12_1_2; } x12; double x13; boolx14; boolx15; boolx16; boolx17; struct Position3d { double x_18_1_1; double x_18_1_2; double x_18_1_3; } x18; struct Vector2i { int x_19_1_1; int x_19_1_2; } x19; struct Vector2i { int x_20_1_1; int x_20_1_2; } x20; double x21; double x22; boolx23; boolx24; boolx25; boolx26; struct Position3d { double x_27_1_1; double x_27_1_2; double x_27_1_3; } x27; struct Vector2i { int x_28_1_1; int x_28_1_2; } x28; struct Vector2i { int x_29_1_1; int x_29_1_2; } x29; double x30; double x31; }*)cameraManager;
- (struct ViewerImp { int (**x1)(); struct GlobeViewImp {} *x2; int x3; int x4; int x5; double x6; double x7; struct Viewport { int x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Scene {} *x9; struct basic_ofstream<char, std::__1::char_traits<char> > { int (**x_10_1_1)(); struct basic_filebuf<char, std::__1::char_traits<char> > { int (**x_2_2_1)(); struct locale { struct __imp {} *x_2_3_1; } x_2_2_2; char *x_2_2_3; char *x_2_2_4; char *x_2_2_5; char *x_2_2_6; char *x_2_2_7; char *x_2_2_8; char *x_2_2_9; char *x_2_2_10; char *x_2_2_11; BOOL x_2_2_12[8]; unsigned int x_2_2_13; char *x_2_2_14; unsigned int x_2_2_15; struct __sFILE {} *x_2_2_16; struct codecvt<char, char, __mbstate_t> {} *x_2_2_17; union { BOOL x_18_3_1[128]; long long x_18_3_2; } x_2_2_18; unsigned int x_2_2_19; unsigned int x_2_2_20; boolx_2_2_21; boolx_2_2_22; boolx_2_2_23; } x_10_1_2; int (**x_10_1_3)(); unsigned int x_10_1_4; int x_10_1_5; int x_10_1_6; unsigned int x_10_1_7; unsigned int x_10_1_8; void *x_10_1_9; void *x_10_1_10; int (**x_10_1_11)(); int *x_10_1_12; unsigned int x_10_1_13; unsigned int x_10_1_14; long *x_10_1_15; unsigned int x_10_1_16; unsigned int x_10_1_17; void **x_10_1_18; unsigned int x_10_1_19; unsigned int x_10_1_20; struct basic_ostream<char, std::__1::char_traits<char> > {} *x_10_1_21; BOOL x_10_1_22; } x10; boolx11; boolx12; struct AnimationReferenceTimer { double x_13_1_1; double x_13_1_2; double x_13_1_3; } x13; boolx14; boolx15; float x16; float x17[12]; float x18[8]; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_19_1_1; } x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_20_1_1; } x20; boolx21; struct queue<c3::Viewer::ViewerMessage, std::__1::deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage>> > { struct deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage> > { struct __split_buffer<c3::Viewer::ViewerMessage *, std::__1::allocator<c3::Viewer::ViewerMessage *> > { int **x_1_3_1; int **x_1_3_2; int **x_1_3_3; struct __compressed_pair<c3::Viewer::ViewerMessage **, std::__1::allocator<c3::Viewer::ViewerMessage *> > { int **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<c3::Viewer::ViewerMessage> > { unsigned long x_3_3_1; } x_1_2_3; } x_22_1_1; } x22; unsigned int x23; struct ViewerCallback {} *x24; boolx25; boolx26; boolx27; struct set<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > { struct __tree<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > { struct __tree_node<c3::ManifestListener *, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<c3::ManifestListener *, void *>> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<c3::ManifestListener *> > { unsigned long x_3_3_1; } x_1_2_3; } x_28_1_1; } x28; struct shared_ptr<altitude::Stylesheet> { struct Stylesheet {} *x_29_1_1; struct __shared_weak_count {} *x_29_1_2; } x29; }*)viewer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)alwaysDraws;
- (int)backingHeight;
- (int)backingWidth;
- (id)callback;
- (void)checkGraphics;
- (void)clearAllMemory;
- (BOOL)createOrResizeFrameBuffers:(id)arg1;
- (void)dealloc;
- (void)destroyFrameBuffers;
- (void)didEnterBackground;
- (double)fps;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)launchCallback;
- (BOOL)needsRepaint;
- (void)pruneCachedMemory;
- (void)reload;
- (void)render;
- (BOOL)resizeFromLayer:(id)arg1;
- (void)runPerformanceTest:(int)arg1;
- (id)sceneDidLoadCallback;
- (void)setAlwaysDraws:(BOOL)arg1;
- (void)setCallback:(id)arg1;
- (void)setLaunchCallback:(id)arg1;
- (void)setSceneDidFinishLoadCompletion:(id)arg1;
- (void)setSceneDidLoadCallback:(id)arg1;
- (bool)setUseMipmaps:(BOOL)arg1;
- (unsigned int)systemIcon;
- (void)update;

@end