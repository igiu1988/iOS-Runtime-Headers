/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSEnumerator : NSObject <NSFastEnumeration>

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)nextObject;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)nextObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (bool)na_all:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_firstObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)rc_firstObjectPassingTest:(id /* block */)arg1;

@end
