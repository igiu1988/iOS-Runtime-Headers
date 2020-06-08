/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient * _client;
    NSMutableDictionary * _dataStatusDict;
    NSObject<OS_dispatch_group> * _intlDataAccessGroup;
    bool  _intlDataAccessStatus;
    bool  _intlDataAccessStatusInitialized;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_group> *intlDataAccessGroup;
@property bool intlDataAccessStatus;
@property bool intlDataAccessStatusInitialized;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)client;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (id)dataStatusDict;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus;
- (id)getDataStatus:(id)arg1;
- (bool)getInternationalDataAccessStatus;
- (id)init;
- (id)initPrivate;
- (id)intlDataAccessGroup;
- (bool)intlDataAccessStatus;
- (bool)intlDataAccessStatusInitialized;
- (bool)isCellularDataEnabled;
- (void)setCellularDataEnabled:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setDataStatusDict:(id)arg1;
- (void)setInternationalDataAccessStatus:(bool)arg1;
- (void)setIntlDataAccessGroup:(id)arg1;
- (void)setIntlDataAccessStatus:(bool)arg1;
- (void)setIntlDataAccessStatusInitialized:(bool)arg1;
- (void)willEnterForeground;

@end
