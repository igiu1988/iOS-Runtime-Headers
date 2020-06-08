/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PVLibraryGraph : MAGraph <PVPhotoLibraryProtocol> {
    NSDictionary * _distanceIdentityDictionary;
    NSDictionary * _faceprintDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *distanceIdentityDictionary;
@property (nonatomic, retain) NSDictionary *faceprintDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultFacesDataSnapshotPath;
+ (Class)edgeClass;
+ (id)graphForFacesDataSnapshotAtPath:(id)arg1;
+ (id)graphForLibrary:(id)arg1 ingestPeople:(bool)arg2;
+ (id)graphWithName:(id)arg1 forFacesDataSnapshotAtPath:(id)arg2;
+ (Class)nodeClass;
+ (id)originGraphForFacesDataSnapshotAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)_infoNode;
- (id)_insertAssetNodeForAsset:(id)arg1;
- (id)_insertFaceGroupNodeForFaceGroup:(id)arg1;
- (id)_insertFaceNodeForFace:(id)arg1;
- (id)_insertMomentNodeForMoment:(id)arg1;
- (id)_insertPeopleNodeForPerson:(id)arg1 withType:(unsigned long long)arg2;
- (bool)_saveDictionary:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)distanceIdentityDictionary;
- (id)faceprintDictionary;
- (unsigned long long)getPeopleTypeForFaceGroupNode:(id)arg1;
- (id)init;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (bool)pv_isLibraryBeingSynchronized;
- (id)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (bool)pv_performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)pv_persistentStorageDirectoryURL;
- (bool)saveFacesDataSnapshotAtPath:(id)arg1 error:(id*)arg2;
- (void)setDistanceIdentityDictionary:(id)arg1;
- (void)setFaceprintDictionary:(id)arg1;

@end
