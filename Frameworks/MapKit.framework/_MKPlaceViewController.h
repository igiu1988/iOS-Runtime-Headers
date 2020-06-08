/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceViewController : MKLayoutCardViewController <CNContactPickerDelegate, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, GEOLogContextDelegate, MKActivityViewControllerDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKOfficialAppViewControllerDelegate, MKPlaceCardActionControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MKPlaceParentInfoViewControllerDelegate, MKPlaceVenueBrowseViewControllerDelegate, MKStackingViewControllerDelegate, MKTransitAttributionViewControllerDelegate, MKTransitDepaturesViewControllerDelegate, RadiosPreferencesDelegate, _MKInfoCardAnalyticsDelegate, _MKInfoCardController> {
    MKPlaceActionManager * _actionManager;
    NSMapTable * _additionalViewControllers;
    bool  _attemptedToCreateAddressBook;
    GEOAutomobileOptions * _automobileOptions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    MKPlaceHeaderButtonsViewController * _buttonsHeaderController;
    CNContact * _contact;
    CNContactStore * _contactStore;
    CNContactNavigationController<CNContactViewControllerPrivateDelegate> * _contactsNavigationController;
    CNContactViewController * _creatingContactController;
    _MKDistanceDetailProvider * _distanceMonitor;
    NSUserActivity * _donationUserActivity;
    CNContactViewController * _editingContactController;
    MKETAProvider * _etaProvider;
    bool  _hasCheckedDistanceAvailability;
    bool  _hasContactOnlyMapItem;
    _MKPlaceActionButtonController * _headerSecondaryButtonController;
    _MKPlaceActionButtonController * _headerTertiaryButtonController;
    NSString * _headerTitle;
    MKPlaceCardHeaderViewController * _headerViewController;
    bool  _inAirplaneModeAndNetworkUnreachable;
    MKPlaceInfoViewController * _infoViewController;
    MKPlaceInlineMapViewController * _inlineMapViewController;
    bool  _isUpdatingViewControllers;
    MKInfoCardLoadingView * _loadingView;
    CLLocation * _location;
    MKOfficialAppViewController * _officialAppViewController;
    unsigned long long  _options;
    CNContact * _originalContact;
    CNContact * _originalContactCopy;
    bool  _overrideDefaultShowRAP;
    MKPlaceCardActionsRowViewController * _placeActionRowViewController;
    MKPlaceCardFooterActionsViewController * _placeActionViewController;
    bool  _placeInBookmarks;
    <_MKPlaceItem> * _placeItem;
    <_MKPlaceViewControllerDelegate> * _placeViewControllerDelegate;
    id /* block */  _placeViewFeedbackAppLaunchHandler;
    <_MKPlaceViewControllerFeedbackDelegate> * _placeViewFeedbackDelegate;
    MKPlacePoisInlineMapViewController * _poisInlineMapViewController;
    RadiosPreferences * _radioPreferences;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    bool  _showContactActions;
    GEOTransitOptions * _transitOptions;
    CNContactViewController * _updatingContactController;
    NSMutableArray * _viewDidAppearBlocks;
    double  headerHeight;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController;
@property (nonatomic) double contentAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableReportAProblem;
@property (nonatomic, retain) _MKDistanceDetailProvider *distanceMonitor;
@property (nonatomic) bool hasCheckedDistanceAvailability;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerHeight;
@property (nonatomic, retain) _MKPlaceActionButtonController *headerSecondaryButtonController;
@property (nonatomic, retain) _MKPlaceActionButtonController *headerTertiaryButtonController;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic) bool hideDirectionsButtons;
@property (nonatomic) bool hideInlineMap;
@property (nonatomic) bool inAirplaneModeAndNetworkUnreachable;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) CNContact *originalContact;
@property (nonatomic) bool placeInBookmarks;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic) <_MKPlaceViewControllerDelegate> *placeViewControllerDelegate;
@property (nonatomic, copy) id /* block */ placeViewFeedbackAppLaunchHandler;
@property (nonatomic) <_MKPlaceViewControllerFeedbackDelegate> *placeViewFeedbackDelegate;
@property (nonatomic, retain) RadiosPreferences *radioPreferences;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (nonatomic) bool showContactActions;
@property (nonatomic) bool showEditButton;
@property (nonatomic) bool showInlineMapInHeader;
@property (nonatomic) bool showNearbyApps;
@property (nonatomic) bool showOpenInPinpoint;
@property (nonatomic) bool showOpenInSkyline;
@property (nonatomic) bool showReportAProblem;
@property (nonatomic) bool showShareActionsButton;
@property (nonatomic) bool showSimulateLocation;
@property (nonatomic) bool showTitleBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, retain) NSMutableArray *viewDidAppearBlocks;

