/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget> {
    unsigned long long  _accessoryButtonType;
    <PXMessagesCMMSuggestionGadgetActionDelegate> * _actionDelegate;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    PXCMMPosterHeaderView * _posterHeaderView;
    long long  _priority;
    PXRoundedCornerOverlayView * _roundedOverlayView;
    <PXCMMSuggestion> * _suggestion;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) const struct __CFString { }*accessoryButtonEventTrackerKey;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic) <PXMessagesCMMSuggestionGadgetActionDelegate> *actionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) long long priority;
@property (nonatomic, retain) <PXCMMSuggestion> *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_scheduleLayout;
- (void)_updatePosterHeaderView;
- (unsigned long long)accessoryButtonType;
- (id)actionDelegate;
- (struct NSObject { Class x1; }*)contentViewController;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSuggestion:(id)arg1;
- (id)localizedTitle;
- (long long)priority;
- (void)setActionDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSuggestion:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestion;
- (bool)supportsHighlighting;
- (bool)supportsSelection;
- (void)userDidSelectGadget;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
