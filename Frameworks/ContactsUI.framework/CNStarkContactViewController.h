/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate> {
    NSArray * _activatedConstraints;
    CNPropertyBestIDSValueQuery * _bestiMessageQuery;
    CNStarkContactNameView * _contactNameView;
    CNCardiMessageEmailGroup * _iMessageEmailGroup;
}

@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic, retain) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (nonatomic, retain) CNStarkContactNameView *contactNameView;
@property (nonatomic, retain) CNCardiMessageEmailGroup *iMessageEmailGroup;

+ (bool)enablesTransportButtons;

- (void).cxx_destruct;
- (void)_initiateBestiMessagePropertyQuery;
- (id)activatedConstraints;
- (id)bestiMessageQuery;
- (id)contactNameView;
- (void)dealloc;
- (bool)hasTableViewHeaderFirstSection;
- (id)iMessageEmailGroup;
- (id)initWithContact:(id)arg1;
- (void)initializeTableViewsForHeaderHeight;
- (bool)isGeminiAvailable;
- (void)loadContactViewControllerViews;
- (void)queryComplete;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActivatedConstraints:(id)arg1;
- (void)setBestiMessageQuery:(id)arg1;
- (void)setContactNameView:(id)arg1;
- (void)setIMessageEmailGroup:(id)arg1;
- (void)setupConstraints;
- (void)setupTableHeaderView;
- (bool)shouldDisplayAvatarHeaderView;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)title;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
