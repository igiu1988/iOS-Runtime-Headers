/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLocalAccumulator : NSObject {
    unsigned long long  _count;
    struct TSUCellCoord { 
        unsigned int row; 
        unsigned short column; 
        bool _preserveRow; 
        bool _preserveColumn; 
    }  _idOfFirstOccurence;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; } idOfFirstOccurence;

- (unsigned long long)count;
- (id)description;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })idOfFirstOccurence;
- (void)setCount:(unsigned long long)arg1;
- (void)setIdOfFirstOccurence:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;

@end
