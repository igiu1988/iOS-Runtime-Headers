/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDebugSceneGridViewController : PUPhotosAlbumViewController {
    NSNumber * _sceneIdentifier;
}

@property (nonatomic, retain) NSNumber *sceneIdentifier;

+ (id /* block */)assetResourceLargestToSmallestComparator;

- (void).cxx_destruct;
- (id)_archiveAssets:(id)arg1 destinationDirectory:(id)arg2 filename:(id)arg3;
- (id)_assetResourceForAsset:(id)arg1;
- (id)_assetResourcesForAssets:(id)arg1;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (id)_globalHeaderTitle;
- (BOOL)_isJunkSceneIdentifer:(id)arg1;
- (id)_keywordForSceneIdentifier:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)arg1;
- (void)_presentTermsAndConditions:(id /* block */)arg1;
- (id)_radarURLWithTitle:(id)arg1 description:(id)arg2 attachmentPaths:(id)arg3 includeSysDiagnose:(BOOL)arg4;
- (void)_tappedFileRadarButton:(id)arg1;
- (id)_tempDirectoryURL;
- (double)_thresholdForSceneIdentifer:(id)arg1;
- (BOOL)allowSlideshowButton;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (float)globalHeaderHeight;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (id)sceneIdentifier;
- (void)setSceneIdentifier:(id)arg1;

@end