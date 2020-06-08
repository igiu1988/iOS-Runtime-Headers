/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILayoutArrangement : NSObject <_UILAPropertySource> {
    bool  _awaitingAnimationLayoutPass;
    long long  _axis;
    UIView * _canvas;
    NSMutableArray * _canvasConnectionConstraints;
    _UILAConfigurationHistory * _configurationHistory;
    NSMutableSet * _hiddenItems;
    NSMutableSet * _incomingItems;
    bool  _layoutFillsCanvas;
    bool  _layoutUsesCanvasMarginsWhenFilling;
    NSMutableArray * _mutableItems;
    NSMutableSet * _newlyHiddenItems;
    NSMutableSet * _newlyUnhiddenItems;
    NSMutableSet * _outgoingItems;
    _UILayoutSpacer * _spanningLayoutGuide;
    _UILAConfigurationHistory * _unanimatedConfigurationTarget;
}

@property (nonatomic, readonly) bool _awaitingAnimationLayoutPass;
@property (nonatomic, readonly, retain) _UILAConfigurationHistory *_configurationHistory;
@property (nonatomic, readonly) NSSet *_hiddenItems;
@property (nonatomic, readonly) NSSet *_incomingItems;
@property (setter=_setMutableItems:, nonatomic, retain) NSMutableArray *_mutableItems;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *_outgoingItems;
@property (nonatomic, readonly) <_UILAPropertySource> *_propertySource;
@property (nonatomic, readonly, retain) _UILayoutSpacer *_spanningLayoutGuide;
@property (setter=_setUnanimatedConfigurationTarget:, nonatomic, retain) _UILAConfigurationHistory *_unanimatedConfigurationTarget;
@property (nonatomic) long long axis;
@property (nonatomic) UIView *canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) bool layoutFillsCanvas;
@property (nonatomic) bool layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;

- (void).cxx_destruct;
- (bool)_allItemsHidden;
- (bool)_awaitingAnimationLayoutPass;
- (long long)_axisForSpanningLayoutGuide;
- (bool)_canvasConnectionConstraintsNeedUpdatePass;
- (long long)_centerAttributeForCanvasConnections;
- (void)_clearAllConstraintsArrays;
- (void)_clearCanvasConnectionConstraints;
- (id)_configurationHistory;
- (bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (void)_createSpanningLayoutGuide;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (long long)_dimensionAttributeForCurrentAxis;
- (bool)_hasStaleConfiguration;
- (id)_hiddenItems;
- (id)_identifierForSpanningLayoutGuide;
- (id)_incomingItems;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (bool)_itemWantsLayoutAsIfVisible:(id)arg1;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (long long)_minAttributeForCanvasConnections;
- (bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (id)_mutableItems;
- (id)_newlyHiddenItems;
- (id)_newlyUnhiddenItems;
- (id)_outgoingItems;
- (id)_propertySource;
- (void)_registerAnimationRequest;
- (void)_removeSpanningLayoutGuide;
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;
- (void)_setAxis:(long long)arg1 notify:(bool)arg2;
- (void)_setLayoutFillsCanvas:(bool)arg1 notify:(bool)arg2;
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1 notify:(bool)arg2;
- (void)_setMutableItems:(id)arg1;
- (void)_setUnanimatedConfigurationTarget:(id)arg1;
- (bool)_spanningGuideConstraintsNeedUpdate;
- (id)_spanningLayoutGuide;
- (bool)_spanningLayoutGuideAlwaysUsesFittingConstraint;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (float)_spanningLayoutGuideFittingPriority;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (void)_trackChangesWithConfigBlock:(id /* block */)arg1;
- (id)_unanimatedConfigurationTarget;
- (void)_updateArrangementConstraints;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (void)_updateConfigurationHistory;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (bool)_usesCenteringConnectionConstraint;
- (bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (id)_viewOrGuideForLocationAttribute:(long long)arg1;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)addItem:(id)arg1;
- (long long)axis;
- (id)canvas;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)items;
- (bool)layoutFillsCanvas;
- (bool)layoutUsesCanvasMarginsWhenFilling;
- (void)removeItem:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setCanvas:(id)arg1;
- (void)setLayoutFillsCanvas:(bool)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1;

@end
