/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface APCPlayer : NSObject {
    AUPasscodeCodecConfiguration * _codecConfig;
    struct NSData { Class x1; } * _configurationData;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    APCEncoderProcessor * _encodeProcessor;
    bool  _isPlaying;
    NSData * _payload;
    AVPlayer * _player;
    APCPlayerEngine * _playerEngine;
}

@property (nonatomic, readonly, copy) NSData *configurationData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) bool isPlaying;
@property (nonatomic, readonly, copy) NSData *payload;

+ (unsigned long long)assetIDFromIdentifier:(id)arg1;
+ (id)carrierAssetIdentifiers;
+ (id)fileNameForCarrierAsset:(unsigned long long)arg1;
+ (id)urlForCarrierAsset:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct NSData { Class x1; }*)configurationData;
- (id)createCompatibleConfigForCapabilites:(id)arg1;
- (id)dispatchQueue;
- (void)endPasscodeEmbedding;
- (id)init;
- (id)initWithCodecConfiguration:(id)arg1;
- (id)initWithListenerCapabilityData:(struct NSData { Class x1; }*)arg1;
- (id)initWithListenerCapabilityData:(struct NSData { Class x1; }*)arg1 payloadLength:(unsigned long long)arg2;
- (bool)isPlaying;
- (id)payload;
- (float)preparePayload:(id)arg1 usingCarrierAsset:(unsigned long long)arg2 error:(id*)arg3;
- (float)preparePayload:(id)arg1 usingCarrierAtURL:(id)arg2 error:(id*)arg3;
- (void)setDispatchQueue:(id)arg1;
- (bool)startSend;
- (void)stopSend:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)stopSendAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)stopSendWithFadeOut:(float)arg1 completion:(id /* block */)arg2;

@end
