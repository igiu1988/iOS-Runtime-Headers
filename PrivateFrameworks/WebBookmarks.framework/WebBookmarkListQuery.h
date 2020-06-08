/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkListQuery : NSObject {
    bool  _countShouldUseNumChildrenIfPossible;
    bool  _customQuery;
    int  _folderID;
    <WebBookmarkInMemoryChangeFilter> * _inMemoryFilter;
    bool  _includeHidden;
    NSString * _orderBy;
    NSString * _query;
    NSString * _queryWithOrderBy;
    NSArray * _titleWordPrefixes;
    NSArray * _titleWordPrefixesForInMemoryFiltering;
    NSString * _urlFilter;
}

@property (getter=isCustomQuery, nonatomic, readonly) bool customQuery;
@property (nonatomic, readonly) int folderID;
@property (nonatomic, retain) <WebBookmarkInMemoryChangeFilter> *inMemoryFilter;

- (void).cxx_destruct;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(bool)arg2;
- (id)_filterBookmarks:(id)arg1;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(bool)arg3;
- (long long)_listQueryType;
- (id)_normalizeUserTypedString:(id)arg1;
- (void)_preparePrefixesFromNormalizedString:(id)arg1;
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg1 collection:(id)arg2;
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(bool)arg1 bookmarksInFolder:(int)arg2 collection:(id)arg3;
- (id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (int)countInCollection:(id)arg1;
- (id)debugDescription;
- (int)folderID;
- (id)inMemoryFilter;
- (id)init;
- (id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4;
- (id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3;
- (id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(bool)arg3 usingFilter:(id)arg4;
- (bool)isCustomQuery;
- (void)setInMemoryFilter:(id)arg1;

@end
