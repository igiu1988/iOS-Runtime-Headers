/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile> {
    UIView * __contentView;
    UIView * __slideshowSnapshotView;
    UIView * _containerView;
    <PXUISlideshowViewTileDelegate> * _delegate;
    PXUIFloatingContentView * _floatingView;
    UIViewController * _slideshowViewController;
    bool  _slideshowViewHidden;
}

@property (setter=_setContentView:, nonatomic, retain) UIView *_contentView;
@property (setter=_setSlideshowSnapshotView:, nonatomic, retain) UIView *_slideshowSnapshotView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXUISlideshowViewTileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *slideshowViewController;
@property (getter=isSlideshowViewHidden, nonatomic) bool slideshowViewHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_contentView;
- (void)_setContentView:(id)arg1;
- (void)_setSlideshowSnapshotView:(id)arg1;
- (id)_slideshowSnapshotView;
- (void)_updateContentViewFrame;
- (void)_updateContentViewVisibility;
- (void)_updateSubviewOrdering;
- (void)becomeReusable;
- (id)delegate;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (bool)isSlideshowViewHidden;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setSlideshowViewController:(id)arg1;
- (void)setSlideshowViewHidden:(bool)arg1;
- (id)slideshowViewController;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;

@end
