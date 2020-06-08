/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPRepTileGeometry : NSObject <TSDTileGeometryProviding> {
    struct vector<TSWPRepBoundsAnalyzer::Info, std::__1::allocator<TSWPRepBoundsAnalyzer::Info> > { 
        struct Info {} *__begin_; 
        struct Info {} *__end_; 
        struct __compressed_pair<TSWPRepBoundsAnalyzer::Info *, std::__1::allocator<TSWPRepBoundsAnalyzer::Info> > { 
            struct Info {} *__value_; 
        } __end_cap_; 
    }  _infos;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxTileSize;
    bool  _tileGeometryDirty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } maxTileSize;
@property (readonly) Class superclass;
@property (nonatomic) bool tileGeometryDirty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })maxTileSize;
- (void)setMaxTileSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTileGeometryDirty:(bool)arg1;
- (void)tileGeometryAddVisibileIndices:(id)arg1 withLayer:(id)arg2 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)tileGeometryConfigureWithLayer:(id)arg1 tileLayer:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)tileGeometryCountWithLayer:(id)arg1;
- (bool)tileGeometryDirty;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileGeometryRectWithLayer:(id)arg1 atIndex:(unsigned long long)arg2 mask:(unsigned int*)arg3;
- (bool)updateWithLayer:(id)arg1 scale:(double)arg2 columns:(id)arg3;

@end
