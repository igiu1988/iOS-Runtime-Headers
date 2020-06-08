/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeController : NSObject <MPVolumeControllerDataSourceDelegate> {
    <MPVolumeControllerDataSource> * _dataSource;
    <MPVolumeControllerDelegate> * _delegate;
    int  _volumeChangeCoalescingCount;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, retain) <MPVolumeControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *volumeAudioCategory;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly, copy) NSString *volumeControlLabel;
@property (nonatomic) float volumeValue;
@property (nonatomic, readonly) bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_updateVolumeControlAvailability;
- (void)adjustVolumeValue:(float)arg1;
- (id)dataSource;
- (id)delegate;
- (void)getVolumeValueWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (bool)muted;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1 withNoticationDelay:(float)arg2;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)updateVolumeValue;
- (void)updateVolumeWarningState;
- (id)volumeAudioCategory;
- (id)volumeControlLabel;
- (void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(bool)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeMuted:(bool)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(bool)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;
- (float)volumeValue;
- (bool)volumeWarningEnabled;
- (long long)volumeWarningState;

@end
