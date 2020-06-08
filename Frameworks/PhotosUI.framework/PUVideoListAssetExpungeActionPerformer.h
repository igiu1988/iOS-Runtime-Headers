/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PUDeletePhotosActionControllerDelegate> {
    <PUVideoListAssetExpungeActionPerformerDelegate> * _actionPerformerDelegate;
}

@property (nonatomic) <PUVideoListAssetExpungeActionPerformerDelegate> *actionPerformerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_performUserInteractionTask;
- (id)_presentingViewControllerForExpungeConfirmation;
- (id)actionPerformerDelegate;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (long long)preferredAlertControllerStyle;
- (void)setActionPerformerDelegate:(id)arg1;

@end
