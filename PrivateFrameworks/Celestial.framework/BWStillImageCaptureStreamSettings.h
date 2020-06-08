/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {
    BWBracketSettings * _bracketSettings;
    unsigned long long  _captureFlags;
    int  _captureType;
    NSString * _portType;
    NSDictionary * _preBracketFrameCaptureParams;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _preferredTimeMachinePTS;
    int  _referenceFrameIndex;
    NSArray * _timeMachineBracketedCaptureParams;
    int  _timeMachineFrameCount;
    NSArray * _unifiedBracketedCaptureParams;
    NSArray * _validBracketedCaptureSequenceNumbers;
}

@property (nonatomic, readonly) BWBracketSettings *bracketSettings;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) int expectedFrameCaptureCount;
@property (nonatomic, readonly) int expectedFrameCount;
@property (nonatomic, readonly) int expectedTimeMachineFrameCaptureCount;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredTimeMachinePTS;
@property (nonatomic, readonly) int timeMachineFrameCount;
@property (nonatomic, readonly) NSArray *validBracketedCaptureSequenceNumbers;

+ (bool)supportsSecureCoding;

- (id)bracketSettings;
- (unsigned long long)captureFlags;
- (int)captureType;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)expectedFrameCaptureCount;
- (int)expectedFrameCount;
- (int)expectedTimeMachineFrameCaptureCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 validBracketedCaptureSequenceNumbers:(id)arg8;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6;
- (bool)isUnifiedBracketingErrorRecoveryFrame:(struct opaqueCMSampleBuffer { }*)arg1 isReferenceFrame:(bool)arg2;
- (id)portType;
- (id)preBracketFrameCaptureParams;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredTimeMachinePTS;
- (int)referenceFrameIndex;
- (void)setPreferredTimeMachinePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)timeMachineBracketedCaptureParams;
- (int)timeMachineFrameCount;
- (id)unifiedBracketedCaptureParams;
- (id)validBracketedCaptureSequenceNumbers;

@end
