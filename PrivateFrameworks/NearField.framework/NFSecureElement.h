/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo * _info;
    bool  _isDirty;
}

@property (readonly) unsigned long long OSVersion;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) bool isInRestrictedMode;
@property (readonly) bool isProductionSigned;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) NSString *serialNumber;
@property (readonly) unsigned int supportedTechnologies;

+ (id)embeddedSecureElement;
+ (id)icefallSecureElement;
+ (unsigned int)supportedTechnologies;

- (unsigned long long)OSVersion;
- (id)_initWithInfo:(id)arg1;
- (void)_markDirty;
- (void)_setIsInRestrictedMode:(bool)arg1;
- (void)_updateIfDirty;
- (void)_updateSecureElementInfo:(id)arg1;
- (void)dealloc;
- (id)eccCertificate;
- (id)eckaCertificate;
- (unsigned int)hwType;
- (id)identifier;
- (id)info;
- (bool)isInRestrictedMode;
- (bool)isProductionSigned;
- (id)manifestQueryBlob;
- (id)rsaCertificate;
- (id)sequenceCounter;
- (id)serialNumber;
- (unsigned int)supportedTechnologies;

@end
