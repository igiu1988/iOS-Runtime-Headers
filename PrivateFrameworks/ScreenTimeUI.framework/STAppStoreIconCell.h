/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAppStoreIconCell : STTableCell {
    UIImageView * _appIconView;
    UILabel * _appNameLabel;
    NSString * _bundleIdentifier;
    UIButton * _viewButton;
}

@property (nonatomic, readonly) UIImageView *appIconView;
@property (nonatomic, readonly) UILabel *appNameLabel;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) UIButton *viewButton;

- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_didFetchIcon:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (void)_registerForIconCacheNotifications;
- (id)appIconView;
- (id)appNameLabel;
- (id)bundleIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (void)viewAppInStore:(id)arg1;
- (id)viewButton;

@end
