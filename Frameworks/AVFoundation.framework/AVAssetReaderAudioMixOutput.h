/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal * _audioMixOutputInternal;
}

@property (nonatomic, copy) AVAudioMix *audioMix;
@property (nonatomic, readonly) NSDictionary *audioSettings;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) NSArray *audioTracks;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;

- (id)_asset;
- (struct opaqueMTAudioProcessingTap { }*)_audioTapProcessorForTrack:(id)arg1;
- (id)_audioTimePitchAlgorithmForTrack:(id)arg1;
- (id)_audioVolumeCurveForTrack:(id)arg1;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1 forTrack:(id)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2;
- (void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2;
- (id)audioMix;
- (id)audioSettings;
- (id)audioTimePitchAlgorithm;
- (id)audioTracks;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (id)mediaType;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (id)assetReaderAudioMixOutputWithAudioMix:(id)arg1 appliedToAsset:(id)arg2 audioSettings:(id)arg3;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)assetReaderAudioMixOutputWithAudioMix:(id)arg1 appliedToAsset:(id)arg2 audioSettings:(id)arg3;

@end
