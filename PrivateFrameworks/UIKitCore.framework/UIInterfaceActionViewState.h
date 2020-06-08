/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {
    UIInterfaceAction * _action;
    id  _actionViewStateContext;
    bool  _isFocused;
    bool  _isHighlighted;
    bool  _isPreferred;
    bool  _isPressed;
    UIColor * _legacyPresentationTintColor;
    unsigned long long  _visualCornerPosition;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (nonatomic, readonly) id actionViewStateContext;
@property (nonatomic, readonly) bool isFocused;
@property (nonatomic, readonly) bool isHighlighted;
@property (nonatomic, readonly) bool isPreferred;
@property (nonatomic, readonly) bool isPressed;
@property (nonatomic, readonly) UIColor *legacyPresentationTintColor;
@property (nonatomic, readonly) unsigned long long visualCornerPosition;

+ (id)_nullViewStateForActionType:(long long)arg1;
+ (id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2;
+ (id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2;
+ (id)viewStateForAlertControllerActionView:(id)arg1;
+ (id)viewStateRepresentingDefaultAction;
+ (id)viewStateRepresentingPreferredAction;

- (void).cxx_destruct;
- (void)_collectStateForDefaultState;
- (void)_collectStateFromAction:(id)arg1;
- (void)_collectStateFromActionRepresentationView:(id)arg1;
- (void)_collectStateFromActionViewState:(id)arg1;
- (id)_legacyPresentationTintColorForActionRepresentationDescendantView:(id)arg1;
- (bool)_stateEqualToActionViewState:(id)arg1;
- (id)action;
- (id)actionViewStateContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFocused;
- (bool)isHighlighted;
- (bool)isPreferred;
- (bool)isPressed;
- (id)legacyPresentationTintColor;
- (unsigned long long)visualCornerPosition;

@end
