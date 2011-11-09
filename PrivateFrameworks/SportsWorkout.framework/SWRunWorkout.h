/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class SWRunSensor, SWPaceModel, NSData;

@interface SWRunWorkout : SWWorkout <SWRunSensorPacketObserver> {
    SWRunSensor *_sensor;
    SWPaceModel *_paceModel;
    BOOL _hasStarted;
    float _weightInLbs;
    BOOL _isCalibration;
}

@property(readonly) SWRunSensor * sensor;
@property float weightInLbs;
@property(readonly) BOOL isWalk;
@property BOOL isCalibration;
@property(copy) NSData * paceModelParameters;
@property(readonly) BOOL canBeUsedForWalkCalibration;
@property(readonly) BOOL canBeUsedForRunCalibration;
@property(readonly) float minimumCalibrationDistanceMiles;
@property(readonly) float maximumCalibrationDistanceMiles;

+ (id)workoutWithSensor:(id)arg1;

- (void)setIsCalibration:(BOOL)arg1;
- (BOOL)isCalibration;
- (void)setWeightInLbs:(float)arg1;
- (float)weightInLbs;
- (id)sensor;
- (float)maximumCalibrationDistanceMiles;
- (float)minimumCalibrationDistanceMiles;
- (id)paceModelParameters;
- (void)setPaceModelParameters:(id)arg1;
- (void)pauseWorkout;
- (void)activateWorkout;
- (id)workoutData;
- (id)initWithSensor:(id)arg1;
- (BOOL)recalibrateWithAdjustedDistanceMiles:(float)arg1;
- (BOOL)calibrateWithDistanceMiles:(float)arg1 forWalk:(BOOL)arg2;
- (void)resetCalibration;
- (BOOL)canBeUsedForRunCalibration;
- (BOOL)canBeUsedForWalkCalibration;
- (BOOL)isWalk;
- (void)sensor:(id)arg1 didReceivePacketPayload:(const char *)arg2 timestamp:(unsigned long)arg3;
- (void)dealloc;

@end