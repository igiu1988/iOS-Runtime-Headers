/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSMutableSet * __inaccurateAssetCollections;
    PXPhotosDataSourceSectionCache * __preparedSectionCache;
    unsigned int  __previousCollectionsCount;
    PXPhotosDataSourceSectionCache * __sectionCache;
    NSSet * _allowedUUIDs;
    int  _backgroundFetchOriginSection;
    BOOL  _backgroundFetchOriginSectionChanged;
    PXLIFOQueue * _backgroundLIFOQueue;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    PHFetchResult * _collectionListFetchResult;
    BOOL  _curate;
    NSMutableDictionary * _facesByAssetCache;
    unsigned int  _fetchLimit;
    NSArray * _filterPersons;
    NSPredicate * _filterPredicate;
    BOOL  _hideHiddenAssets;
    NSDictionary * _hintIndexPathByAssetReferenceCache;
    BOOL  _inaccurateAssetCollectionsNeedsUpdate;
    NSMutableDictionary * _infoForAssetCollection;
    BOOL  _interruptBackgroundFetch;
    BOOL  _isBackgroundFetching;
    BOOL  _needToStartBackgroundFetch;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSHashTable * _observersQueue_observers;
    BOOL  _observersQueue_shouldCopyChangeObserversOnWrite;
    unsigned int  _options;
    NSMutableDictionary * _pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> * _pendingResultsIsolationQueue;
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _preparedIndexPathByAssetReferenceCache;
    NSDictionary * _preparedResultRecordChangeDetailsByAssetCollection;
    BOOL  _processAndPublishScheduledOnRunloop;
    NSMutableOrderedSet * _queuedAssetCollectionsToFetch;
    PHAsset * _referenceAsset;
    NSMutableDictionary * _resultRecordByAssetCollection;
    BOOL  _reverseSortOrder;
    unsigned int  _versionIdentifier;
    NSMutableDictionary * _weightByAssetCache;
}

@property (setter=_setPreviousCollectionsCount:, nonatomic) unsigned int _previousCollectionsCount;
@property (nonatomic, copy) NSSet *allowedUUIDs;
@property (nonatomic) int backgroundFetchOriginSection;
@property (nonatomic, retain) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) BOOL containsMultipleAssets;
@property (nonatomic) BOOL curate;
@property (nonatomic, readonly) BOOL curatedFutilely;
@property (nonatomic, readonly) BOOL curatedIsEmpty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int estimatedAllCount;
@property (nonatomic, readonly) int estimatedOtherCount;
@property (nonatomic, readonly) int estimatedPhotosCount;
@property (nonatomic, readonly) int estimatedVideosCount;
@property (nonatomic) unsigned int fetchLimit;
@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isImmutable;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHAsset *referenceAsset;
@property (nonatomic) BOOL reverseSortOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int versionIdentifier;

+ (id)_curationSharedBackgroundQueue;

