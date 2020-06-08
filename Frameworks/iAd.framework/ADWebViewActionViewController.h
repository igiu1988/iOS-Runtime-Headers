/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADWebViewActionViewController : SFSafariViewController {
    ADHomeButtonHandler * _homeButtonHandler;
}

@property (nonatomic) <ADWebViewActionViewControllerDelegate> *delegate;
@property (nonatomic, retain) ADHomeButtonHandler *homeButtonHandler;

- (void)dealloc;
- (void)dismissView;
- (id)homeButtonHandler;
- (void)setHomeButtonHandler:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
