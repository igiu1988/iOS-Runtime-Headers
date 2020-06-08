/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPageControllerScrollView : UIScrollView {
    UIPageController * _pageController;
}

@property (nonatomic) UIPageController *pageController;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (unsigned long long)_abuttedPagingEdges;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (void)_scrollViewWillBeginDragging;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)layoutSubviews;
- (id)pageController;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPageController:(id)arg1;

@end
