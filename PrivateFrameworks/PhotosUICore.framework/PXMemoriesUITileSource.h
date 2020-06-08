/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesUITileSource : NSObject <PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler> {
    PXFeedDateFormatter * __dateFormatter;
    PXPhotoKitUIMediaProvider * __mediaProvider;
    unsigned long long  __memoriesStyle;
    bool  _canRenderTextAsynchronously;
    NSMutableSet * _checkedOutTiles;
    <PXMemoriesUITileSourceDelegate> * _delegate;
    struct { 
        bool memoryToPreheatForIndexPath; 
    }  _delegateRespondsTo;
    NSIndexSet * _providingTilesForKinds;
    PXUIScrollViewController * _scrollViewController;
    PXReusableObjectPool * _viewTilePool;
}

@property (nonatomic, readonly) PXFeedDateFormatter *_dateFormatter;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) unsigned long long _memoriesStyle;
@property (nonatomic) bool canRenderTextAsynchronously;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXMemoriesUITileSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *providingTilesForKinds;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXReusableObjectPool *viewTilePool;

- (void).cxx_destruct;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3;
- (id)_dateFormatter;
- (void)_dateFormatterChanged:(id)arg1;
- (void)_getImageRequester:(id*)arg1 title:(id*)arg2 subtitle:(id*)arg3 forIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4 dataSource:(id)arg5;
- (id)_mediaProvider;
- (unsigned long long)_memoriesStyle;
- (void*)_tileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)_updateDateLabelTile:(id)arg1;
- (bool)canRenderTextAsynchronously;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithScrollViewController:(id)arg1 memoriesStyle:(unsigned long long)arg2;
- (bool)providesTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)providingTilesForKinds;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (id)scrollViewController;
- (void)setCanRenderTextAsynchronously:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3 context:(void*)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3 context:(void*)arg4;
- (id)viewTilePool;

@end
