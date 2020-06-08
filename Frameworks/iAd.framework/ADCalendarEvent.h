/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCalendarEvent : NSObject {
    bool  _allDay;
    NSObject<OS_dispatch_queue> * _calendarEventQueue;
    NSDate * _end;
    NSString * _eventDescription;
    NSString * _location;
    EKRecurrenceRule * _recurrence;
    NSDate * _start;
    NSString * _summary;
    NSString * _url;
}

@property (nonatomic) bool allDay;
@property (nonatomic) NSObject<OS_dispatch_queue> *calendarEventQueue;
@property (nonatomic, retain) NSDate *end;
@property (nonatomic, copy) NSString *eventDescription;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, retain) EKRecurrenceRule *recurrence;
@property (nonatomic, retain) NSDate *start;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *url;

- (id)EKEventInEventStore:(id)arg1;
- (bool)_eventIsEqualToCalendarEvent:(id)arg1;
- (id)_recurrenceRuleFromDictionary:(id)arg1;
- (bool)allDay;
- (id)calendarEventQueue;
- (void)dealloc;
- (id)end;
- (id)eventDescription;
- (id)initWithDictionary:(id)arg1;
- (id)location;
- (id)recurrence;
- (void)retrieveEventInEventStore:(id)arg1 byIdentifier:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setAllDay:(bool)arg1;
- (void)setCalendarEventQueue:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setEventDescription:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)start;
- (id)summary;
- (id)url;

@end
