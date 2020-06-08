/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging> {
    <UIFocusItem> * preferredFocusItem;
    bool  usePreferredItemOnNextUpdate;
}

@property (nonatomic) <UIFocusItem> *preferredFocusItem;
@property (nonatomic) bool usePreferredItemOnNextUpdate;

- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissTemplateAnimated:(bool)arg1;
- (unsigned long long)indexOfTemplate:(id)arg1;
- (void)popToRootTemplateAnimated:(bool)arg1;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (void)popToTemplate:(id)arg1 animated:(bool)arg2;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusItem;
- (void)presentActionSheetTemplate:(id)arg1 animated:(bool)arg2;
- (void)presentTemplateViewController:(id)arg1 animated:(bool)arg2;
- (id)presentedTemplateViewController;
- (void)pushTemplateViewController:(id)arg1 animated:(bool)arg2 presentationStyle:(unsigned long long)arg3;
- (void)setPreferredFocusItem:(id)arg1;
- (void)setUsePreferredItemOnNextUpdate:(bool)arg1;
- (id)templates;
- (id)topTemplate;
- (bool)usePreferredItemOnNextUpdate;
- (id)viewControllerForTemplate:(id)arg1;
- (void)viewDidLoad;

@end
