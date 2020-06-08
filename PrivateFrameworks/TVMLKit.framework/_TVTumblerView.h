/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVTumblerView : UIView {
    UIImageView * _arrowLeft;
    UIImageView * _arrowRight;
    bool  _canMove;
    UIView * _containerView;
    <_TVTumblerViewDataSource> * _dataSource;
    <_TVTumblerViewDelegate> * _delegate;
    struct { 
        unsigned int respondsToDidFocusItemAtIndex : 1; 
    }  _delegateFlags;
    long long  _focusedItemIndex;
    UIView * _gestureTargetView;
    UIView * _headerView;
    double  _interitemSpacing;
    Class  _itemViewClass;
    NSMutableDictionary * _itemViewsByIndex;
    UISwipeGestureRecognizer * _leftSwipeGesture;
    UITapGestureRecognizer * _leftTapGesture;
    UIView * _referredFocusedItemView;
    UISwipeGestureRecognizer * _rightSwipeGesture;
    UITapGestureRecognizer * _rightTapGesture;
    UIView * _spareItemView;
    long long  _unfocusedItemIndex;
}

@property (nonatomic, readonly, retain) UIImageView *arrowLeading;
@property (nonatomic, readonly, retain) UIImageView *arrowLeft;
@property (nonatomic, readonly, retain) UIImageView *arrowRight;
@property (nonatomic, readonly, retain) UIImageView *arrowTrailing;
@property (nonatomic, readonly) bool canMove;
@property (nonatomic, readonly, retain) UIView *containerView;
@property (nonatomic) <_TVTumblerViewDataSource> *dataSource;
@property (nonatomic) <_TVTumblerViewDelegate> *delegate;
@property (nonatomic) long long focusedItemIndex;
@property (nonatomic, readonly, retain) UIView *focusedItemView;
@property (nonatomic) UIView *gestureTargetView;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) double interitemSpacing;
@property (nonatomic, retain) Class itemViewClass;
@property (nonatomic, readonly, retain) NSMutableDictionary *itemViewsByIndex;
@property (nonatomic, readonly, retain) UISwipeGestureRecognizer *leftSwipeGesture;
@property (nonatomic, readonly, retain) UITapGestureRecognizer *leftTapGesture;
@property (nonatomic, retain) UIView *referredFocusedItemView;
@property (nonatomic, readonly, retain) UISwipeGestureRecognizer *rightSwipeGesture;
@property (nonatomic, readonly, retain) UITapGestureRecognizer *rightTapGesture;
@property (nonatomic, retain) UIView *spareItemView;
@property (nonatomic) long long unfocusedItemIndex;

- (void).cxx_destruct;
- (void)_disableMove;
- (void)_enableMove;
- (id)_itemViewAtIndex:(long long)arg1;
- (void)_leftAction:(id)arg1;
- (void)_markItemViewForInUse:(id)arg1 forIndex:(long long)arg2;
- (void)_markItemViewForReuse:(id)arg1;
- (void)_rightAction:(id)arg1;
- (void)_scheduleMoveToIndex:(long long)arg1;
- (id)arrowLeading;
- (id)arrowLeft;
- (id)arrowRight;
- (id)arrowTrailing;
- (bool)canMove;
- (id)containerView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableItemView;
- (long long)focusedItemIndex;
- (id)focusedItemView;
- (id)gestureTargetView;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interitemSpacing;
- (Class)itemViewClass;
- (id)itemViewsByIndex;
- (void)layoutSubviews;
- (id)leftSwipeGesture;
- (id)leftTapGesture;
- (id)referredFocusedItemView;
- (void)registerItemViewClass:(Class)arg1;
- (void)reloadData;
- (id)rightSwipeGesture;
- (id)rightTapGesture;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusedItemIndex:(long long)arg1;
- (void)setGestureTargetView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemViewClass:(Class)arg1;
- (void)setReferredFocusedItemView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSpareItemView:(id)arg1;
- (void)setUnfocusedItemIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spareItemView;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)unfocusedItemIndex;

@end
