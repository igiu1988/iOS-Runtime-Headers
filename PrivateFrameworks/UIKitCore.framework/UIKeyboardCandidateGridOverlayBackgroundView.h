/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView {
    unsigned long long  _highlightedRowIndex;
    double  _rowHeight;
}

@property (nonatomic) unsigned long long highlightedRowIndex;
@property (nonatomic) double rowHeight;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (struct CGColor { }*)backgroundColor;
+ (id)collectionViewKind;
+ (id)reuseIdentifier;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)applyLayoutAttributes:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)highlightedRowIndex;
- (double)rowHeight;
- (void)setHighlightedRowIndex:(unsigned long long)arg1;
- (void)setRowHeight:(double)arg1;

@end