+ (double)headerHeightInMinimalMode;

- (void).cxx_destruct;
- (void)ETAProviderLocationUpdated:(id)arg1;
- (bool)_canShowExtensionReservationButton;
- (void)_checkDeviceLockStatusWithCompletion:(id /* block */)arg1;
- (void)_commonInit;
- (id)_contactForEditOperations;
- (id)_contactStore;
- (bool)_contactStoredMatchingMapItem:(id)arg1;
- (id)_createTableBookingButtonController;
- (struct UIViewController { Class x1; }*)_createViewControllerForModule:(id)arg1;
- (void)_createViewControllers:(id)arg1;
- (void)_createViewControllersForBrand:(id)arg1;
- (void)_createViewControllersForShortPlacecard:(id)arg1;
- (void)_didResolveAttribution:(id)arg1;
- (void)_dismissModalViewController;
- (bool)_hasContactAccess;
- (void)_launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 mapItem:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (void)_performWhenViewHasAppeared:(id /* block */)arg1;
- (id)_refetchedContactForCCTV:(id)arg1 error:(id*)arg2;
- (id)_removeMapsDataFromContact:(id)arg1;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (void)_setDefaultViewControllers:(id)arg1;
- (bool)_shouldShowContactActions;
- (bool)_shouldShowSiriReservationController;
- (void)_showEditSheet:(id)arg1;
- (bool)_showReportAProblem;
- (void)_showShareSheet:(id)arg1;
- (void)_showShareSheetNoDeviceLockCheck:(id)arg1;
- (id)_traits;
- (void)_updateViewControllerStatesForOffline;
- (void)_updateViewControllers;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (void)airplaneModeChanged;
- (bool)allowTransitLineSelection;
- (unsigned long long)annotatedItemListDisplayStyle;
- (id)annotatedItemListViewControllerWithDisplayStyle:(unsigned long long)arg1;
- (id)attributionsVC;
- (id)automobileOptions;
- (id)businessInfosVC;
- (id)contact;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)contactsNavigationController;
- (double)contentAlpha;
- (id)createFooterActions;
- (id)createMessageViewController;
- (id)createRowActions;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)dealloc;
- (bool)disableReportAProblem;
- (id)distanceMonitor;
- (id)draggableContent;
- (id)draggableHeaderView;
- (id)encyclopedicVC;
- (id)generateAvailableActionForAnalytics;
- (id)generateUnactionableUIElementsForAnalytics;
- (unsigned long long)getPlaceCardAGGDType;
- (int)getPlaceCardTypeForAnalytics;
- (bool)hasCheckedDistanceAvailability;
- (double)headerHeight;
- (id)headerSecondaryButtonController;
- (id)headerTertiaryButtonController;
- (id)headerTitle;
- (bool)hideDirectionsButtons;
- (bool)hideInlineMap;
- (void)hideTitle:(bool)arg1;
- (id)hoursVC;
- (bool)inAirplaneModeAndNetworkUnreachable;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)infosVC;
- (id)init;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2;
- (id)inlineMapVC;
- (id)location;
- (id)logContextForLogMsgEvent:(id)arg1;
- (id)mapItem;
- (int)mapTypeForETAProvider:(id)arg1;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (id)messagesHoursVC;
- (void)networkReachableChanged:(id)arg1;
- (void)officialAppViewControllerDidFinishLoading:(id)arg1 error:(id)arg2;
- (id)officialAppsVC;
- (unsigned long long)options;
- (id)originalContact;
- (id)parentVC;
- (id)parentVenueVC;
- (id)photoVC;
- (void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
- (void)placeCardActionControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(id)arg1 fromView:(id)arg2;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1 fromView:(id)arg2;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveMarker:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1;
- (void)placeCardEncyclopedicControllerDidExpandTextBlock:(id)arg1;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReview:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardWillCloseFromClientType:(unsigned long long)arg1;
- (void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3;
- (bool)placeInBookmarks;
- (id)placeItem;
- (void)placeParentInfoViewController:(id)arg1 didSelectParent:(id)arg2;
- (void)placeVenueBrowseViewController:(id)arg1 didTapOnSearchCategory:(id)arg2;
- (id)placeViewControllerDelegate;
- (id /* block */)placeViewFeedbackAppLaunchHandler;
- (id)placeViewFeedbackDelegate;
- (id)poisInlineMapVC;
- (long long)preferredStatusBarStyle;
- (id)radioPreferences;
- (void)removeAdditionalViewController:(id)arg1;
- (id)reservationVC;
- (id)reviewsVC;
- (id)scrollViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAllowTransitLineSelection:(bool)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setContactsNavigationController:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setDisableReportAProblem:(bool)arg1;
- (void)setDistanceMonitor:(id)arg1;
- (void)setHasCheckedDistanceAvailability:(bool)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderSecondaryButtonController:(id)arg1;
- (void)setHeaderTertiaryButtonController:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHideDirectionsButtons:(bool)arg1;
- (void)setHideInlineMap:(bool)arg1;
- (void)setInAirplaneModeAndNetworkUnreachable:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(bool)arg3;
- (void)setOptions:(unsigned long long)arg1;
- (void)setOriginalContact:(id)arg1;
- (void)setPlaceInBookmarks:(bool)arg1;
- (void)setPlaceItem:(id)arg1;
- (void)setPlaceItem:(id)arg1 updateOriginalContact:(bool)arg2;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setPlaceViewFeedbackAppLaunchHandler:(id /* block */)arg1;
- (void)setPlaceViewFeedbackDelegate:(id)arg1;
- (void)setRadioPreferences:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setShowContactActions:(bool)arg1;
- (void)setShowEditButton:(bool)arg1;
- (void)setShowFavoriteButtons:(bool)arg1;
- (void)setShowInlineMapInHeader:(bool)arg1;
- (void)setShowNearbyApps:(bool)arg1;
- (void)setShowOpenInPinpoint:(bool)arg1;
- (void)setShowOpenInSkyline:(bool)arg1;
- (void)setShowReportAProblem:(bool)arg1;
- (void)setShowShareActionsButton:(bool)arg1;
- (void)setShowSimulateLocation:(bool)arg1;
- (void)setShowTitleBar:(bool)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setUseCompactPhotosView:(bool)arg1;
- (void)setViewDidAppearBlocks:(id)arg1;
- (bool)shouldDisplayVenueBrowseVC;
- (bool)showContactActions;
- (bool)showEditButton;
- (bool)showFavoriteButtons;
- (bool)showInlineMapInHeader;
- (bool)showNearbyApps;
- (bool)showOpenInPinpoint;
- (bool)showOpenInSkyline;
- (bool)showReportAProblem;
- (bool)showShareActionsButton;
- (bool)showSimulateLocation;
- (bool)showTitleBar;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (bool)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewControllerDidLayoutViewControllers:(id)arg1;
- (id)transitAttributionVC;
- (void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2;
- (void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
- (void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2;
- (id)transitDeparturesViewControllerTraits:(id)arg1;
- (id)transitOptions;
- (id)transitVC;
- (void)updateAirplaneModeNetworkUnreachable;
- (void)updateHeaderTitle;
- (bool)useCompactPhotosView;
- (id)venueBrowseVC;
- (id)venueInfoContentsVC;
- (void)viewDidAppear:(bool)arg1;
- (id)viewDidAppearBlocks;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
