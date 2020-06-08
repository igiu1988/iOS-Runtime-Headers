/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSApplicationRestrictionsManager : NSObject {
    NSSet * _blacklistedBundleIDs;
    NSNumber * _maximumRating;
    NSSet * _restrictedBundleIDs;
    NSObject<OS_dispatch_queue> * _restrictionsAccessQueue;
    NSNumber * _whitelistState;
    NSSet * _whitelistedBundleIDs;
}

@property (getter=isAdTrackingEnabled, readonly) bool adTrackingEnabled;
@property (readonly) NSSet *blacklistedBundleIDs;
@property (readonly) NSNumber *maximumRating;
@property (getter=isOpenInRestrictionInEffect, readonly) bool openInRestrictionInEffect;
@property (readonly) NSSet *restrictedBundleIDs;
@property (getter=isSystemAppDeletionEnabled, readonly) bool systemAppDeletionEnabled;
@property (getter=isWhitelistEnabled, readonly) bool whitelistEnabled;
@property (readonly) NSSet *whitelistedBundleIDs;

+ (id)activeRestrictionIdentifiers;
+ (id)sharedInstance;

- (bool)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2;
- (id)_LSResolveIdentifiers:(id)arg1;
- (id)_MCProfileConnection;
- (id)_MCRestrictionManager;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(bool)arg3;
- (void)beginListeningForChanges;
- (id)blacklistedBundleID;
- (id)blacklistedBundleIDs;
- (id)calculateSetDifference:(id)arg1 and:(id)arg2;
- (bool)cleanRemovedSystemApplicationsList;
- (void)clearAllValues;
- (void)dealloc;
- (void)handleMCEffectiveSettingsChanged;
- (id)identifierForRemovedAppPrompt:(id)arg1;
- (id)init;
- (bool)isAdTrackingEnabled;
- (bool)isAppExtensionRestricted:(id)arg1;
- (bool)isApplicationRestricted:(id)arg1;
- (bool)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(bool)arg2;
- (bool)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2;
- (bool)isFeatureAllowed:(unsigned long long)arg1;
- (bool)isOpenInRestrictionInEffect;
- (bool)isRatingAllowed:(id)arg1;
- (bool)isSystemAppDeletionEnabled;
- (bool)isWhitelistEnabled;
- (id)maximumRating;
- (id)restrictedBundleIDs;
- (bool)setApplication:(id)arg1 removed:(bool)arg2;
- (void)setBlacklistedBundleIDs:(id)arg1;
- (void)setRestrictedBundleIDs:(id)arg1;
- (void)setWhitelistedBundleIDs:(id)arg1;
- (id)whitelistedBundleIDs;

@end
