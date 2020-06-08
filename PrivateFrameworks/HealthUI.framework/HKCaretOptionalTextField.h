/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCaretOptionalTextField : UITextField {
    bool  _allowsSelection;
    bool  _disableActions;
}

@property (nonatomic) bool allowsSelection;
@property (nonatomic) bool disableActions;

- (double)actualMinimumFontSize;
- (bool)allowsSelection;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (bool)disableActions;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAllowsSelection:(bool)arg1;
- (void)setDisableActions:(bool)arg1;

@end