- (void).cxx_destruct;
- (BOOL)_allSectionsConsideredAccurate;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (BOOL)_areFiltersDisabledForAssetCollection:(id)arg1;
- (id)_assetOidsByAssetCollectionForAssetsAtIndexPaths:(id)arg1;
- (unsigned int)_cachedSectionForAssetCollection:(id)arg1;
- (void)_cancelBackgroundFetchIfNeeded;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_commonInit;
- (void)_createFilteredFetchResult:(out id*)arg1 curatedFetchResult:(out id*)arg2 keyAssetsFetchResult:(out id*)arg3 forAssetCollection:(id)arg4 calledOnMainQueue:(BOOL)arg5;
- (id)_createResultRecordForAssetCollection:(id)arg1;
- (void)_didFinishBackgroundFetching;
- (void)_enumerateChangeObserversWithBlock:(id /* block */)arg1;
- (id)_fetchAssetsStartingAtIndexPath:(id)arg1;
- (void)_fetchRemainingCollectionsBackgroundLoop;
- (id)_fetcher;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (id)_finalFilterPredicateForAssetCollection:(id)arg1;
- (id)_inaccurateAssetCollections;
- (id)_inclusionPredicateForAssetCollection:(id)arg1;
- (void)_incrementVersionIdentifier;
- (void)_interruptBackgroundFetch;
- (BOOL)_isAssetCollectionAccurate:(id)arg1;
- (BOOL)_isCurationEnabled;
- (id)_mutableResultRecordForAssetCollection:(id)arg1;
- (id)_observerInterestingAssetReferences;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(id /* block */)arg2;
- (void)_performManualReloadWithChangeBlock:(id /* block */)arg1;
- (unsigned int)_previousCollectionsCount;
- (void)_processAndPublishPendingCollectionFetchResults;
- (void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
- (void)_publishChange:(id)arg1;
- (void)_publishDidReceivePhotoLibraryChange:(id)arg1;
- (void)_publishReloadChange;
- (void)_publishWillChange;
- (id)_resultRecordForAssetCollection:(id)arg1;
- (BOOL)_reverseSortOrderForAssetCollection:(id)arg1;
- (id)_sectionCache;
- (void)_setPreviousCollectionsCount:(unsigned int)arg1;
- (void)_updateInaccurateAssetCollectionsIfNeeded;
- (id)allowedUUIDs;
- (id)approximateAssetsAtIndexPaths:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (id)assetCollectionForSection:(int)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)assetsInSection:(int)arg1;
- (id)assetsStartingAtIndexPath:(id)arg1;
- (int)backgroundFetchOriginSection;
- (void)clearResultsForAssetCollection:(id)arg1;
- (id)collectionListFetchResult;
- (BOOL)containsMultipleAssets;
- (BOOL)curate;
- (id)curatedAssetsInSection:(int)arg1;
- (BOOL)curatedFutilely;
- (BOOL)curatedIsEmpty;
- (void)dealloc;
- (id)description;
- (void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(BOOL)arg2 usingBlock:(id /* block */)arg3;
- (int)estimatedAllCount;
- (int)estimatedOtherCount;
- (int)estimatedPhotosCount;
- (int)estimatedVideosCount;
- (id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (unsigned int)fetchLimit;
- (id)fetchResultWithAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsInSections:(id)arg1;
- (id)fetchResultsByAssetCollection;
- (id)filterPredicate;
- (id)firstAssetCollection;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(int)arg2;
- (BOOL)forceAccurateSection:(int)arg1 andSectionsBeforeAndAfter:(int)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)forceExcludeAssetsAtIndexPaths:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (int)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(int)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4;
- (id)indexPathForFirstAsset;
- (id)indexPathForLastAsset;
- (id)infoForAssetCollection:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1 options:(unsigned int)arg2;
- (id)initWithPhotosDataSourceConfiguration:(id)arg1;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (BOOL)isEmpty;
- (BOOL)isImmutable;
- (id)keyAssetsInSection:(int)arg1;
- (id)lastAssetCollection;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (unsigned int)options;
- (void)pauseChangeDeliveryFor:(double)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1;
- (void)prefetchAssetsAtIndexPaths:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)referenceAsset;
- (void)refetchResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (BOOL)reverseSortOrder;
- (unsigned int)sectionForAssetCollection:(id)arg1;
- (void)setAllowedUUIDs:(id)arg1;
- (void)setBackgroundFetchOriginSection:(int)arg1;
- (void)setCollectionListFetchResult:(id)arg1;
- (void)setCurate:(BOOL)arg1;
- (void)setDisableFilters:(BOOL)arg1 forAssetCollection:(id)arg2;
- (void)setFetchLimit:(unsigned int)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setReverseSortOrder:(BOOL)arg1;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (id)uncuratedAssetsInSection:(int)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (unsigned int)versionIdentifier;
- (float)weightForAsset:(id)arg1;

@end