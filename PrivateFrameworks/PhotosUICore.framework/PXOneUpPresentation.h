/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXOneUpPresentation : NSObject {
    <PXOneUpPresentationImplementationDelegate> * __implementationDelegate;
    <PXOneUpPresentationDelegate> * _delegate;
    struct { 
        bool respondsToPhotosDetailsContext; 
        bool respondsToInitialAssetReference; 
        bool respondsToCurrentImageForAssetReference; 
        bool respondsToRegionOfInterestForAssetReferenceInCoordinateSpace; 
        bool respondsToScrollAssetReferenceToVisible; 
        bool respondsToSetHiddenAssetReferences; 
        bool respondsToShouldAutoPlay; 
        bool respondsToActionManager; 
        bool respondsToActionManagerForPreviewing; 
        bool respondsToActionContext; 
        bool respondsToGestureProvider; 
        bool respondsToImportStatusManager; 
    }  _delegateFlags;
    bool  _enabled;
    <PXOneUpPresentationImplementationDelegate> * _implementationDelegate;
    struct { 
        bool respondsToPresentingViewControllerViewWillAppear; 
        bool respondsToPresentingViewControllerViewDidAppear; 
        bool respondsToPresentingViewControllerViewWillDisappear; 
        bool respondsToPresentingViewControllerViewDidDisappear; 
        bool respondsToCanStart; 
        bool respondsToCanStop; 
        bool respondsToInvalidatePresentingGeometry; 
        bool respondsToHandlePresentingPinchGestureRecognizer; 
    }  _implementationDelegateFlags;
    UIViewController * _originalPresentingViewController;
    UIViewController * _presentingViewController;
}

@property (setter=_setImplementationDelegate:, nonatomic) <PXOneUpPresentationImplementationDelegate> *_implementationDelegate;
@property (nonatomic, readonly) long long actionContext;
@property (nonatomic, readonly) PXAssetActionManager *actionManager;
@property (nonatomic, readonly) PXAssetActionManager *actionManagerForPreviewing;
@property (nonatomic, readonly) bool canStart;
@property (nonatomic, readonly) bool canStop;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic) <PXOneUpPresentationDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) PXGestureProvider *gestureProvider;
@property (nonatomic) <PXOneUpPresentationImplementationDelegate> *implementationDelegate;
@property (nonatomic, readonly) <PXImportStatusManager> *importStatusManager;
@property (nonatomic, readonly) PXAssetReference *initialAssetReference;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic) UIViewController *originalPresentingViewController;
@property (nonatomic, readonly) PXPhotosDetailsContext *photosDetailsContext;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) bool shouldAutoPlay;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_implementationDelegate;
- (void)_setImplementationDelegate:(id)arg1;
- (void)_updateImplementationDelegate;
- (long long)actionContext;
- (id)actionManager;
- (id)actionManagerForPreviewing;
- (bool)canStart;
- (bool)canStop;
- (void)commitPreviewViewController:(id)arg1;
- (id)currentImageForAssetReference:(id)arg1;
- (id)dataSourceManager;
- (id)delegate;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (id)gestureProvider;
- (bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)implementationDelegate;
- (id)importStatusManager;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (id)initialAssetReference;
- (void)invalidatePresentingGeometry;
- (bool)isEnabled;
- (id)mediaProvider;
- (id)originalPresentingViewController;
- (id)photosDetailsContext;
- (id)presentingViewController;
- (void)presentingViewControllerViewDidAppear:(bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(bool)arg1;
- (void)presentingViewControllerViewWillAppear:(bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(bool)arg1;
- (id)previewViewControllerAllowingActions:(bool)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (void)scrollAssetReferenceToVisible:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHiddenAssetReferences:(id)arg1;
- (void)setImplementationDelegate:(id)arg1;
- (void)setOriginalPresentingViewController:(id)arg1;
- (bool)shouldAutoPlay;
- (bool)startAnimated:(bool)arg1 interactiveMode:(long long)arg2;
- (void)stopAnimated:(bool)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)defaultImplementationDelegate;

@end
