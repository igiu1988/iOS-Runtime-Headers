/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXActionUtils : NSObject

+ (id)_contactIdentifiersReferencedByAction:(id)arg1;
+ (id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2;
+ (id /* block */)actionKeyFilterForCandidateBundleIds:(id)arg1 candidateActionTypes:(id)arg2 blacklist:(id)arg3;
+ (double)calculateWeightWith:(unsigned long long)arg1 strength:(double)arg2 termFreq:(unsigned long long)arg3 docFreq:(unsigned long long)arg4 docLength:(unsigned long long)arg5;
+ (id)filterDuplicateActionPredictions:(id)arg1;
+ (id)filterMissingOrBlockedRecipientPredictions:(id)arg1;
+ (id)filterRecentlyDeletedNotePredictions:(id)arg1;
+ (id)firstIntent:(id)arg1 inAppLaunchSession:(id)arg2;
+ (id)getActionTypeFromActionKey:(id)arg1;
+ (id)getActionTypesFromActionKeys:(id)arg1;
+ (id)getActivityTypeFromNSUAType:(id)arg1;
+ (id)getBundleIdAndActionTypeFromActionKey:(id)arg1;
+ (id)getBundleIdFromActionKey:(id)arg1;
+ (id)getBundleIdsFromActionKeys:(id)arg1;
+ (id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2;
+ (bool)isActionKey:(id)arg1;
+ (bool)isBlockedEmailAddressContainedInAddresses:(id)arg1;
+ (bool)isBlockedPhoneNumberContainedInNumbers:(id)arg1;
+ (bool)isContainmentBetweenAction:(id)arg1 other:(id)arg2;
+ (bool)isNSUAType:(id)arg1;
+ (bool)isTitleEquivalenceBetweenAction:(id)arg1 other:(id)arg2;
+ (id)limitParameterCombinations:(id)arg1 limit:(int)arg2;
+ (id)markTodayInTitleAndUserActivityString:(id)arg1 withActionKey:(id)arg2;
+ (void)prefillActionHistograms;
+ (void)prefillActionSlotDatabase;
+ (id)recipientFromMessageIntent:(id)arg1;
+ (void)resetActionPredictions;
+ (id)sha256hex:(id)arg1;
+ (bool)shouldAcceptMessageContent:(id)arg1;
+ (bool)shouldPredictRecipient:(id)arg1 withDate:(id)arg2 andRecipientDate:(id)arg3;
+ (id)slotSetFromAction:(id)arg1;
+ (id)slotSetsForAction:(id)arg1;
+ (id)swapUserActivityString:(id)arg1 withActionKey:(id)arg2 withNewTitle:(id)arg3 withNewDateString:(id)arg4;
+ (id)timeOfDayAndDayOfWeekForDate:(id)arg1 timeZone:(id)arg2;
+ (bool)uniqueRecipientsMatchedBetweenIntent:(id)arg1 andIntent:(id)arg2;

@end
