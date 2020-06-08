/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCItemInfoViewController : UIViewController <DOCItemInfoPresenter, DOCTagsCollectionViewDelegate, DOCThumbnailHolder, DOCThumbnailListener, FPItemCollectionDelegate> {
    DOCVisualEffectLabel * _createdLabel;
    DOCVisualEffectLabel * _createdValue;
    DOCDownloadButton * _downloadButton;
    UIView * _downloadButtonContainer;
    UIView * _firstSeparator;
    NSLayoutConstraint * _firstSeparatorViewHeightConstraint;
    UIImageView * _imageView;
    UIView * _infoContainerView;
    bool  _isFirstTimeAppear;
    bool  _isInfoInPopoverMode;
    FPItem * _item;
    DOCVisualEffectLabel * _kindLabel;
    DOCVisualEffectLabel * _kindValue;
    NSArray * _labelLabels;
    NSArray * _largeTextConstraints;
    DOCVisualEffectLabel * _modifiedLabel;
    DOCVisualEffectLabel * _modifiedValue;
    FPItemCollection * _observedCollection;
    FPItem * _observedItem;
    NSProgress * _observedProgress;
    UILabel * _primaryLabel;
    UIVisualEffectView * _primaryVisualEffectView;
    NSArray * _regularConstraints;
    UIView * _secondSeparator;
    NSLayoutConstraint * _secondSeparatorViewHeightConstraint;
    UILabel * _secondaryLabel;
    UIVisualEffectView * _secondaryVisualEffectView;
    DOCVisualEffectLabel * _sizeLabel;
    DOCVisualEffectLabel * _sizeValue;
    UIStackView * _stackView;
    DOCTagsCollectionView * _tagsCollectionView;
    UIView * _tagsContainerView;
    DOCVisualEffectLabel * _tagsLabel;
    <DOCThumbnail> * _thumbnail;
    UIView * _topContainerView;
    NSArray * _valueLabels;
    bool  _viewDidAppear;
    DOCVisualEffectLabel * _whereLabel;
    DOCVisualEffectLabel * _whereValue;
}

@property (nonatomic, retain) DOCVisualEffectLabel *createdLabel;
@property (nonatomic, retain) DOCVisualEffectLabel *createdValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DOCDownloadButton *downloadButton;
@property (nonatomic, retain) UIView *downloadButtonContainer;
@property (nonatomic, retain) UIView *firstSeparator;
@property (nonatomic) NSLayoutConstraint *firstSeparatorViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIView *infoContainerView;
@property (nonatomic) bool isFirstTimeAppear;
@property (nonatomic) bool isInfoInPopoverMode;
@property (nonatomic, retain) FPItem *item;
@property (nonatomic, retain) DOCVisualEffectLabel *kindLabel;
@property (nonatomic, retain) DOCVisualEffectLabel *kindValue;
@property (nonatomic, retain) NSArray *labelLabels;
@property (nonatomic, retain) NSArray *largeTextConstraints;
@property (nonatomic, retain) DOCVisualEffectLabel *modifiedLabel;
@property (nonatomic, retain) DOCVisualEffectLabel *modifiedValue;
@property (nonatomic, retain) FPItemCollection *observedCollection;
@property (nonatomic, retain) FPItem *observedItem;
@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UIVisualEffectView *primaryVisualEffectView;
@property (nonatomic, retain) NSArray *regularConstraints;
@property (nonatomic, retain) UIView *secondSeparator;
@property (nonatomic, retain) NSLayoutConstraint *secondSeparatorViewHeightConstraint;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIVisualEffectView *secondaryVisualEffectView;
@property (nonatomic, retain) DOCVisualEffectLabel *sizeLabel;
@property (nonatomic, retain) DOCVisualEffectLabel *sizeValue;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) DOCTagsCollectionView *tagsCollectionView;
@property (nonatomic, retain) UIView *tagsContainerView;
@property (nonatomic, retain) DOCVisualEffectLabel *tagsLabel;
@property (nonatomic, retain) <DOCThumbnail> *thumbnail;
@property (nonatomic, retain) UIView *topContainerView;
@property (nonatomic, retain) NSArray *valueLabels;
@property (nonatomic) bool viewDidAppear;
@property (nonatomic, retain) DOCVisualEffectLabel *whereLabel;
@property (nonatomic, retain) DOCVisualEffectLabel *whereValue;

