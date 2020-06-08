/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avoidanceFrame;
    bool  _hidden;
    UIStatusBarStyleRequest * _leadingStyleRequest;
    UIStatusBarStyleRequest * _trailingStyleRequest;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avoidanceFrame;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *leadingStyleRequest;
@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *trailingStyleRequest;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avoidanceFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithHidden:(bool)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 avoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)isHidden;
- (id)leadingStyleRequest;
- (id)trailingStyleRequest;

@end
