/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceClient : NSObject {
    int  _clientID;
    id /* block */  _deviceAvailabilityChangedHandler;
    int  _pid;
    bool  _sharedDeviceInUseForFlashlight;
    bool  _sharedDeviceInUseForVideo;
}

@property (nonatomic, readonly) int clientID;
@property (nonatomic, copy) id /* block */ deviceAvailabilityChangedHandler;
@property (nonatomic, readonly) int pid;
@property (nonatomic) bool sharedDeviceInUseForFlashlight;
@property (nonatomic) bool sharedDeviceInUseForVideo;

+ (id)deviceClientWithPID:(int)arg1 clientIDOut:(int*)arg2;

- (int)clientID;
- (void)dealloc;
- (id)description;
- (id /* block */)deviceAvailabilityChangedHandler;
- (id)initWithPID:(int)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setDeviceAvailabilityChangedHandler:(id /* block */)arg1;
- (void)setSharedDeviceInUseForFlashlight:(bool)arg1;
- (void)setSharedDeviceInUseForVideo:(bool)arg1;
- (bool)sharedDeviceInUseForFlashlight;
- (bool)sharedDeviceInUseForVideo;

@end
