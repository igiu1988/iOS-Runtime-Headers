/* Generated by RuntimeBrowser.
 */

@protocol PXTilingScrollController <NSObject>

@required

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })activeRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainedVisibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (struct CGSize { float x1; float x2; })referenceSize;
- (PXTilingScrollInfo *)scrollInfo;
- (void)setContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsUpdate;
- (void)setScrollInfo:(PXTilingScrollInfo *)arg1;
- (void)setUpdateDelegate:(id <PXTilingScrollControllerUpdateDelegate>)arg1;
- (<PXTilingScrollControllerUpdateDelegate> *)updateDelegate;
- (void)updateIfNeeded;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;

@end