/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKAllowDrawingWhilePresentingPopoverView : UIView {
    <_PKAllowDrawingWhilePresentingPopoverViewDelegate> * _delegate;
    bool  _isHitTesting;
}

@property (nonatomic) <_PKAllowDrawingWhilePresentingPopoverViewDelegate> *delegate;
@property (nonatomic) bool isHitTesting;

- (void).cxx_destruct;
- (id)_rootAncestorViewOfDimmmingView:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)isHitTesting;
- (void)setDelegate:(id)arg1;
- (void)setIsHitTesting:(bool)arg1;

@end
