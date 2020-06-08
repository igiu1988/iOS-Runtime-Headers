/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {
    <HMCameraStreamControlDelegate> * _delegate;
    HMFUnfairLock * _lock;
    _HMCameraStreamControl * _streamControl;
}

@property (nonatomic, readonly) HMCameraStream *cameraStream;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMCameraStreamControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _HMCameraStreamControl *streamControl;
@property (nonatomic, readonly) unsigned long long streamState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraStream;
- (void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (id)delegate;
- (id)initWithStreamControl:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStreamControl:(id)arg1;
- (void)startStream;
- (void)startStreamWithPreferences:(id)arg1;
- (void)stopStream;
- (id)streamControl;
- (unsigned long long)streamState;

@end
