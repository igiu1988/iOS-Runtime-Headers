/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITypingAssertion : NSObject {
    bool  _active;
    NSMutableSet * _restingPathIndices;
    NSTimer * _timer;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSTimer *timer;

+ (id)sharedTypingAssertion;

- (void).cxx_destruct;
- (id)__restingPathIndices;
- (void)_sbsSetTypingActive:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (void)restResetTouches;
- (void)restTouchEndWithPathIndex:(long long)arg1;
- (void)restTouchStartWithPathIndex:(long long)arg1;
- (void)setActive:(bool)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)timerFired:(id)arg1;
- (void)touch;
- (void)touchWithDuration:(double)arg1;

@end
