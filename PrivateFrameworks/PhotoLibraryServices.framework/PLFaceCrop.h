/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFaceCrop : PLManagedObject <PLCloudDeletable, PLSyncableObject> {
    bool  _needsPersistenceUpdate;
}

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) unsigned short cloudType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PLDetectedFace *face;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invalidMergeCandidatePersonUUID;
@property (nonatomic, readonly, retain) id localID;
@property (nonatomic) bool needsPersistenceUpdate;
@property (nonatomic, retain) PLPerson *person;
@property (nonatomic, retain) NSData *resourceData;
@property (nonatomic) short state;
@property (readonly) Class superclass;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *uuid;

+ (long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2;
+ (id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (short)_localTypeFromCloudType:(long long)arg1;
+ (int)_nameSourceForFaceFromFaceCrop:(id)arg1;
+ (int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1;
+ (id)allFaceCropsInPhotoLibrary:(id)arg1;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)listOfSyncedProperties;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(bool)arg2;

- (void)applyPropertiesToTrainingFace;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)cplFaceCropChange;
- (id)cplFullRecord;
- (id)debugDescription;
- (bool)isSyncableChange;
- (id)localID;
- (id)momentShare;
- (bool)needsPersistenceUpdate;
- (void)prepareForDeletion;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (bool)supportsCloudUpload;
- (void)willSave;

@end
