/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellChooserControlSpec : TSTCellSpec {
    NSArray * _displayChoices;
    TSTPopUpMenuModel * _popupModel;
    bool  _startWithFirstItem;
}

@property (nonatomic, readonly) NSArray *displayChoicesForInspector;
@property (nonatomic, retain) TSTPopUpMenuModel *popupModel;
@property (nonatomic, readonly) bool startWithFirstItem;

+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)instanceWithArchive:(const struct CellSpecArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaArchive {} *x5; double x6; double x7; double x8; unsigned int x9; bool x10; bool x11; struct Reference {} *x12; }*)arg1 unarchiver:(id)arg2;
+ (id)popupCellSpec:(id)arg1 startWithFirstItem:(bool)arg2;

- (void).cxx_destruct;
- (id)asChooserControlSpec;
- (id)displayChoicesForInspector;
- (id)displayStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForValue:(id)arg1;
- (id)initWithArchive:(const struct CellSpecArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaArchive {} *x5; double x6; double x7; double x8; unsigned int x9; bool x10; bool x11; struct Reference {} *x12; }*)arg1 unarchiver:(id)arg2;
- (id)initWithPopupModel:(id)arg1 startWithFirstItem:(bool)arg2;
- (int)interactionType;
- (bool)isEqual:(id)arg1;
- (id)popupModel;
- (void)saveToArchive:(struct CellSpecArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaArchive {} *x5; double x6; double x7; double x8; unsigned int x9; bool x10; bool x11; struct Reference {} *x12; }*)arg1 archiver:(id)arg2;
- (void)setPopupModel:(id)arg1;
- (bool)startWithFirstItem;
- (id)tskMultipleChoiceListFormat;
- (bool)validateFormatAndValue:(id)arg1;
- (id)valueForIndex:(unsigned long long)arg1;

@end
