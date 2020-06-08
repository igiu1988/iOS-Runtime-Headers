/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPQuickTypeEvent : NSObject {
    NSString * _calendarTitle;
    NSDate * _end;
    EKEvent * _event;
    NSString * _identifier;
    bool  _isUnscheduledFreeTime;
    NSDate * _start;
    NSString * _title;
}

@property (nonatomic, copy) NSString *calendarTitle;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isUnscheduledFreeTime;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSString *title;

+ (id)eventFromEKEvent:(id)arg1;

- (void).cxx_destruct;
- (id)calendarTitle;
- (long long)compareStartDateWithEvent:(id)arg1;
- (id)description;
- (id)end;
- (id)event;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 calendarTitle:(id)arg3 start:(id)arg4 end:(id)arg5 isUnscheduledFreeTime:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEvent:(id)arg1;
- (bool)isUnscheduledFreeTime;
- (void)setCalendarTitle:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUnscheduledFreeTime:(bool)arg1;
- (void)setStart:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)start;
- (id)title;

@end
