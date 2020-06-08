/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIBarButtonItemGroup : NSObject <NSCoding> {
    NSMutableArray * _barButtonItems;
    bool  _hidden;
    bool  _locked;
    double  _minimumLeadingSpace;
    double  _minimumTrailingSpace;
    <_UIBarButtonItemGroupOwner> * _owner;
    float  _priority;
    UIBarButtonItem * _representativeItem;
    _UIButtonGroupViewController * _representativeUI;
    bool  _sendActionsBeforeDismiss;
}

@property (nonatomic, copy) NSArray *barButtonItems;
@property (getter=isDisplayingRepresentativeItem, nonatomic, readonly) bool displayingRepresentativeItem;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) bool hidden;
@property (getter=_items, nonatomic, readonly) NSArray *items;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) bool locked;
@property (getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:, nonatomic) double minimumLeadingSpace;
@property (getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:, nonatomic) double minimumTrailingSpace;
@property (getter=_owner, setter=_setOwner:, nonatomic) <_UIBarButtonItemGroupOwner> *owner;
@property (getter=_priority, setter=_setPriority:, nonatomic) float priority;
@property (nonatomic, retain) UIBarButtonItem *representativeItem;
@property (getter=_representativeUI, setter=_setRepresentativeUI:, nonatomic, retain) _UIButtonGroupViewController *representativeUI;
@property (getter=_sendActionsBeforeDismiss, setter=_setSendActionsBeforeDismiss:, nonatomic) bool sendActionsBeforeDismiss;

- (void).cxx_destruct;
- (bool)_isHidden;
- (bool)_isLocked;
- (id)_items;
- (double)_minimumLeadingSpace;
- (double)_minimumTrailingSpace;
- (id)_owner;
- (float)_priority;
- (void)_removeBarButtonItem:(id)arg1;
- (void)_removeRepresentative:(id)arg1;
- (id)_representativeUI;
- (bool)_sendActionsBeforeDismiss;
- (void)_setHidden:(bool)arg1;
- (void)_setLocked:(bool)arg1;
- (void)_setMinimumLeadingSpace:(double)arg1;
- (void)_setMinimumTrailingSpace:(double)arg1;
- (void)_setOwner:(id)arg1;
- (void)_setPriority:(float)arg1;
- (void)_setRepresentativeUI:(id)arg1;
- (void)_setSendActionsBeforeDismiss:(bool)arg1;
- (void)_validateAllItems;
- (id)barButtonItems;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isDisplayingRepresentativeItem;
- (id)representativeItem;
- (void)setBarButtonItems:(id)arg1;
- (void)setRepresentativeItem:(id)arg1;

@end
