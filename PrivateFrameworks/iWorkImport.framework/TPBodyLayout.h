/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyLayout : TSDLayout <TPAttachmentLayoutParent, TSWPLayoutTarget> {
    NSMutableArray * _anchoredDrawablesForRelayout;
    NSMutableArray * _columns;
    TPFootnoteHeightMeasurer * _footnoteHeightMeasurer;
    NSMutableSet * _inlineDrawableLayouts;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, retain) NSMutableArray *anchoredDrawablesForRelayout;
@property (nonatomic, readonly) unsigned int autosizeFlags;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) NSMutableArray *columns;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (nonatomic, readonly) <TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFLocale { }*hyphenationLocale;
@property (nonatomic, readonly) bool isInstructional;
@property (nonatomic, readonly) bool isLinked;
@property (nonatomic, readonly) bool layoutIsValid;
@property (nonatomic, readonly) bool marginsAreMirrored;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property (nonatomic, readonly) double maxAnchorY;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, readonly) int naturalAlignment;
@property (nonatomic, readonly) int naturalDirection;
@property (nonatomic, readonly) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly) <TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (nonatomic, readonly) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) <TSWPOffscreenColumn> *previousTargetLastColumn;
@property (nonatomic, readonly) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property (nonatomic, readonly) bool repShouldPreventCaret;
@property (nonatomic, readonly) bool shouldHyphenate;
@property (nonatomic, readonly) bool shouldWrapAroundExternalDrawables;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool textIsVertical;
@property (nonatomic, readonly) int verticalAlignment;
@property (nonatomic, readonly) bool wantsLineFragments;

+ (struct CGSize { double x1; double x2; })minimumBodySize;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (void)addAttachmentLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGPoint { double x1; double x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)anchoredDrawablesForRelayout;
- (unsigned int)autosizeFlags;
- (struct CGPoint { double x1; double x2; })calculatePointFromSearchReference:(id)arg1;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (id)computeLayoutGeometry;
- (double)contentHeight;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (bool)excludeFromNearestVisibleRectSearchForSelectionPath:(id)arg1;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)invalidateForPageCountChange;
- (void)invalidateSize;
- (bool)isInstructional;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (bool)layoutIsValid;
- (struct CGPoint { double x1; double x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)marginsAreMirrored;
- (double)maxAnchorY;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { double x1; double x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (bool)needsInflation;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (id)nextTargetTopicNumbers;
- (void)p_addLayoutIfAttached:(id)arg1;
- (void)p_killDrawableLayouts:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectForSelection:(id)arg1 useParagraphModeRects:(bool)arg2;
- (id)p_validatedLayoutForDrawable:(id)arg1 inContainingLayout:(id)arg2;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (id)parentLayoutForInlineAttachments;
- (void)parentWillChangeTo:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (id)previousTargetLastColumn;
- (id)previousTargetTopicNumbers;
- (bool)processWidowAndInflation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (bool)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg1;
- (void)setAnchoredDrawablesForRelayout:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsInflation;
- (bool)shouldProvideSizingGuides;
- (bool)shouldWrapAroundExternalDrawables;
- (id)storage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textIsVertical;
- (id)unscaledAnchorRectsForPencilAnnotationSelectionPath:(id)arg1 attachedType:(long long)arg2;
- (void)updateStartCharIndexWithDirtyRanges:(id)arg1;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (int)verticalAlignment;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (bool)wantsLineFragments;

@end
