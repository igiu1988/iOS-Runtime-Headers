/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonView : CKBalloonImageView <CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate> {
    bool  _animationPaused;
    CABackdropLayer * _backdropFilterLayer;
    unsigned long long  _balloonCorners;
    BOOL  _balloonShape;
    BOOL  _balloonTailShape;
    bool  _canUseOpaqueMask;
    <CKBalloonViewDelegate> * _delegate;
    CKManualUpdater * _displayUpdater;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    bool  _filled;
    NSMutableArray * _filters;
    bool  _hasOverlay;
    bool  _hasTail;
    CKInvisibleInkEffectController * _invisibleInkEffectController;
    bool  _invisibleInkEffectPaused;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    BOOL  _orientation;
    UIImageView * _overlay;
    bool  _showingMenu;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textAlignmentInsets;
    bool  _useLargeAsset;
    bool  _wantsSkinnyMask;
}

@property (nonatomic) bool animationPaused;
@property (nonatomic, retain) CABackdropLayer *backdropFilterLayer;
@property (nonatomic) unsigned long long balloonCorners;
@property (nonatomic) struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; } balloonDescriptor;
@property (nonatomic) BOOL balloonShape;
@property (nonatomic) BOOL balloonTailShape;
@property (nonatomic) bool canUseOpaqueMask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBalloonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKManualUpdater *displayUpdater;
@property (nonatomic, retain) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (getter=isFilled, nonatomic) bool filled;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic) bool hasOverlay;
@property (nonatomic) bool hasTail;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *imageForInvisibleInkEffectView;
@property (nonatomic, retain) CKInvisibleInkEffectController *invisibleInkEffectController;
@property (nonatomic) bool invisibleInkEffectEnabled;
@property (nonatomic) bool invisibleInkEffectPaused;
@property (nonatomic, readonly) Class invisibleInkEffectViewClass;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) bool needsGroupOpacity;
@property (nonatomic) BOOL orientation;
@property (nonatomic, retain) UIImageView *overlay;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (getter=isShowingMenu, nonatomic, readonly) bool showingMenu;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textAlignmentInsets;
@property (nonatomic) bool useLargeAsset;
@property (nonatomic) bool wantsSkinnyMask;

- (void).cxx_destruct;
- (void)_dismissOverlay;
- (void)addFilter:(id)arg1;
- (bool)animationPaused;
- (void)attachInvisibleInkEffectView;
- (id)backdropFilterLayer;
- (unsigned long long)balloonCorners;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; })balloonDescriptor;
- (BOOL)balloonShape;
- (BOOL)balloonTailShape;
- (bool)canUseOpaqueMask;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)detachInvisibleInkEffectView;
- (id)displayUpdater;
- (void)doubleTapGestureRecognized:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (id)filters;
- (bool)hasOverlay;
- (bool)hasTail;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invisibleInkEffectController;
- (bool)invisibleInkEffectEnabled;
- (bool)invisibleInkEffectPaused;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;
- (bool)isFilled;
- (bool)isShowingMenu;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)longPressGestureRecognized:(id)arg1;
- (id)longPressGestureRecognizer;
- (bool)needsGroupOpacity;
- (BOOL)orientation;
- (id)overlay;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)prepareForReuse;
- (void)setAnimationPaused:(bool)arg1;
- (void)setBackdropFilterLayer:(id)arg1;
- (void)setBalloonCorners:(unsigned long long)arg1;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; })arg1;
- (void)setBalloonShape:(BOOL)arg1;
- (void)setBalloonTailShape:(BOOL)arg1;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (void)setFilled:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setHasOverlay:(bool)arg1;
- (void)setHasOverlay:(bool)arg1 animated:(bool)arg2;
- (void)setHasOverlay:(bool)arg1 autoDismiss:(bool)arg2;
- (void)setHasTail:(bool)arg1;
- (void)setInvisibleInkEffectController:(id)arg1;
- (void)setInvisibleInkEffectEnabled:(bool)arg1;
- (void)setInvisibleInkEffectPaused:(bool)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setOrientation:(BOOL)arg1;
- (void)setOverlay:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseLargeAsset:(bool)arg1;
- (void)setWantsSkinnyMask:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (id)tapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAlignmentInsets;
- (void)updateRasterizationForInvisibleInkEffect;
- (bool)useLargeAsset;
- (bool)wantsSkinnyMask;

@end
