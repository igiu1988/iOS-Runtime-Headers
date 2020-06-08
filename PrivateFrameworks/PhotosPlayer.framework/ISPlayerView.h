/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerView : UIView <ISBasePlayerDelegate, ISChangeObserver> {
    NSMutableSet * __activeGestures;
    UIGestureRecognizer * __gestureRecognizer;
    ISPlayerItem * __playerItem;
    ISBasePlayerUIView * __playerView;
    ISWrappedAVPlayer * __videoPlayer;
    bool  _audioMuted;
    <ISPlayerViewDelegate> * _delegate;
    struct { 
        bool playbackStateDidChange; 
        bool interactingDidChange; 
        bool gestureRecognizerDidChange; 
    }  _delegateRespondsTo;
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensionsOfReservedVideoMemory;
    NSError * _error;
    bool  _isInteracting;
    bool  _isReadyForDisplay;
    struct { 
        bool playerItemLoadingTarget; 
        bool playerPlayerItem; 
        bool playerView; 
        bool playerMuted; 
        bool status; 
        bool readyForDisplay; 
        bool playbackState; 
    }  _isValid;
    long long  _playbackState;
    unsigned long long  _playbackStyle;
    bool  _readyForDisplay;
    long long  _status;
}

@property (nonatomic, readonly) NSMutableSet *_activeGestures;
@property (setter=_setGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *_gestureRecognizer;
@property (setter=_setPlayerItem:, nonatomic, retain) ISPlayerItem *_playerItem;
@property (setter=_setPlayerView:, nonatomic, retain) ISBasePlayerUIView *_playerView;
@property (nonatomic, readonly) ISWrappedAVPlayer *_videoPlayer;
@property (nonatomic) bool audioMuted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISPlayerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } dimensionsOfReservedVideoMemory;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteracting;
@property (nonatomic, readonly) bool isReadyForDisplay;
@property (setter=_setPlaybackState:, nonatomic) long long playbackState;
@property (nonatomic) unsigned long long playbackStyle;
@property (setter=_setReadyForDisplay:, nonatomic) bool readyForDisplay;
@property (setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;

+ (void)setAllowPlayerReuse:(bool)arg1;

- (void).cxx_destruct;
- (id)_activeGestures;
- (id)_gestureRecognizer;
- (void)_handleGesture:(id)arg1;
- (void)_invalidatePlaybackState;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_invalidatePlayerMuted;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerView;
- (void)_invalidateReadyForDisplay;
- (void)_invalidateStatus;
- (bool)_needsUpdate;
- (id)_playerItem;
- (id)_playerView;
- (void)_setGestureRecognizer:(id)arg1;
- (void)_setInteracting:(bool)arg1;
- (void)_setPlaybackState:(long long)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)_setPlayerView:(id)arg1;
- (void)_setReadyForDisplay:(bool)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_updateIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_updatePlayerViewIfNeeded;
- (void)_updateReadyForDisplayIfNeeded;
- (void)_updateStatusIfNeeded;
- (id)_videoPlayer;
- (bool)audioMuted;
- (id)delegate;
- (struct CGSize { double x1; double x2; })dimensionsOfReservedVideoMemory;
- (id)error;
- (id)gestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithVideoPlayer:(id)arg1;
- (bool)isInteracting;
- (bool)isReadyForDisplay;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)playbackState;
- (unsigned long long)playbackStyle;
- (void)prepareWithPhoto:(struct CGImage { }*)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)prepareWithPlayerItem:(id)arg1;
- (bool)readyForDisplay;
- (void)setAudioMuted:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaybackStyle:(unsigned long long)arg1;
- (long long)status;
- (id)videoPlayerForPlayer:(id)arg1;

@end
