/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USUsageReport : NSObject <NSSecureCoding> {
    NSArray * _categoryUsage;
    NSDate * _firstPickup;
    NSDateInterval * _interval;
    NSDate * _lastEventDate;
    NSDateInterval * _longestSession;
    NSDictionary * _pickupsByBundleIdentifier;
    unsigned long long  _pickupsWithoutApplicationUsage;
    double  _screenTime;
    NSTimeZone * _timeZone;
    NSDictionary * _userNotificationsByBundleIdentifier;
}

@property (readonly, copy) NSArray *categoryUsage;
@property (readonly) NSDate *firstPickup;
@property (readonly) NSDateInterval *interval;
@property (readonly) NSDate *lastEventDate;
@property (readonly) NSDateInterval *longestSession;
@property (readonly, copy) NSDictionary *pickupsByBundleIdentifier;
@property (readonly) unsigned long long pickupsWithoutApplicationUsage;
@property (readonly) double screenTime;
@property (readonly) NSTimeZone *timeZone;
@property (readonly, copy) NSDictionary *userNotificationsByBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10;
- (id)categoryUsage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstPickup;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10;
- (id)interval;
- (id)lastEventDate;
- (id)longestSession;
- (id)pickupsByBundleIdentifier;
- (unsigned long long)pickupsWithoutApplicationUsage;
- (double)screenTime;
- (id)timeZone;
- (id)userNotificationsByBundleIdentifier;

@end
