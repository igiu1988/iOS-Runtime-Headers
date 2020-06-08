/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMService : NSObject <HFFavoritable, HFHomeContainedObject, HFHomeStatusVisible, HFReorderableHomeKitObject, HFRoomContextProviding, HFStateDumpBuildable, HFUserNotificationServiceSettingsProviding, HMFLogging, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    HMApplicationData * _applicationData;
    NSString * _associatedServiceType;
    HMBulletinBoardNotification * _bulletinBoardNotificationInternal;
    long long  _configurationState;
    NSString * _configuredName;
    _HMContext * _context;
    HMMutableArray * _currentCharacteristics;
    NSString * _defaultName;
    NSURL * _homeObjectURLInternal;
    NSNumber * _instanceID;
    NSArray * _linkedServiceInstanceIDs;
    HMFUnfairLock * _lock;
    NSString * _name;
    bool  _primaryService;
    NSString * _serviceSubtype;
    NSString * _serviceType;
    NSUUID * _uniqueIdentifier;
    bool  _userInteractive;
    NSUUID * _uuid;
}

@property (nonatomic) HMAccessory *accessory;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic, copy) NSString *associatedServiceType;
@property (nonatomic, readonly) HMBulletinBoardNotification *bulletinBoardNotificationInternal;
@property (nonatomic, readonly, copy) NSArray *characteristics;
@property (nonatomic) long long configurationState;
@property (nonatomic, retain) NSString *configuredName;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, copy) HMMutableArray *currentCharacteristics;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) unsigned long long hf_fallbackProgrammableSwitchIndex;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_hasSetVisibleInHomeStatus;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isProgrammableSwitch;
@property (nonatomic, readonly) bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) HMCharacteristic *hf_labelIndexCharacteristic;
@property (nonatomic, readonly) HMCharacteristic *hf_labelNamespaceCharacteristic;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_supportsHomeStatus;
@property (nonatomic, readonly, copy) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSURL *homeObjectURLInternal;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSArray *linkedServiceInstanceIDs;
@property (nonatomic, readonly, copy) NSArray *linkedServices;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *name;
@property (getter=isPrimaryService, nonatomic, readonly) bool primaryService;
@property (nonatomic, copy) NSString *serviceSubtype;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (getter=isUserInteractive, nonatomic, readonly) bool userInteractive;
@property (nonatomic, copy) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)__localizedDescriptionForServiceType:(id)arg1;
+ (id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1;
+ (long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1;
+ (id)_serviceTypeAsString:(id)arg1;
+ (id)localizedDescriptionForServiceType:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_addCharacteristic:(id)arg1;
- (id)_findCharacteristic:(id)arg1;
- (void)_handleMarkServiceInteractive:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateConfigurationState:(long long)arg1;
- (void)_handleUpdateConfiguredName:(id)arg1;
- (void)_handleUpdateDefaultName:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (void)_handleUpdateServiceSubtype:(id)arg1;
- (bool)_hasCharacteristic:(id)arg1;
- (bool)_hasCharacteristicOfType:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (id)_serviceTypeDescription;
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateConfigurationState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessory;
- (id)applicationData;
- (id)associatedServiceType;
- (id)bulletinBoardNotification;
- (id)bulletinBoardNotificationInternal;
- (id)characteristics;
- (long long)configurationState;
- (id)configuredName;
- (id)context;
- (id)currentCharacteristics;
- (id)defaultName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeObjectURL;
- (id)homeObjectURLInternal;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryService;
- (bool)isUserInteractive;
- (id)linkedServiceInstanceIDs;
- (id)linkedServices;
- (id)localizedDescription;
- (id)logIdentifier;
- (id)name;
- (id)serviceSubtype;
- (id)serviceType;
- (void)setAccessory:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAssociatedServiceType:(id)arg1;
- (void)setConfigurationState:(long long)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentCharacteristics:(id)arg1;
- (void)setDefaultName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServiceSubtype:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateConfigurationState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_allowedChildServicesTypeMap;
+ (id)hf_allRequiredCharacteristicTypesForStandardServices;
+ (id)hf_defaultServiceSubtypeForServiceType:(id)arg1;
+ (id)hf_descriptionForServiceSubtype:(id)arg1;
+ (id)hf_programmableSwitchServiceTypes;
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)arg1;
+ (id)hf_roomsForServices:(id)arg1;
+ (id)hf_sensorCharacteristicTypeForServiceType:(id)arg1;
+ (id)hf_standardServiceTypes;
+ (id)hf_standardServices;

- (id)_hf_firstLinkedServiceOfType:(id)arg1;
- (bool)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;
- (bool)hf_canGroupWithService:(id)arg1;
- (id)hf_characteristicOfType:(id)arg1;
- (id)hf_childServices;
- (id)hf_childServicesOfType:(id)arg1;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (id)hf_effectiveServiceSubtype;
- (id)hf_effectiveServiceType;
- (unsigned long long)hf_fallbackProgrammableSwitchIndex;
- (bool)hf_hasSetFavorite;
- (bool)hf_hasSetVisibleInHomeStatus;
- (id)hf_iconDescriptor;
- (bool)hf_isFavorite;
- (bool)hf_isLegacyService;
- (bool)hf_isProgrammableSwitch;
- (bool)hf_isValidObject;
- (bool)hf_isVisible;
- (bool)hf_isVisibleInHomeStatus;
- (id)hf_labelIndexCharacteristic;
- (id)hf_labelNamespaceCharacteristic;
- (id)hf_parentRoom;
- (id)hf_parentService;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;
- (id)hf_serviceDescriptor;
- (id)hf_serviceNameComponents;
- (bool)hf_shouldShowInFavorites;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (bool)hf_supportsGroups;
- (bool)hf_supportsHomeStatus;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_updateIsVisibleInHomeStatus:(bool)arg1;
- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)hf_userNotificationSettings;
- (id)home;

@end
