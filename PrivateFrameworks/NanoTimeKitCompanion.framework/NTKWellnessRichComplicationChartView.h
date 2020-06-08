/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessRichComplicationChartView : UIView {
    UIColor * _chartLineColor;
    NSArray * _chartLineXPositions;
    CLKDevice * _device;
    UIColor * _exerciseBarFadedColor;
    struct CGGradient { } * _exerciseBarGradient;
    double  _exerciseChartBottomLineY;
    NSArray * _exerciseChartPoints;
    NSArray * _exerciseGraphData;
    NSDateFormatter * _hourFormatter;
    NSNumber * _maxExerciseValue;
    NSNumber * _maxMoveValue;
    UILabel * _midnightHourLabel;
    NSNumber * _minExerciseValue;
    NSNumber * _minMoveValue;
    UIColor * _moveBarFadedColor;
    struct CGGradient { } * _moveBarGradient;
    double  _moveChartBottomLineY;
    NSArray * _moveChartPoints;
    NSArray * _moveGraphData;
    UILabel * _noonHourLabel;
    unsigned long long  _quantityBucketCount;
    NSArray * _quantityBucketDates;
    UILabel * _sixAMHourLabel;
    UILabel * _sixPMHourLabel;
    struct CGGradient { } * _standBarGradient;
    unsigned long long  _standBucketCount;
    double  _standChartBottomLineY;
    NSArray * _standChartPoints;
    NSArray * _standGraphData;
}

@property (nonatomic, retain) NSArray *exerciseGraphData;
@property (nonatomic, retain) NSArray *moveGraphData;
@property (nonatomic, retain) NSArray *standGraphData;

- (void).cxx_destruct;
- (void)_createHourFormatter;
- (void)_createQuantityDateBuckets;
- (void)_currentLocaleChangeOccurred;
- (bool)_date:(id)arg1 fallsBetweenDate:(id)arg2 andDate:(id)arg3;
- (void)_drawChartsBarsInContext:(struct CGContext { }*)arg1 lineNumber:(unsigned long long)arg2 xPosition:(double)arg3;
- (double)_exercisePointRelativeHeightForValue:(double)arg1;
- (id)_generateChartPointsForQuantityStatisticsInfo:(id)arg1 withUnit:(id)arg2 accumulateFractionalValues:(bool)arg3;
- (void)_generateExerciseChartPoints;
- (void)_generateMoveChartPoints;
- (void)_generateStandChartPointsForStandHourInfo:(id)arg1;
- (double)_movePointRelativeHeightForValue:(double)arg1;
- (long long)_qauntityBucketIndexForDate:(id)arg1;
- (id)_quantityBucketDateForIndex:(unsigned long long)arg1;
- (void)_registerForNotifications;
- (void)_updateHourLabelsText;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)exerciseGraphData;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (id)moveGraphData;
- (void)setExerciseGraphData:(id)arg1;
- (void)setMoveGraphData:(id)arg1;
- (void)setStandGraphData:(id)arg1;
- (id)standGraphData;

@end
