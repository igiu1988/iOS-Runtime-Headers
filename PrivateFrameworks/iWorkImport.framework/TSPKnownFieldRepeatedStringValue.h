/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPKnownFieldRepeatedStringValue : TSPKnownField {
    struct RepeatedField<std::__1::basic_string<char> > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *elements_; 
        int current_size_; 
        int total_size_; 
    }  _values;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct FileDescriptor {} *x5; int x6; int x7; int x8; bool x9; int x10; struct Descriptor {} *x11; struct OneofDescriptor {} *x12; struct Descriptor {} *x13; struct Descriptor {} *x14; struct EnumDescriptor {} *x15; struct FieldDescriptor {} *x16; struct FieldOptions {} *x17; bool x18; union { int x_19_1_1; long long x_19_1_2; unsigned int x_19_1_3; unsigned long long x_19_1_4; float x_19_1_5; double x_19_1_6; bool x_19_1_7; struct EnumValueDescriptor {} *x_19_1_8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_19_1_9; } x19; }*)arg1 fieldInfo:(const struct FieldInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FieldPath {} *x5; int x6; int x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { unsigned int *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x14; int x15; }*)arg2 message:(const struct Message { int (**x1)(); }*)arg3 reflection:(const struct Reflection { int (**x1)(); }*)arg4;
- (void)mergeToMessage:(struct Message { int (**x1)(); }*)arg1 reflection:(const struct Reflection { int (**x1)(); }*)arg2;

@end
