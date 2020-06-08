/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFNavigationBarMetrics : NSObject {
    double  _accessibilityImageScale;
    double  _defaultBarHeight;
    UIFont * _defaultBoldFont;
    UIFont * _defaultLabelFont;
    double  _distanceFromLabelBaselineToURLOutlineBottom;
    double  _minimumBarHeight;
    UIFont * _narrowEditingLabelFont;
    double  _narrowEditingScaleFactor;
    bool  _narrowEditingScaleFactorNeedsUpdate;
    double  _safariBarHeight;
    double  _safariSquishHeightQuantizationOffset;
    double  _safariViewControllerBarHeight;
    double  _safariViewControllerSquishHeightQuantizationOffset;
    UITraitCollection * _traitCollectionForFontMetrics;
    double  _urlContainerTop;
    double  _urlLabelAccessoryItemSquishedVerticalOffset;
    double  _urlLabelAccessoryLockItemVerticalOffset;
    double  _urlLabelVerticalOffset;
    double  _urlOutlineCornerRadius;
    double  _urlOutlineHeight;
    bool  _usesLargerBarMetrics;
}

@property (nonatomic, readonly) double accessibilityImageScale;
@property (nonatomic, readonly) double defaultBarHeight;
@property (nonatomic, readonly) UIFont *defaultBoldFont;
@property (nonatomic, readonly) UIFont *defaultLabelFont;
@property (nonatomic, readonly) double distanceFromLabelBaselineToURLOutlineBottom;
@property (nonatomic, readonly) double minimumBarHeight;
@property (nonatomic, readonly) UIFont *narrowEditingLabelFont;
@property (nonatomic, readonly) double narrowEditingScaleFactor;
@property (nonatomic, readonly) double urlContainerTop;
@property (nonatomic, readonly) double urlLabelAccessoryItemSquishedVerticalOffset;
@property (nonatomic, readonly) double urlLabelAccessoryLockItemVerticalOffset;
@property (nonatomic, readonly) double urlLabelVerticalOffset;
@property (nonatomic, readonly) double urlOutlineCornerRadius;
@property (nonatomic, readonly) double urlOutlineHeight;
@property (nonatomic, readonly) bool usesLargerBarMetrics;

- (void).cxx_destruct;
- (id)_contentSizeCategoryWithPreferredCategory:(id)arg1;
- (void)_updateMetrics;
- (double)accessibilityImageScale;
- (double)barHeightWithBarMetricsCategory:(long long)arg1;
- (double)defaultBarHeight;
- (id)defaultBoldFont;
- (id)defaultLabelFont;
- (double)distanceFromLabelBaselineToURLOutlineBottom;
- (void)forceUpdate;
- (id)init;
- (double)minimumBarHeight;
- (id)narrowEditingLabelFont;
- (double)narrowEditingScaleFactor;
- (double)squishHeightQuantizationOffsetWithBarMetricsCategory:(long long)arg1;
- (bool)updateForContentSizeCategory:(id)arg1;
- (double)urlContainerTop;
- (double)urlLabelAccessoryItemSquishedVerticalOffset;
- (double)urlLabelAccessoryLockItemVerticalOffset;
- (double)urlLabelVerticalOffset;
- (double)urlOutlineCornerRadius;
- (double)urlOutlineHeight;
- (bool)usesLargerBarMetrics;

@end
