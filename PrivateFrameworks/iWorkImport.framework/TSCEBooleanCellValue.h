/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEBooleanCellValue : TSCECellValue {
    /* Warning: unhandled struct encoding: '{TSCEBooleanValue=^^?B{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}}' */ struct TSCEBooleanValue { int (**x1)(); bool x2; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_3_1_1; } x3; } * _booleanValue;
}

- (/* Warning: unhandled struct encoding: '{TSCEBooleanValue=^^?B{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}}' */ struct TSCEBooleanValue { int (**x1)(); bool x2; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_3_1_1; } x3; }*)booleanValue;
- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct BooleanCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormatStructArchive {} *x5; bool x6; bool x7; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct BooleanCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormatStructArchive {} *x5; bool x6; bool x7; }*)arg1 locale:(id)arg2;
- (id)initWithBoolean:(bool)arg1 locale:(id)arg2;
- (id)initWithBooleanValue:(/* Warning: unhandled struct encoding: '{TSCEBooleanValue=^^?B{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}}' */ struct TSCEBooleanValue { int (**x1)(); bool x2; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_3_1_1; } x3; }*)arg1 locale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })tsceValue;

@end
