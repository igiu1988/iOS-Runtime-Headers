/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEPackageTransport : PXObservable {
    NSMutableArray * __stagedIdentifiersInOrder;
    NSMutableDictionary * __stagedPackagesByIdentifier;
    <AEPackageTransportDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableArray *_stagedIdentifiersInOrder;
@property (nonatomic, readonly) NSMutableDictionary *_stagedPackagesByIdentifier;
@property (nonatomic) <AEPackageTransportDelegate> *delegate;

- (void).cxx_destruct;
- (void)_addPackageToStaging:(id)arg1;
- (void)_removePackageFromStagingWithIdentifier:(id)arg1;
- (id)_stagedIdentifiersInOrder;
- (id)_stagedPackagesByIdentifier;
- (void)commitPackage:(id)arg1;
- (id)delegate;
- (id)init;
- (id)mutableChangeObject;
- (id)orderedStagedIdentifiers;
- (id)packagesWithLivePhotoContent;
- (void)performChanges:(id /* block */)arg1;
- (void)reportError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)stagePackages:(id)arg1;
- (void)stagePackages:(id)arg1 andNotify:(bool)arg2;
- (id)stagedPackageForIdentifier:(id)arg1;
- (id)stagedPackages;
- (void)unstagePackageWithIdentifier:(id)arg1;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(bool)arg2;
- (void)unstagePackagesWithIdentifiers:(id)arg1;

@end
