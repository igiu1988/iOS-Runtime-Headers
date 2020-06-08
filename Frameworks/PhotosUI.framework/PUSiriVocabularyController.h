/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver> {
    PHFetchResult * _albumFetchResult;
    bool  _needsAlbumsVocabularyUpdate;
    bool  _needsPeopleVocabularyUpdate;
    PHFetchResult * _peopleFetchResult;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, retain) PHFetchResult *albumFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsAlbumsVocabularyUpdate;
@property (nonatomic) bool needsPeopleVocabularyUpdate;
@property (nonatomic, retain) PHFetchResult *peopleFetchResult;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_localizedTitlesForAssetCollectionFetchResult:(id)arg1;
- (void)_onQueueUpdateAlbumVocabulary;
- (void)_onQueueUpdatePeopleVocabulary;
- (id)albumFetchResult;
- (void)dealloc;
- (id)init;
- (bool)needsAlbumsVocabularyUpdate;
- (bool)needsPeopleVocabularyUpdate;
- (id)peopleFetchResult;
- (void)photoLibraryDidChange:(id)arg1;
- (id)processingQueue;
- (id)propertyQueue;
- (void)setAlbumFetchResult:(id)arg1;
- (void)setNeedsAlbumsVocabularyUpdate:(bool)arg1;
- (void)setNeedsPeopleVocabularyUpdate:(bool)arg1;
- (void)setPeopleFetchResult:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)updateVocabulary;

@end
