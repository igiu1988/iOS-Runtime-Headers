/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInteractiveHighlightEffect : NSObject {
    UIVisualEffectView * _effectView;
    _UIInteractiveHighlightEnvironment * _environment;
    _UIPortalView * _portalView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredContentInsets;
    UIView * _superview;
    UIView * _view;
}

@property (nonatomic) UIVisualEffectView *effectView;
@property (nonatomic, retain) _UIInteractiveHighlightEnvironment *environment;
@property (nonatomic) _UIPortalView *portalView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentInsets;
@property (nonatomic) UIView *superview;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)effectView;
- (id)environment;
- (void)finalizeEffect;
- (id)portalView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentInsets;
- (void)setEffectView:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setPortalView:(id)arg1;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSuperview:(id)arg1;
- (void)setView:(id)arg1;
- (id)superview;
- (id)view;

@end
