/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKPickerSelectableItem : TKPickerRowItem {
    NSString * _detailText;
    bool  _shouldPreventSelection;
    bool  _shouldTintText;
    bool  _showsCheckmark;
    bool  _showsDisclosureIndicator;
    NSString * _text;
}

@property (setter=_setDetailText:, nonatomic, copy) NSString *detailText;
@property (setter=_setShouldPreventSelection:, nonatomic) bool shouldPreventSelection;
@property (setter=_setShouldTintText:, nonatomic) bool shouldTintText;
@property (setter=_setShowsCheckmark:, nonatomic) bool showsCheckmark;
@property (setter=_setShowsDisclosureIndicator:, nonatomic) bool showsDisclosureIndicator;
@property (setter=_setText:, nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setDetailText:(id)arg1;
- (void)_setShouldPreventSelection:(bool)arg1;
- (void)_setShouldTintText:(bool)arg1;
- (void)_setShowsCheckmark:(bool)arg1;
- (void)_setShowsDisclosureIndicator:(bool)arg1;
- (void)_setText:(id)arg1;
- (id)detailText;
- (bool)shouldPreventSelection;
- (bool)shouldTintText;
- (bool)showsCheckmark;
- (bool)showsDisclosureIndicator;
- (id)text;

@end
