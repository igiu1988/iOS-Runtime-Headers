/* Generated by RuntimeBrowser.
 */

@protocol CSSearchableIndexInterface <NSObject>

@required

- (void)changeStateOfSearchableItemsWithUIDs:(NSArray *)arg1 toState:(long long)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4 forUTIType:(NSString *)arg5 options:(long long)arg6;
- (void)deleteAllSearchableItemsWithProtectionClass:(void *)arg1 forBundleID:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSearchableItemsSinceDate:(void *)arg1 protectionClass:(void *)arg2 forBundleID:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSDate *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSearchableItemsWithDomainIdentifiers:(void *)arg1 protectionClass:(void *)arg2 forBundleID:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchLastClientStateWithProtectionClass:(void *)arg1 forBundleID:(void *)arg2 clientStateName:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)indexFromBundle:(void *)arg1 protectionClass:(void *)arg2 options:(void *)arg3 items:(void *)arg4 itemsText:(void *)arg5 itemsHTML:(void *)arg6 clientState:(void *)arg7 clientStateName:(void *)arg8 deletes:(void *)arg9 completionHandler:(void *)arg10; // needs 10 arg types, found 15: NSString *, NSString *, long long, NSData *, NSData *, NSData *, NSData *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)indexSearchableItems:(void *)arg1 deleteSearchableItemsWithIdentifiers:(void *)arg2 clientState:(void *)arg3 clientStateName:(void *)arg4 protectionClass:(void *)arg5 forBundleID:(void *)arg6 options:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 13: NSArray *, NSArray *, NSData *, NSString *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)indexSearchableItems:(void *)arg1 deleteSearchableItemsWithIdentifiers:(void *)arg2 clientState:(void *)arg3 protectionClass:(void *)arg4 forBundleID:(void *)arg5 options:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: NSArray *, NSArray *, NSData *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)provideDataForBundle:(void *)arg1 identifier:(void *)arg2 type:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)provideFileURLForBundle:(void *)arg1 identifier:(void *)arg2 type:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)willModifySearchableItemsWithIdentifiers:(void *)arg1 protectionClass:(void *)arg2 forBundleID:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)_forceAppWithBundleID:(NSString *)arg1 toPerformJob:(CSIndexJob *)arg2;
- (void)_issueCommand:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)addInteraction:(INInteraction *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)addInteraction:(void *)arg1 bundleID:(void *)arg2 protectionClass:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: INInteraction *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkInWithProtectionClass:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSIndexJob *, NSError *, void*
- (void)deleteAllInteractionsWithBundleID:(void *)arg1 protectionClass:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteAllSearchableItemsWithBundleID:(void *)arg1 protectionClass:(void *)arg2 shouldGC:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteInteractionsWithGroupIdentifiers:(void *)arg1 bundleID:(void *)arg2 protectionClass:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteInteractionsWithIdentifiers:(void *)arg1 bundleID:(void *)arg2 protectionClass:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchAttributes:(void *)arg1 protectionClass:(void *)arg2 bundleID:(void *)arg3 identifiers:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 14: NSArray *, NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)flushUserActivities;
- (void)performDataMigrationWithTimeout:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;

@end
