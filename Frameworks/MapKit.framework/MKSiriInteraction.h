/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSiriInteraction : NSObject {
    int  _action;
    MKMapItem * _mapItem;
    int  _resultIndex;
    int  _secondsLeftForNavigationContinueSignal;
    int  _target;
    NSTimer * _timer;
}

@property (nonatomic) int action;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) int resultIndex;
@property (nonatomic) int secondsLeftForNavigationContinueSignal;
@property (nonatomic) int target;
@property (nonatomic, retain) NSTimer *timer;

+ (void)generateHashForNavigationURL:(id)arg1;
+ (id)navigationHash;
+ (void)setNavigationHash:(id)arg1;

- (void).cxx_destruct;
- (bool)_isStartNavigationAction:(int)arg1;
- (bool)_isValidTargetForNavUI:(int)arg1;
- (void)_sendContinueNavigationIntentToSiri;
- (id)_whiteListedNavigationActionAsString:(int)arg1;
- (id)_whiteListedPlaceCardActionAsString:(int)arg1;
- (id)_whiteListedSiriListActionAsString:(int)arg1;
- (int)action;
- (void)donateIfWanted;
- (id)initWithGEOUIAction:(int)arg1 target:(int)arg2 mapItem:(id)arg3;
- (id)initWithGEOUIAction:(int)arg1 target:(int)arg2 mapItem:(id)arg3 resultIndex:(int)arg4;
- (id)intentIfWanted;
- (id)mapItem;
- (int)resultIndex;
- (int)secondsLeftForNavigationContinueSignal;
- (void)setAction:(int)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setSecondsLeftForNavigationContinueSignal:(int)arg1;
- (void)setTarget:(int)arg1;
- (void)setTimer:(id)arg1;
- (int)target;
- (id)timer;

@end
