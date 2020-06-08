/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncStoreEntity : HDHealthEntity

+ (id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4;

- (long long)syncProvenance;

@end
