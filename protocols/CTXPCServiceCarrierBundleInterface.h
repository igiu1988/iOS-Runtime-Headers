/* Generated by RuntimeBrowser.
 */

@protocol CTXPCServiceCarrierBundleInterface

@required

- (void)context:(void *)arg1 getAttachApnSettingsWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)context:(void *)arg1 modifyAttachApnSettings:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)copyBundleVersion:(void *)arg1 bundleType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTXPCServiceSubscriptionContext *, CTBundle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)copyCarrierBookmarks:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)copyCarrierBundleLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)copyCarrierBundleValue:(void *)arg1 key:(void *)arg2 bundleType:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CTXPCServiceSubscriptionContext *, NSString *, CTBundle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)copyCarrierBundleValue:(void *)arg1 keyHierarchy:(void *)arg2 bundleType:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CTXPCServiceSubscriptionContext *, NSArray *, CTBundle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)copyCarrierBundleValueWithDefault:(void *)arg1 key:(void *)arg2 bundleType:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CTXPCServiceSubscriptionContext *, NSString *, CTBundle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)copyCarrierBundleValueWithDefault:(void *)arg1 keyHierarchy:(void *)arg2 bundleType:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CTXPCServiceSubscriptionContext *, NSArray *, CTBundle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)copyCarrierBundleVersion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getWiFiCallingSettingPreferences:(void *)arg1 key:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)isAttachApnSettingAllowed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setWiFiCallingSettingPreferences:(void *)arg1 key:(void *)arg2 value:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CTXPCServiceSubscriptionContext *, NSString *, NSObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
