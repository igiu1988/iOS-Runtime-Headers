/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarRecordRendering : NSObject

+ (void)_castRecord:(id)arg1 andDoRecordHandlingBlock:(id /* block */)arg2 puppetHandlingBlock:(id /* block */)arg3;
+ (id)avatarForRecord:(id)arg1;
+ (id)configurationForRecord:(id)arg1 coreModel:(id)arg2;
+ (id)imageForRecord:(id)arg1 scope:(id)arg2;
+ (id)memojiForRecord:(id)arg1;
+ (void)preloadAllAvatarsWithStore:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)preloadAllAvatarsWithStore:(id)arg1 environment:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)preloadAvatarsWithFetchRequests:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(id /* block */)arg4;

@end
