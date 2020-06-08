/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver> {
    CALayer * __contentLayer;
    PXTitleSubtitleCALayerPromise * __layerPromise;
    bool  _diagnosticsEnabled;
    bool  _needsUpdateLayerPromise;
    bool  _rendersTextAsynchronously;
    bool  _shouldRasterizeTextLayer;
    PXTitleSubtitleLabelSpec * _spec;
    NSString * _subtitleText;
    NSString * _titleText;
    long long  _typesettingMode;
}

@property (setter=_setContentLayer:, nonatomic, retain) CALayer *_contentLayer;
@property (setter=_setLayerPromise:, nonatomic, retain) PXTitleSubtitleCALayerPromise *_layerPromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool diagnosticsEnabled;
@property (nonatomic, readonly) NSArray *diagnosticsRenderedLines;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastBaseline;
@property (nonatomic) bool rendersTextAsynchronously;
@property (nonatomic) bool shouldRasterizeTextLayer;
@property (nonatomic, retain) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic, copy) NSString *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) long long typesettingMode;

- (void).cxx_destruct;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (id)_contentLayer;
- (void)_handleChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateLayerPromise;
- (id)_layerPromise;
- (void)_setContentLayer:(id)arg1;
- (void)_setLayerPromise:(id)arg1;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (bool)diagnosticsEnabled;
- (id)diagnosticsRenderedLines;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaseline;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)rendersTextAsynchronously;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRendersTextAsynchronously:(bool)arg1;
- (void)setShouldRasterizeTextLayer:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTypesettingMode:(long long)arg1;
- (bool)shouldRasterizeTextLayer;
- (id)spec;
- (id)subtitleText;
- (id)titleText;
- (long long)typesettingMode;

@end
