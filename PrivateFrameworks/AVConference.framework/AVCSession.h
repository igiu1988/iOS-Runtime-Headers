/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCSession : NSObject <AVCSessionParticipantControlProtocol, AVCSessionParticipantDelegate> {
    int  _activeConfigurationCount;
    AVCSessionConfiguration * _configuration;
    VCXPCClientShared * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    NSData * _frequencyLevels;
    AVCSessionParticipant * _localParticipant;
    NSMutableDictionary * _participantsToAdd;
    NSMutableDictionary * _remoteParticipants;
    long long  _sessionToken;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSString * _transportToken;
    NSString * _uuid;
}

@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (getter=isAudioMuted, nonatomic) bool audioMuted;
@property (getter=isAudioPaused, nonatomic) bool audioPaused;
@property (nonatomic, retain) AVCSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCSessionDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *frequencyLevels;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVCSessionParticipant *localParticipant;
@property (nonatomic, readonly) NSData *negotiationData;
@property (nonatomic, readonly) NSMutableDictionary *participantsToAdd;
@property (nonatomic, readonly) NSArray *remoteParticipants;
@property (nonatomic, readonly) NSMutableDictionary *remoteParticipantsMap;
@property (nonatomic, readonly) long long sessionToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (getter=isVideoPaused, nonatomic) bool videoPaused;
@property (nonatomic) float volume;
@property (nonatomic, readonly) VCXPCClientShared *xpcConnection;

- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)beginParticipantConfiguration;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)delegateNotificationQueue;
- (void)deregisterFromNotifications;
- (id)description;
- (void)didDetectErrorHandler:(id)arg1;
- (void)endParticipantConfiguration;
- (id)frequencyLevels;
- (id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (bool)isAudioEnabled;
- (bool)isAudioMuted;
- (bool)isAudioPaused;
- (bool)isVideoEnabled;
- (bool)isVideoPaused;
- (id)localParticipant;
- (id)negotiationData;
- (void)participant:(id)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)participant:(id)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)participant:(id)arg1 frequencyLevelsDidChange:(id)arg2;
- (void)participant:(id)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)participant:(id)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (id)participantsToAdd;
- (void)registerBlocksForNotifications;
- (id)remoteParticipants;
- (id)remoteParticipantsMap;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (long long)sessionToken;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioMuted:(bool)arg1;
- (void)setAudioPaused:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setupNotificationQueue:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateConfiguration:(id)arg1;
- (id)uuid;
- (bool)validateParticipantToAdd:(id)arg1;
- (bool)validateParticipantToRemove:(id)arg1;
- (float)volume;
- (id)xpcConnection;

@end
