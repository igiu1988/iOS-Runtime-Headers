/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {
    bool  _isAttributed;
    UIColor * _textColor;
    UILabel * _titleLabel;
    bool  _usesModernStyle;
}

@property (nonatomic, readonly) bool _isAttributed;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_canBeReusedInPickerView;
- (bool)_isAttributed;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (id)_titleLabel;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)attributedTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isModern:(bool)arg3 textColor:(id)arg4 forceTextAlignmentCentered:(bool)arg5;
- (void)prepareForReuse;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
