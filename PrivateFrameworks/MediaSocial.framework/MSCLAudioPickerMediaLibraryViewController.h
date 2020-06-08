/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPickerMediaLibraryViewController : SKUIViewController <MSCLAudioPickerSourceViewController, MSCLAudioPlayerManagerDataSource, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    MSCLAudioPlayerManager * _audioPlayerManager;
    UIImage * _placeholderImage;
    MPMediaQuery * _query;
    UISearchController * _searchController;
    MPMediaPredicate * _searchPredicate;
    id /* block */  _selectionBlock;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ selectionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_computedItemIndexForIndexPath:(id)arg1;
- (id)_placeholderImage;
- (void)_playButtonAction:(id)arg1;
- (void)_reloadWithSearchText:(id)arg1;
- (void)_stopAudioPlayer;
- (id)audioPlayerManager:(id)arg1 playButtonForRepresentedObject:(id)arg2;
- (void)dealloc;
- (id)initWithQuery:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id /* block */)selectionBlock;
- (void)setSelectionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
