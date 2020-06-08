/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewActionSheetItemView : UIView {
    UIPreviewAction * _action;
    UIImageView * _imageView;
    UILabel * _label;
    bool  _selected;
}

@property (nonatomic, copy) UIPreviewAction *action;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) UILabel *label;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (void)_updateConstraints;
- (void)_updateImageFromAction;
- (void)_updateLabelFont;
- (void)_updateTitleFromAction;
- (id)action;
- (void)dealloc;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 action:(id)arg2;
- (id)label;
- (bool)selected;
- (void)setAction:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
