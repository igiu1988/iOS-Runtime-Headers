/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStateExtent : NSObject <TSCEFormulaOwning, TSTGroupByChangeProtocol> {
    NSMutableIndexSet * _anyBaseHiddenIndexes;
    NSMutableIndexSet * _anyHiddenIndexes;
    NSMutableIndexSet * _baseFilteredIndexes;
    NSMutableIndexSet * _baseUserHiddenIndexes;
    TSCECalculationEngine * _calcEngine;
    struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { 
        struct TSUCellRect {} *__begin_; 
        struct TSUCellRect {} *__end_; 
        struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { 
            struct TSUCellRect {} *__value_; 
        } __end_cap_; 
    }  _cellRangesToInvalidate;
    TSUMutableUUIDSet * _collapsedGroupUids;
    NSMutableIndexSet * _collapsedRowIndexes;
    TSTTableFilterSet * _filterSet;
    NSMutableIndexSet * _filteredIndexes;
    bool  _forRows;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned char, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned char> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, std::__1::hash<TSUUUID>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned char>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _hiddenByUid;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _hiddenStateExtentUid;
    TSTHiddenStatesOwner * _hiddenStatesOwner;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _hiddenStatesOwnerUid;
    bool  _invalidateCollapsedRows;
    bool  _invalidateViewGeometry;
    bool  _needsToUpdateFilterSetForImport;
    struct vector<std::__1::pair<unsigned int, bool>, std::__1::allocator<std::__1::pair<unsigned int, bool> > > { 
        struct pair<unsigned int, bool> {} *__begin_; 
        struct pair<unsigned int, bool> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned int, bool> *, std::__1::allocator<std::__1::pair<unsigned int, bool> > > { 
            struct pair<unsigned int, bool> {} *__value_; 
        } __end_cap_; 
    }  _pendingComputedShowRowResults;
    NSObject<OS_dispatch_queue> * _pendingComputedShowRowResultsQueue;
    TSTTableFilterSet * _rewrittenFilterSet;
    TSTInfo * _tableInfo;
    NSMutableArray * _thresholdCellValues;
    NSMutableIndexSet * _userHiddenIndexes;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _viewIndexesMutex;
}

