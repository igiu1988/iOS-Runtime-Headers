/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPosterHeaderView : UIView {
    PXGradientView * _bottomGradientView;
    PXCMMImageView * _imageView;
    bool  _showStatusCheckmark;
    PXCMMPosterHeaderViewSpec * _spec;
    UIImageView * _statusCheckmark;
    UILabel * _statusLabel;
    NSString * _statusString;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
    PXGradientView * _topGradientView;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) <PXUIImageProvider> *mediaProvider;
@property (nonatomic) bool showStatusCheckmark;
@property (nonatomic, copy) NSString *statusString;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_performLayoutWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateFonts;
- (id)asset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPresentationStyle:(long long)arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)mediaProvider;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setShowStatusCheckmark:(bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showStatusCheckmark;
- (id)statusString;
- (id)subtitle;
- (id)title;

@end
