/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLPreviewInteractionViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    PLViewControllerAnimator * _animator;
    id /* block */  _completion;
    bool  _propagatesPresentingViewTransform;
    _PLViewControllerOneToOneTransitionContext * _transitionContext;
    <UIViewControllerTransitioningDelegate> * _transitionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool propagatesPresentingViewTransform;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animator;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_newAnimator;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (bool)propagatesPresentingViewTransform;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setPropagatesPresentingViewTransform:(bool)arg1;
- (void)transitionDidEnd:(bool)arg1;

@end
