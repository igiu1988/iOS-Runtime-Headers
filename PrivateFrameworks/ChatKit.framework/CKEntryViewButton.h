/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEntryViewButton : UIButton {
    UIColor * _ckTintColor;
    long long  _entryViewButtonType;
}

@property (nonatomic, retain) UIColor *ckTintColor;
@property (nonatomic) long long entryViewButtonType;

+ (id)entryViewButtonImageForType:(long long)arg1;
+ (id)entryViewButtonOfType:(long long)arg1;
+ (id)imageNameForEntryViewButtonType:(long long)arg1;
+ (void)prewarmEntryViewButtons;

- (void).cxx_destruct;
- (id)ckTintColor;
- (long long)entryViewButtonType;
- (void)setCkTintColor:(id)arg1;
- (void)setDefaultImage;
- (void)setEntryViewButtonType:(long long)arg1;
- (void)setTintedImageForButtonType:(long long)arg1 tintColor:(id)arg2;

@end