@property (nonatomic, readonly) bool anyCollapsed;
@property (nonatomic, readonly) bool anyHidden;
@property (nonatomic, readonly) bool anyUserHidden;
@property (nonatomic, readonly) TSUUUIDSet *collapsedGroupUids;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSTTableFilterSet *filterSet;
@property (nonatomic, readonly) bool forRows;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } hiddenStateExtentUid;
@property (nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner;
@property (nonatomic) bool needsFilterFormulaRewriteForImport;
@property (nonatomic) bool needsToUpdateFilterSetForImport;
@property (nonatomic, readonly) unsigned int numberOfHidden;
@property (nonatomic, readonly) unsigned int numberOfUserHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSTInfo *tableInfo;
@property (nonatomic, readonly) NSArray *thresholdCellValues;

+ (id)mutableIndexSetByIntersecting:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)swapIndexesWithIndexSet:(id)arg1 index:(unsigned long long)arg2 withIndex:(unsigned long long)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addHiddenIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (bool)anyCollapsed;
- (bool)anyHidden;
- (bool)anyHiddenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)anyHiddenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forAction:(unsigned char)arg2;
- (id)anyHiddenIndexes;
- (bool)anyUserHidden;
- (id)applyCollapseExpandState:(id)arg1 outUndoState:(id*)arg2;
- (struct TSUModelColumnOrRowIndex { unsigned int x1; })baseIndexForViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x1; })arg1;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })cellReferenceForIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1;
- (void)clearInvalidIndexes;
- (id)collapseSummaryGroupUIDs:(id)arg1;
- (id)collapsedGroupUids;
- (id)collapsedRowIndexes;
- (id)copyCollapsedStateToUpdatedGroupUids:(id)arg1;
- (void)dealloc;
- (void)deleteBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withUids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2;
- (void)didAddRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 toGroup:(id)arg2;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(id)arg1;
- (void)didRemoveGroup:(id)arg1;
- (void)didRemoveRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 fromGroup:(id)arg2;
- (void)dirtyFilterState;
- (id)duplicateFilterSet;
- (id)duplicateFilterSetInUidFormWithTable:(id)arg1;
- (void)enableFilterSet:(bool)arg1;
- (void)encodeToArchive:(struct HiddenStateExtentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UUID {} *x5; struct RepeatedPtrField<TST::HiddenStateExtentArchive_RowOrColumnState> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct Reference {} *x7; int x8; bool x9; struct RepeatedPtrField<TSCE::CellValueArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::UUID> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; }*)arg1 archiver:(id)arg2;
- (void)endOfGroupingChangesBatch;
- (id)expandSummaryGroupUIDs:(id)arg1;
- (id)filterSet;
- (void)filterSetUpdated;
- (id)filteredIndexes;
- (bool)forRows;
- (bool)hasActiveFilters;
- (bool)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2;
- (bool)hasHiddenAtIndex:(unsigned int)arg1;
- (void)hiddenStateChangedForViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x1; })arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })hiddenStateExtentUid;
- (id)hiddenStatesOwner;
- (bool)hideAtBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (bool)hideAtUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 forAction:(unsigned char)arg2;
- (bool)hideAtUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 forIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg2 forAction:(unsigned char)arg3;
- (bool)hideAtViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1;
- (unsigned char)hidingActionForUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (unsigned char)hidingActionForViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x1; })arg1;
- (unsigned int)indexOfVisibleAfterAndIncludingIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleAfterIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleBeforeAndIncludingIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleBeforeIndex:(unsigned int)arg1;
- (id)indexesOfHiddenInBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)indexesOfHiddenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)indexesOfUserHiddenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)indexesOfUserVisibleInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)indexesOfVisibleInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)indexesOfVisibleIndexesInIndexes:(id)arg1;
- (id)initWithArchive:(const struct HiddenStateExtentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UUID {} *x5; struct RepeatedPtrField<TST::HiddenStateExtentArchive_RowOrColumnState> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct Reference {} *x7; int x8; bool x9; struct RepeatedPtrField<TSCE::CellValueArchive> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::UUID> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; }*)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3;
- (id)initWithHiddenStatesOwner:(id)arg1 forRows:(bool)arg2;
- (void)insertBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)invalidateForCalcEngine:(id)arg1;
- (bool)isCategoryGroupOrParentsCollapsed:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (bool)isCategoryGroupUIDCollapsed:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)linkedResolver;
- (void)loadIndexesFromTable:(id)arg1;
- (void)moveBaseRangeFrom:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg2;
- (void)moveViewRangeOnlyFrom:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(struct TSUViewColumnOrRowIndex { unsigned int x1; })arg2;
- (id)mutableAnyHiddenIndexes;
- (id)mutableFilteredIndexes;
- (id)mutableUserHiddenIndexes;
- (void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)needsFilterFormulaRewriteForImport;
- (bool)needsToUpdateFilterSetForImport;
- (unsigned int)numberOfHidden;
- (unsigned int)numberOfHiddenInBaseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)numberOfHiddenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)numberOfUserHidden;
- (unsigned int)numberOfUserHiddenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (int)ownerKind;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })ownerUID;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })p_calculateAverageThresholdWithCalcEngine:(id)arg1 formulaCoord:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg2;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })p_calculateTopOrBottomThresholdWithCalcEngine:(id)arg1 formulaCoord:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg2 isTop:(bool)arg3 keyScale:(int)arg4;
- (id)p_createThresholdCellValue:(struct TSCEValue { unsigned long long x1[18]; int x2; })arg1 locale:(id)arg2;
- (void)p_registerAllFormulaToCalculationEngine;
- (void)p_removeAllFormulaFromCalculationEngine;
- (id)precedentsForFilterSet:(id)arg1 calcEngine:(id)arg2 hostOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3 hostCellID:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg4;
- (struct { bool x1; bool x2; bool x3; })recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 recalcOptions:(struct { bool x1; bool x2; })arg3;
- (int)registerWithCalcEngine:(id)arg1;
- (void)remapTableUIDsInFormulasWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2;
- (void)removeHiddenIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (void)removeUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id*)arg3;
- (void)setCategoryGroupUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 asCollapsed:(bool)arg2;
- (void)setFilterSet:(id)arg1;
- (void)setFilterSetType:(int)arg1;
- (void)setHiddenStateExtentUid:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setHiddenStatesOwner:(id)arg1;
- (void)setNeedsFilterFormulaRewriteForImport:(bool)arg1;
- (void)setNeedsToUpdateFilterSetForImport:(bool)arg1;
- (void)setTableInfo:(id)arg1;
- (bool)showAtBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (bool)showAtUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 forAction:(unsigned char)arg2;
- (bool)showAtUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 forIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg2 forAction:(unsigned char)arg3;
- (bool)showAtViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x1; })arg1 forAction:(unsigned char)arg2;
- (void)startOfGroupingChangesBatch;
- (void)swapBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1 withIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg2;
- (void)syncUpHiddenStateFormulaOwnerUIDs;
- (id)tableInfo;
- (id)thresholdCellValues;
- (void)unregisterFromCalcEngine;
- (bool)useCollapsedRows;
- (id)userHiddenIndexes;
- (struct TSUViewColumnOrRowIndex { unsigned int x1; })viewIndexForBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x1; })arg1;
- (void)willChangeGroupByTo:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;

@end
