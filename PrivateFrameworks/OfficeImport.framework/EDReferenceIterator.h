/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReferenceIterator : NSObject {
    unsigned int  mCellIndex;
    int  mCurrentCellIndex;
    EDWorksheet * mCurrentSheet;
    unsigned int  mNextArrayIndex;
    unsigned int  mPreviousColumnNumber;
    EDReference * mReference;
    EDCollection * mReferences;
    EDRowBlock * mRowBlock;
    unsigned long long  mRowBlockIndex;
    EDRowBlocks * mRowBlocks;
    struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; } * mRowInfo;
    unsigned int  mRowInfoIndex;
    EDWorkbook * mWorkbook;
}

+ (id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2;
+ (id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2;

- (unsigned int)currentCellIndex;
- (void)dealloc;
- (id)initWithReference:(id)arg1 workbook:(id)arg2;
- (id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3;
- (id)initWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)nextCell;
- (bool)nextReference;
- (bool)nextRow;
- (void)setCurrentSheet:(id)arg1;
- (void)setReference:(id)arg1;

@end
