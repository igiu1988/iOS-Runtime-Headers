/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {
    NSDateFormatter * _displayDateFormatter;
    bool  _showsDay;
    bool  _showsMonth;
    bool  _showsYear;
    NSString * _submissionFormat;
}

@property (nonatomic, copy) NSDate *currentValue;
@property (nonatomic, readonly, copy) NSDate *defaultDate;
@property (nonatomic) bool showsDay;
@property (nonatomic) bool showsMonth;
@property (nonatomic) bool showsYear;
@property (nonatomic, copy) NSString *submissionFormat;

- (void).cxx_destruct;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)_locale;
- (id)currentValue;
- (id)defaultDate;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)setCurrentValue:(id)arg1;
- (void)setShowsDay:(bool)arg1;
- (void)setShowsMonth:(bool)arg1;
- (void)setShowsYear:(bool)arg1;
- (void)setSubmissionFormat:(id)arg1;
- (bool)showsDay;
- (bool)showsMonth;
- (bool)showsYear;
- (id)submissionFormat;
- (id)submissionString;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)arg1;

@end
