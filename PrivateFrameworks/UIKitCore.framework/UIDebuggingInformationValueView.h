/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationValueView : UIView {
    UIView * _contentView;
    UIDebuggingInformationValue * _value;
    <UIDebuggingInformationValueViewObserver> * _valueObserver;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIDebuggingInformationValue *value;
@property (nonatomic) <UIDebuggingInformationValueViewObserver> *valueObserver;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_viewClassForValueType:(long long)arg1;
+ (id)viewWithValue:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareConstraints;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)addViewsToContentView;
- (id)contentView;
- (id)initWithValue:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueObserver:(id)arg1;
- (id)value;
- (void)valueChangedToValue:(id)arg1;
- (id)valueObserver;

@end