- (void).cxx_destruct;
- (void)_buildConstraints;
- (void)_buildLargeTextConstraints;
- (void)_buildRegularConstraints;
- (void)_updateNavigationItem:(bool)arg1;
- (void)adjustLabel:(id)arg1 forLargeText:(bool)arg2;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (id)createdLabel;
- (id)createdValue;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)dealloc;
- (void)displayTagView;
- (id)downloadButton;
- (id)downloadButtonContainer;
- (id)firstSeparator;
- (id)firstSeparatorViewHeightConstraint;
- (id)imageView;
- (id)infoContainerView;
- (bool)isFirstTimeAppear;
- (bool)isInfoInPopoverMode;
- (id)item;
- (id)kindLabel;
- (id)kindValue;
- (id)labelLabels;
- (id)largeTextConstraints;
- (void)loadView;
- (id)modifiedLabel;
- (id)modifiedValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedCollection;
- (id)observedItem;
- (id)observedProgress;
- (id)primaryLabel;
- (id)primaryVisualEffectView;
- (void)registerObservedItem:(id)arg1;
- (id)regularConstraints;
- (id)secondSeparator;
- (id)secondSeparatorViewHeightConstraint;
- (id)secondaryLabel;
- (id)secondaryVisualEffectView;
- (void)setCreatedLabel:(id)arg1;
- (void)setCreatedValue:(id)arg1;
- (void)setDownloadButton:(id)arg1;
- (void)setDownloadButtonContainer:(id)arg1;
- (void)setFirstSeparator:(id)arg1;
- (void)setFirstSeparatorViewHeightConstraint:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInfoContainerView:(id)arg1;
- (void)setIsFirstTimeAppear:(bool)arg1;
- (void)setIsInfoInPopoverMode:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setKindLabel:(id)arg1;
- (void)setKindValue:(id)arg1;
- (void)setLabelLabels:(id)arg1;
- (void)setLargeTextConstraints:(id)arg1;
- (void)setModifiedLabel:(id)arg1;
- (void)setModifiedValue:(id)arg1;
- (void)setObservedCollection:(id)arg1;
- (void)setObservedItem:(id)arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryVisualEffectView:(id)arg1;
- (void)setRegularConstraints:(id)arg1;
- (void)setSecondSeparator:(id)arg1;
- (void)setSecondSeparatorViewHeightConstraint:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryVisualEffectView:(id)arg1;
- (void)setSizeLabel:(id)arg1;
- (void)setSizeValue:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTagsCollectionView:(id)arg1;
- (void)setTagsContainerView:(id)arg1;
- (void)setTagsLabel:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTopContainerView:(id)arg1;
- (void)setValueLabels:(id)arg1;
- (void)setViewDidAppear:(bool)arg1;
- (void)setWhereLabel:(id)arg1;
- (void)setWhereValue:(id)arg1;
- (void)setupLabel:(id)arg1 text:(id)arg2;
- (void)setupValue:(id)arg1;
- (id)sizeLabel;
- (id)sizeValue;
- (id)stackView;
- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (id)tagsCollectionView;
- (void)tagsCollectionViewDidSelectAddTagButton:(id)arg1;
- (id)tagsContainerView;
- (id)tagsLabel;
- (id)thumbnail;
- (void)thumbnailLoaded:(id)arg1;
- (id)topContainerView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAttributesWithItem:(id)arg1;
- (void)updateDownloadButton;
- (void)updateInfoViewWithItem:(id)arg1;
- (void)updatePreferredContentSize;
- (void)updatePrimaryTitleWithItem:(id)arg1;
- (void)updateSecondaryTitleWithItem:(id)arg1;
- (void)updateTagsWithItem:(id)arg1;
- (void)updateThumbnailWithItem:(id)arg1;
- (void)userDidTapDownloadButton:(id)arg1;
- (id)valueLabels;
- (bool)viewDidAppear;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)whereLabel;
- (id)whereValue;

@end
