/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingInformationViewController, UIDebuggingZoomDelegate> {
    unsigned long long  _currentDirection;
    UISegmentedControl * _directionSegmentedControl;
    UILabel * _distanceLabel;
    NSObject<OS_dispatch_group> * _group;
    struct CGImage { } * _image;
    UILabel * _label;
    UIView * _lastViewSeen;
    UIDebuggingZoomLineView * _lineView;
    UIDebuggingZoomLoupeView * _loupe;
    UIPanGestureRecognizer * _pan;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _useViewForEdges;
}

@property (nonatomic) unsigned long long currentDirection;
@property (nonatomic, retain) UISegmentedControl *directionSegmentedControl;
@property (nonatomic, retain) UILabel *distanceLabel;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIView *lastViewSeen;
@property (nonatomic, retain) UIDebuggingZoomLineView *lineView;
@property (nonatomic, retain) UIDebuggingZoomLoupeView *loupe;
@property (nonatomic, retain) UIPanGestureRecognizer *pan;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool useViewForEdges;

- (void).cxx_destruct;
- (unsigned long long)currentDirection;
- (void)dealloc;
- (id)directionSegmentedControl;
- (id)distanceLabel;
- (id)drawLinesAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)drawViewLinesAtPoint:(struct CGPoint { double x1; double x2; })arg1 forView:(id)arg2;
- (id)group;
- (struct CGImage { }*)image;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)label;
- (id)lastViewSeen;
- (id)lineView;
- (id)loupe;
- (struct CGImage { }*)newCaptureSnapshotAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 window:(id)arg2;
- (id)pan;
- (id)queue;
- (void)setCurrentDirection:(unsigned long long)arg1;
- (void)setDirectionSegmentedControl:(id)arg1;
- (void)setDistanceLabel:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastViewSeen:(id)arg1;
- (void)setLineView:(id)arg1;
- (void)setLoupe:(id)arg1;
- (void)setPan:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUseViewForEdges:(bool)arg1;
- (void)toggleDirection:(id)arg1;
- (void)toggleMeasuring:(id)arg1;
- (void)toggleMode:(id)arg1;
- (void)updateGesture:(id)arg1;
- (bool)useViewForEdges;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
