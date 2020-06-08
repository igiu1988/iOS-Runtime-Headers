/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateSortControl : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalInsets;
    int  _candidatesVisualStyle;
    bool  _legacyAlertAppearance;
    UISegmentedControl * _segmentedControl;
    UIKBThemedView * _themedView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalInsets;
@property (readonly) UISegmentedControl *segmentedControl;
@property (readonly) bool shouldShowTitles;
@property (nonatomic, retain) UIKBThemedView *themedView;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)addSegmentedControlWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(bool)arg3;
- (void)layoutSubviews;
- (bool)needsToUpdateSortControlForTitles:(id)arg1;
- (id)segmentedControl;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)setAdditionalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAdditionalPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSortControlTitles:(id)arg1;
- (void)setThemedView:(id)arg1;
- (bool)shouldShowTitles;
- (id)themedView;
- (void)updateTitleTextAttributes;

@end
