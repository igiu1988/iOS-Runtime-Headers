/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKMeshGraph : GKGraph {
    struct GKCMeshGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; unsigned char x4; long x5; int x6; /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*x7; void*x8; void*x9; const void*x10; int (**x11)(); struct vector<ClipperLib::OutRec *, std::__1::allocator<ClipperLib::OutRec *> > { struct OutRec {} **x_12_1_1; struct OutRec {} **x_12_1_2; struct __compressed_pair<ClipperLib::OutRec **, std::__1::allocator<ClipperLib::OutRec *> > { struct OutRec {} **x_3_2_1; } x_12_1_3; } x12; struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_13_1_1; struct Join {} **x_13_1_2; struct __compressed_pair<ClipperLib::Join **, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_3_2_1; } x_13_1_3; } x13; struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_14_1_1; struct Join {} **x_14_1_2; struct __compressed_pair<ClipperLib::Join **, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_3_2_1; } x_14_1_3; } x14; } * _cMeshGraph;
    Class  _nodeClass;
    NSMutableArray * _sourceObstacles;
}

@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic, readonly) NSArray *obstacles;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic) unsigned long long triangulationMode;

+ (id)graphWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3; // needs 3 arg types, found 1: float
+ (id)graphWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3 nodeClass:(void *)arg4; // needs 4 arg types, found 2: float, Class
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
- (float)bufferRadius;
- (struct GKCMeshGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; unsigned char x4; long x5; int x6; /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*x7; void*x8; void*x9; const void*x10; int (**x11)(); struct vector<ClipperLib::OutRec *, std::__1::allocator<ClipperLib::OutRec *> > { struct OutRec {} **x_12_1_1; struct OutRec {} **x_12_1_2; struct __compressed_pair<ClipperLib::OutRec **, std::__1::allocator<ClipperLib::OutRec *> > { struct OutRec {} **x_3_2_1; } x_12_1_3; } x12; struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_13_1_1; struct Join {} **x_13_1_2; struct __compressed_pair<ClipperLib::Join **, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_3_2_1; } x_13_1_3; } x13; struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_14_1_1; struct Join {} **x_14_1_2; struct __compressed_pair<ClipperLib::Join **, std::__1::allocator<ClipperLib::Join *> > { struct Join {} **x_3_2_1; } x_14_1_3; } x14; }*)cMeshGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3; // needs 3 arg types, found 1: float
- (id)initWithBufferRadius:(void *)arg1 minCoordinate:(void *)arg2 maxCoordinate:(void *)arg3 nodeClass:(void *)arg4; // needs 4 arg types, found 2: float, Class
- (id)initWithCoder:(id)arg1;
- (/* Warning: unhandled struct encoding: '{GKCGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@}' */ struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; }*)makeCGraph;
- (bool)makeNodesFromTriangleCenters;
- (bool)makeNodesFromTriangleEdgeMidpoints;
- (bool)makeNodesFromTriangleVertices;
- (Class)nodeClass;
- (id)obstacles;
- (void)removeObstacles:(id)arg1;
- (void)setMakeNodesFromTriangleCenters:(bool)arg1;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(bool)arg1;
- (void)setMakeNodesFromTriangleVertices:(bool)arg1;
- (void)setTriangulationMode:(unsigned long long)arg1;
- (struct GKTriangle { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })triangleAtIndex:(unsigned long long)arg1;
- (unsigned long long)triangleCount;
- (void)triangulate;
- (unsigned long long)triangulationMode;

@end
