/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding> {
    NSMutableArray * _channels;
    float  _maxFrequency;
    float  _minFrequency;
    long long  _sourceType;
}

@property (nonatomic, readonly) NSArray *channels;
@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) long long sourceType;

+ (bool)supportsSecureCoding;

- (void)applyChannelBins:(id)arg1 channelID:(unsigned short)arg2;
- (id)channels;
- (void)checkNumChannels:(unsigned short)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)maxFrequency;
- (float)minFrequency;
- (long long)sourceType;

@end
