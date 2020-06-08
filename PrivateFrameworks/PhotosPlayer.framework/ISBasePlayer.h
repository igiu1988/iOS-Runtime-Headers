/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate> {
    ISPlayerOutputContent * __outputContent;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __videoForwardPlaybackEndTime;
    id  __videoWillPlayToEndObserver;
    id  __videoWillPlayToPhotoObserver;
    ISBehavior * _activeBehavior;
    NSString * _apertureMode;
    bool  _audioEnabled;
    float  _audioVolume;
    <ISBasePlayerDelegate> * _delegate;
    NSError * _error;
    struct { 
        bool videoPlayer; 
        bool videoPlayerVolume; 
        bool contentFromPlayerItem; 
        bool willPlayToEndObserver; 
        bool willPlayToPhotoObserver; 
        bool status; 
    }  _isValid;
    ISPlayerState * _lastAppliedLayoutInfo;
    double  _lastAppliedScale;
    NSObject<OS_dispatch_queue> * _outputQueue;
    NSHashTable * _outputs;
    ISPlayerItem * _playerItem;
    AVPlayer * _providedAVPlayer;
    long long  _status;
    ISWrappedAVPlayer * _videoPlayer;
    float  _videoVolume;
}

@property (setter=_setOutputContent:, nonatomic, retain) ISPlayerOutputContent *_outputContent;
@property (setter=_setVideoForwardPlaybackEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _videoForwardPlaybackEndTime;
@property (setter=_setVideoWillPlayToEndObserver:, nonatomic, retain) id _videoWillPlayToEndObserver;
@property (setter=_setVideoWillPlayToPhotoObserver:, nonatomic, retain) id _videoWillPlayToPhotoObserver;
@property (setter=setActiveBehavior:, nonatomic, retain) ISBehavior *activeBehavior;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic) float audioVolume;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISBasePlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (setter=_setError:, nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (setter=_setLastAppliedLayoutInfo:, nonatomic, retain) ISPlayerState *lastAppliedLayoutInfo;
@property (setter=_setLastAppliedScale:, nonatomic) double lastAppliedScale;
@property (nonatomic, retain) ISPlayerItem *playerItem;
@property (setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_configureNewOutput:(id)arg1;
- (void)_handleErrorsIfNeeded;
- (void)_handleMediaServicesReset;
- (void)_invalidateContentFromPlayerItem;
- (void)_invalidateStatus;
- (void)_invalidateVideoPlayer;
- (void)_invalidateVideoPlayerVolume;
- (void)_invalidateWillPlayToEndObserver;
- (void)_invalidateWillPlayToPhotoObserver;
- (bool)_needsUpdate;
- (id)_outputContent;
- (void)_setError:(id)arg1;
- (void)_setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setLastAppliedLayoutInfo:(id)arg1;
- (void)_setLastAppliedScale:(double)arg1;
- (void)_setOutputContent:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setVideoForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoPlayer:(id)arg1;
- (void)_setVideoWillPlayToEndObserver:(id)arg1;
- (void)_setVideoWillPlayToPhotoObserver:(id)arg1;
- (void)_updateContentFromPlayerItemIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateVideoPlayerIfNeeded;
- (void)_updateVideoPlayerVolumeIfNeeded;
- (void)_updateWillPlayToEndObserverIfNeeded;
- (void)_updateWillPlayToPhotoObserverIfNeeded;
- (void)_videoDidPlayToEnd;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoForwardPlaybackEndTime;
- (void)_videoWillPlayToEnd;
- (id)_videoWillPlayToEndObserver;
- (void)_videoWillPlayToPhoto;
- (id)_videoWillPlayToPhotoObserver;
- (id)activeBehavior;
- (void)activeBehaviorDidChange;
- (void)addOutput:(id)arg1;
- (id)apertureMode;
- (void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (float)audioVolume;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)avPlayerDidDeallocate;
- (id)behavior:(id)arg1 addBoundaryTimeObserverForTimes:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)behavior:(id)arg1 playVideoToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 initialRate:(float)arg3 overDuration:(double)arg4 progressHandler:(id /* block */)arg5;
- (bool)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)behavior:(id)arg1 removeTimeObserver:(id)arg2;
- (bool)behavior:(id)arg1 seekVideoPlayerToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (bool)behavior:(id)arg1 seekVideoPlayerToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 completionHandler:(id /* block */)arg5;
- (void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)behavior:(id)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(id)arg1 setVideoVolume:(float)arg2;
- (void)configurePlayerItem;
- (void)dealloc;
- (id)delegate;
- (void)didAddOutput:(id)arg1;
- (void)didPerformChanges;
- (void)enumerateOutputsWithBlock:(id /* block */)arg1;
- (id)error;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (bool)isAudioEnabled;
- (id)lastAppliedLayoutInfo;
- (double)lastAppliedScale;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)playerItem;
- (void)playerItemDidChange;
- (void)removeOutput:(id)arg1;
- (void)setActiveBehavior:(id)arg1;
- (void)setApertureMode:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setVideoVolume:(float)arg1;
- (long long)status;
- (void)statusDidChange;
- (float)videoPlayRate;
- (id)videoPlayer;
- (float)videoVolume;
- (double)videoWillPlayToEndInterval;
- (double)videoWillPlayToPhotoInterval;
- (void)willRemoveOutput:(id)arg1;

@end
