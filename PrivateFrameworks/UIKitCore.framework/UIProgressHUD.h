/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIProgressHUD : UIView {
    UIImageView * _doneView;
    UIWindow * _parentWindow;
    struct { 
        unsigned int isShowing : 1; 
        unsigned int isShowingText : 1; 
        unsigned int fixedFrame : 1; 
        unsigned int reserved : 30; 
    }  _progressHUDFlags;
    UIProgressIndicator * _progressIndicator;
    UILabel * _progressMessage;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_progressIndicator;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)done;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWindow:(id)arg1;
- (void)layoutSubviews;
- (void)setFontSize:(int)arg1;
- (void)setShowsText:(bool)arg1;
- (void)setText:(id)arg1;
- (void)show:(bool)arg1;
- (void)showInView:(id)arg1;

@end
