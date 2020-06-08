/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBSplashController : UIViewController <UIScrollViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalInsets;
    UIColor * _bleedColor;
    UIView * _bleedView;
    UIView * _buttonTray;
    NSMutableArray * _buttons;
    UIView * _contentView;
    long long  _contentViewPosition;
    bool  _darkMode;
    NSString * _detailText;
    bool  _disableIconTint;
    bool  _displayPrivacyLinkCaptionText;
    bool  _fullWidthContent;
    OBBuddyPaneHeaderView * _headerView;
    _UIBackdropView * _lightTrayBackdrop;
    NSArray * _onBoardingBundleIdentifiers;
    OBPrivacyLinkController * _privacyLink;
    long long  _privacyLinkPosition;
    UIScrollView * _scrollView;
    bool  _scrollingDisabled;
    UIColor * _tint;
    UIView * _trayBackdropContainer;
    _UIBackdropView * _ultraLightTrayBackdrop;
    bool  _usesTwoButtonLayout;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalInsets;
@property (nonatomic, retain) UIColor *bleedColor;
@property (nonatomic, readonly) UIView *buttonTray;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) long long contentViewPosition;
@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic) bool disableIconTint;
@property (nonatomic) bool displayPrivacyLinkCaptionText;
@property (nonatomic) bool fullWidthContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) OBBuddyPaneHeaderView *headerView;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *iconAccessibilityLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, copy) NSString *onBoardingBundleIdentifier;
@property (nonatomic, copy) NSArray *onBoardingBundleIdentifiers;
@property (nonatomic) long long privacyLinkPosition;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (getter=isScrollingDisabled, nonatomic) bool scrollingDisabled;
@property (readonly) Class superclass;
@property (nonatomic) bool usesTwoButtonLayout;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id)_createButtonWithTitle:(id)arg1 style:(long long)arg2;
- (void)_updateButtonFonts;
- (void)_updateTrayVisibility;
- (void)addButtonWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalInsets;
- (id)bleedColor;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (id)buttonTray;
- (id)contentScrollView;
- (id)contentView;
- (long long)contentViewPosition;
- (id)detailText;
- (bool)disableIconTint;
- (bool)displayPrivacyLinkCaptionText;
- (bool)fullWidthContent;
- (id)headerView;
- (id)icon;
- (id)iconAccessibilityLabel;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)init;
- (bool)isDarkMode;
- (bool)isScrollingDisabled;
- (void)loadView;
- (id)onBoardingBundleIdentifier;
- (id)onBoardingBundleIdentifiers;
- (long long)privacyLinkPosition;
- (void)removeAllButtons;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAdditionalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBleedColor:(id)arg1;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewPosition:(long long)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDisableIconTint:(bool)arg1;
- (void)setDisplayPrivacyLinkCaptionText:(bool)arg1;
- (void)setFullWidthContent:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAccessibilityLabel:(id)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLinkText:(id)arg1 action:(id /* block */)arg2;
- (void)setOnBoardingBundleIdentifier:(id)arg1;
- (void)setOnBoardingBundleIdentifiers:(id)arg1;
- (void)setPrivacyLinkPosition:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollingDisabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 action:(id /* block */)arg3;
- (void)setUsesTwoButtonLayout:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBleedColor;
- (bool)usesTwoButtonLayout;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
