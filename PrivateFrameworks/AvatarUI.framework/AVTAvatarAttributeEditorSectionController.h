/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorSectionController : NSObject <AVTAvatarAttributeEditorSectionController> {
    AVTUIEnvironment * _environment;
    <AVTScheduler> * _renderingScheduler;
    AVTAvatarAttributeEditorSection * _section;
    long long  _selectedIndex;
    <AVTIndexBasedScheduler> * _thumbnailScheduler;
    AVTTransitionCoordinator * _transitionCoordinator;
    <AVTAvatarAttributeEditorControllerSubSelectionDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTScheduler> *renderingScheduler;
@property (nonatomic, retain) AVTAvatarAttributeEditorSection *section;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <AVTIndexBasedScheduler> *thumbnailScheduler;
@property (nonatomic, retain) AVTTransitionCoordinator *transitionCoordinator;

+ (struct CGSize { double x1; double x2; })cellSizeForSectionItem:(id)arg1 inSection:(id)arg2 fittingWidth:(double)arg3 environment:(id)arg4;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForSection:(id)arg1 fittingWidth:(double)arg2 environment:(id)arg3;
+ (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+ (bool)supportsSelection;

- (void).cxx_destruct;
- (void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2;
- (id)delegate;
- (void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2;
- (void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(id /* block */)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)environment;
- (unsigned long long)indexForItem:(id)arg1;
- (id)initWithThumbnailScheduler:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (void)invalidateLayout;
- (long long)numberOfItems;
- (id)prefetchingSectionItemForIndex:(long long)arg1;
- (id)renderingScheduler;
- (void)resetToDefaultState;
- (id)section;
- (long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndex:(long long)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)thumbnailScheduler;
- (id)transitionCoordinator;
- (void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)updateWithSection:(id)arg1;
- (id)viewForIndex:(long long)arg1;

@end
