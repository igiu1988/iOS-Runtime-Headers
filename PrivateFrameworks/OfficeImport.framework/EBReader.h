/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface EBReader : OCBReader  {
    struct XlObjectFactory { int (**x1)(); struct XlEshObjectFactory {} *x2; } *mXlObjectFactory;
}

+ (BOOL)isCSV;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 temporaryDirectory:(id)arg4 asThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (id)readerWithXlReader:(struct XlChartBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct EshObjectFactory {} *x4; boolx5; struct SsrwOORootStorage {} *x6; struct SsrwOOStorage {} *x7; struct XlEshBinaryReader { int (**x_8_1_1)(); struct SsrwOOStream {} *x_8_1_2; struct EshParserVisitor {} *x_8_1_3; struct EshObjectFactory {} *x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_8_1_7; unsigned int x_8_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_8_1_9; boolx_8_1_10; boolx_8_1_11; unsigned int x_8_1_12; struct XlReadStgStream {} *x_8_1_13; } x8; struct XlStringExtractor {} *x9; struct XlSheetInfoTable {} *x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; boolx41; boolx42; boolx43; struct ChVector<long int> { long *x_44_1_1; long *x_44_1_2; unsigned int x_44_1_3; unsigned int x_44_1_4; unsigned int x_44_1_5; } x44; struct ChVector<long int> { long *x_45_1_1; long *x_45_1_2; unsigned int x_45_1_3; unsigned int x_45_1_4; unsigned int x_45_1_5; } x45; struct ChVector<long int> { long *x_46_1_1; long *x_46_1_2; unsigned int x_46_1_3; unsigned int x_46_1_4; unsigned int x_46_1_5; } x46; struct XlIndex {} *x47; struct XlRow {} *x48; struct XlRecord {} *x49; int x50; int x51; short x52; int x53; int x54; struct ChVector<XlCell*> { struct XlCell {} **x_55_1_1; struct XlCell {} **x_55_1_2; unsigned int x_55_1_3; unsigned int x_55_1_4; unsigned int x_55_1_5; } x55; int x56; unsigned char x57; int x58; struct XlWorksheetProperties { int (**x_59_1_1)(); unsigned short x_59_1_2; int x_59_1_3; unsigned short x_59_1_4; boolx_59_1_5; unsigned short x_59_1_6; unsigned short x_59_1_7; unsigned short x_59_1_8; unsigned short x_59_1_9; boolx_59_1_10; boolx_59_1_11; boolx_59_1_12; boolx_59_1_13; boolx_59_1_14; boolx_59_1_15; boolx_59_1_16; boolx_59_1_17; boolx_59_1_18; boolx_59_1_19; boolx_59_1_20; boolx_59_1_21; boolx_59_1_22; boolx_59_1_23; boolx_59_1_24; boolx_59_1_25; short x_59_1_26; struct ChVector<XlBrk*> { struct XlBrk {} **x_27_2_1; struct XlBrk {} **x_27_2_2; unsigned int x_27_2_3; unsigned int x_27_2_4; unsigned int x_27_2_5; } x_59_1_27; struct ChVector<XlBrk*> { struct XlBrk {} **x_28_2_1; struct XlBrk {} **x_28_2_2; unsigned int x_28_2_3; unsigned int x_28_2_4; unsigned int x_28_2_5; } x_59_1_28; struct OcText { int (**x_29_2_1)(); int x_29_2_2; unsigned int x_29_2_3; unsigned int x_29_2_4; unsigned int x_29_2_5; char *x_29_2_6; char *x_29_2_7; boolx_29_2_8; } x_59_1_29; } x59; struct XlWorksheetProtection { int (**x_60_1_1)(); boolx_60_1_2; boolx_60_1_3; boolx_60_1_4; boolx_60_1_5; boolx_60_1_6; boolx_60_1_7; boolx_60_1_8; boolx_60_1_9; boolx_60_1_10; boolx_60_1_11; boolx_60_1_12; boolx_60_1_13; boolx_60_1_14; boolx_60_1_15; boolx_60_1_16; boolx_60_1_17; boolx_60_1_18; boolx_60_1_19; short x_60_1_20; } x60; struct XlCalculationProperties { int (**x_61_1_1)(); double x_61_1_2; int x_61_1_3; short x_61_1_4; boolx_61_1_5; int x_61_1_6; boolx_61_1_7; } x61; struct XlSortInfo { int (**x_62_1_1)(); boolx_62_1_2; boolx_62_1_3; boolx_62_1_4; boolx_62_1_5; boolx_62_1_6; boolx_62_1_7; unsigned char x_62_1_8; struct OcText { int (**x_9_2_1)(); int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; unsigned int x_9_2_5; char *x_9_2_6; char *x_9_2_7; boolx_9_2_8; } x_62_1_9; struct OcText { int (**x_10_2_1)(); int x_10_2_2; unsigned int x_10_2_3; unsigned int x_10_2_4; unsigned int x_10_2_5; char *x_10_2_6; char *x_10_2_7; boolx_10_2_8; } x_62_1_10; struct OcText { int (**x_11_2_1)(); int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; unsigned int x_11_2_5; char *x_11_2_6; char *x_11_2_7; boolx_11_2_8; } x_62_1_11; } x62; struct XlDocumentInfo { int (**x_63_1_1)(); unsigned short x_63_1_2; unsigned short x_63_1_3; int x_63_1_4; boolx_63_1_5; boolx_63_1_6; boolx_63_1_7; boolx_63_1_8; boolx_63_1_9; boolx_63_1_10; boolx_63_1_11; boolx_63_1_12; } x63; struct XlDocumentProtection { int (**x_64_1_1)(); boolx_64_1_2; boolx_64_1_3; boolx_64_1_4; short x_64_1_5; short x_64_1_6; } x64; struct XlFileProtection { int (**x_65_1_1)(); int x_65_1_2; boolx_65_1_3; boolx_65_1_4; short x_65_1_5; struct OcText { int (**x_6_2_1)(); int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; char *x_6_2_6; char *x_6_2_7; boolx_6_2_8; } x_65_1_6; struct OcText { int (**x_7_2_1)(); int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; char *x_7_2_6; char *x_7_2_7; boolx_7_2_8; } x_65_1_7; char *x_65_1_8; } x65; int x66; int x67; struct XlDocumentProperties { int (**x_68_1_1)(); unsigned short x_68_1_2; short x_68_1_3; int x_68_1_4; boolx_68_1_5; boolx_68_1_6; boolx_68_1_7; boolx_68_1_8; boolx_68_1_9; boolx_68_1_10; boolx_68_1_11; boolx_68_1_12; int x_68_1_13; short x_68_1_14; short *x_68_1_15; struct OcText { int (**x_16_2_1)(); int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; char *x_16_2_6; char *x_16_2_7; boolx_16_2_8; } x_68_1_16; int x_68_1_17; struct XlRef { unsigned short x_18_2_1; unsigned short x_18_2_2; short x_18_2_3; short x_18_2_4; boolx_18_2_5; } x_68_1_18; boolx_68_1_19; } x68; struct XlSubstreamProperties { int (**x_69_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_69_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; boolx_3_2_8; boolx_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; boolx_3_2_15; int x_3_2_16; boolx_3_2_17; boolx_3_2_18; boolx_3_2_19; boolx_3_2_20; boolx_3_2_21; boolx_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_69_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_69_1_4; int x_69_1_5; int x_69_1_6; } x69; struct XlRecord {} *x70; struct SsrwOOStream {} *x71; unsigned char x72; struct XlObjectFactory {} *x73; struct XlParserVisitor {} *x74; boolx75; int (**x76)(); struct EshObjectFactory {} *x77; struct ChVector<long int> { long *x_78_1_1; long *x_78_1_2; unsigned int x_78_1_3; unsigned int x_78_1_4; unsigned int x_78_1_5; } x78; struct XlSubstreamProperties { int (**x_79_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_79_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; boolx_3_2_8; boolx_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; boolx_3_2_15; int x_3_2_16; boolx_3_2_17; boolx_3_2_18; boolx_3_2_19; boolx_3_2_20; boolx_3_2_21; boolx_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_79_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_79_1_4; int x_79_1_5; int x_79_1_6; } x79; int x80; int x81; int x82; struct CsRect<float> { float x_83_1_1[4]; } x83; int x84; int x85; int x86[4]; int x87; int x88; int x89; int x90; int x91; struct ChVector<long int> { long *x_92_1_1; long *x_92_1_2; unsigned int x_92_1_3; unsigned int x_92_1_4; unsigned int x_92_1_5; } x92; int x93[4]; int x94; int x95; struct AxisParentChildren { int x_96_1_1; int x_96_1_2; int x_96_1_3; int x_96_1_4; struct ChVector<long int> { long *x_5_2_1; long *x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_96_1_5; int x_96_1_6; int x_96_1_7; int x_96_1_8; } x96; struct AxisParentChildren { int x_97_1_1; int x_97_1_2; int x_97_1_3; int x_97_1_4; struct ChVector<long int> { long *x_5_2_1; long *x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_97_1_5; int x_97_1_6; int x_97_1_7; int x_97_1_8; } x97; struct ChVector<XlChartBinaryReader::SeriesDescriptor> { struct SeriesDescriptor {} *x_98_1_1; struct SeriesDescriptor {} *x_98_1_2; unsigned int x_98_1_3; unsigned int x_98_1_4; unsigned int x_98_1_5; } x98; struct ChVector<XlChartBinaryReader::PlotDescriptor> { struct PlotDescriptor {} *x_99_1_1; struct PlotDescriptor {} *x_99_1_2; unsigned int x_99_1_3; unsigned int x_99_1_4; unsigned int x_99_1_5; } x99; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_100_1_1; } x100; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_101_1_1; } x101; unsigned short x102; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_103_1_1; } x103; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_104_1_1; } x104; float x105; float x106; unsigned short x107; unsigned short x108; int x109; struct ChVector<long int> { long *x_110_1_1; long *x_110_1_2; unsigned int x_110_1_3; unsigned int x_110_1_4; unsigned int x_110_1_5; } x110; struct ChVector<long int> { long *x_111_1_1; long *x_111_1_2; unsigned int x_111_1_3; unsigned int x_111_1_4; unsigned int x_111_1_5; } x111; int x112; boolx113; boolx114; int (**x115)(); struct EshObjectFactory {} *x116; }*)arg1 xlObjectFactory:(struct XlObjectFactory { int (**x1)(); struct XlEshObjectFactory {} *x2; }*)arg2;
+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 temporaryDirectory:(id)arg4 asThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;

- (id)initWithXlReader:(struct XlChartBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct EshObjectFactory {} *x4; boolx5; struct SsrwOORootStorage {} *x6; struct SsrwOOStorage {} *x7; struct XlEshBinaryReader { int (**x_8_1_1)(); struct SsrwOOStream {} *x_8_1_2; struct EshParserVisitor {} *x_8_1_3; struct EshObjectFactory {} *x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_8_1_7; unsigned int x_8_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_8_1_9; boolx_8_1_10; boolx_8_1_11; unsigned int x_8_1_12; struct XlReadStgStream {} *x_8_1_13; } x8; struct XlStringExtractor {} *x9; struct XlSheetInfoTable {} *x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; boolx41; boolx42; boolx43; struct ChVector<long int> { long *x_44_1_1; long *x_44_1_2; unsigned int x_44_1_3; unsigned int x_44_1_4; unsigned int x_44_1_5; } x44; struct ChVector<long int> { long *x_45_1_1; long *x_45_1_2; unsigned int x_45_1_3; unsigned int x_45_1_4; unsigned int x_45_1_5; } x45; struct ChVector<long int> { long *x_46_1_1; long *x_46_1_2; unsigned int x_46_1_3; unsigned int x_46_1_4; unsigned int x_46_1_5; } x46; struct XlIndex {} *x47; struct XlRow {} *x48; struct XlRecord {} *x49; int x50; int x51; short x52; int x53; int x54; struct ChVector<XlCell*> { struct XlCell {} **x_55_1_1; struct XlCell {} **x_55_1_2; unsigned int x_55_1_3; unsigned int x_55_1_4; unsigned int x_55_1_5; } x55; int x56; unsigned char x57; int x58; struct XlWorksheetProperties { int (**x_59_1_1)(); unsigned short x_59_1_2; int x_59_1_3; unsigned short x_59_1_4; boolx_59_1_5; unsigned short x_59_1_6; unsigned short x_59_1_7; unsigned short x_59_1_8; unsigned short x_59_1_9; boolx_59_1_10; boolx_59_1_11; boolx_59_1_12; boolx_59_1_13; boolx_59_1_14; boolx_59_1_15; boolx_59_1_16; boolx_59_1_17; boolx_59_1_18; boolx_59_1_19; boolx_59_1_20; boolx_59_1_21; boolx_59_1_22; boolx_59_1_23; boolx_59_1_24; boolx_59_1_25; short x_59_1_26; struct ChVector<XlBrk*> { struct XlBrk {} **x_27_2_1; struct XlBrk {} **x_27_2_2; unsigned int x_27_2_3; unsigned int x_27_2_4; unsigned int x_27_2_5; } x_59_1_27; struct ChVector<XlBrk*> { struct XlBrk {} **x_28_2_1; struct XlBrk {} **x_28_2_2; unsigned int x_28_2_3; unsigned int x_28_2_4; unsigned int x_28_2_5; } x_59_1_28; struct OcText { int (**x_29_2_1)(); int x_29_2_2; unsigned int x_29_2_3; unsigned int x_29_2_4; unsigned int x_29_2_5; char *x_29_2_6; char *x_29_2_7; boolx_29_2_8; } x_59_1_29; } x59; struct XlWorksheetProtection { int (**x_60_1_1)(); boolx_60_1_2; boolx_60_1_3; boolx_60_1_4; boolx_60_1_5; boolx_60_1_6; boolx_60_1_7; boolx_60_1_8; boolx_60_1_9; boolx_60_1_10; boolx_60_1_11; boolx_60_1_12; boolx_60_1_13; boolx_60_1_14; boolx_60_1_15; boolx_60_1_16; boolx_60_1_17; boolx_60_1_18; boolx_60_1_19; short x_60_1_20; } x60; struct XlCalculationProperties { int (**x_61_1_1)(); double x_61_1_2; int x_61_1_3; short x_61_1_4; boolx_61_1_5; int x_61_1_6; boolx_61_1_7; } x61; struct XlSortInfo { int (**x_62_1_1)(); boolx_62_1_2; boolx_62_1_3; boolx_62_1_4; boolx_62_1_5; boolx_62_1_6; boolx_62_1_7; unsigned char x_62_1_8; struct OcText { int (**x_9_2_1)(); int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; unsigned int x_9_2_5; char *x_9_2_6; char *x_9_2_7; boolx_9_2_8; } x_62_1_9; struct OcText { int (**x_10_2_1)(); int x_10_2_2; unsigned int x_10_2_3; unsigned int x_10_2_4; unsigned int x_10_2_5; char *x_10_2_6; char *x_10_2_7; boolx_10_2_8; } x_62_1_10; struct OcText { int (**x_11_2_1)(); int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; unsigned int x_11_2_5; char *x_11_2_6; char *x_11_2_7; boolx_11_2_8; } x_62_1_11; } x62; struct XlDocumentInfo { int (**x_63_1_1)(); unsigned short x_63_1_2; unsigned short x_63_1_3; int x_63_1_4; boolx_63_1_5; boolx_63_1_6; boolx_63_1_7; boolx_63_1_8; boolx_63_1_9; boolx_63_1_10; boolx_63_1_11; boolx_63_1_12; } x63; struct XlDocumentProtection { int (**x_64_1_1)(); boolx_64_1_2; boolx_64_1_3; boolx_64_1_4; short x_64_1_5; short x_64_1_6; } x64; struct XlFileProtection { int (**x_65_1_1)(); int x_65_1_2; boolx_65_1_3; boolx_65_1_4; short x_65_1_5; struct OcText { int (**x_6_2_1)(); int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; char *x_6_2_6; char *x_6_2_7; boolx_6_2_8; } x_65_1_6; struct OcText { int (**x_7_2_1)(); int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; char *x_7_2_6; char *x_7_2_7; boolx_7_2_8; } x_65_1_7; char *x_65_1_8; } x65; int x66; int x67; struct XlDocumentProperties { int (**x_68_1_1)(); unsigned short x_68_1_2; short x_68_1_3; int x_68_1_4; boolx_68_1_5; boolx_68_1_6; boolx_68_1_7; boolx_68_1_8; boolx_68_1_9; boolx_68_1_10; boolx_68_1_11; boolx_68_1_12; int x_68_1_13; short x_68_1_14; short *x_68_1_15; struct OcText { int (**x_16_2_1)(); int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; char *x_16_2_6; char *x_16_2_7; boolx_16_2_8; } x_68_1_16; int x_68_1_17; struct XlRef { unsigned short x_18_2_1; unsigned short x_18_2_2; short x_18_2_3; short x_18_2_4; boolx_18_2_5; } x_68_1_18; boolx_68_1_19; } x68; struct XlSubstreamProperties { int (**x_69_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_69_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; boolx_3_2_8; boolx_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; boolx_3_2_15; int x_3_2_16; boolx_3_2_17; boolx_3_2_18; boolx_3_2_19; boolx_3_2_20; boolx_3_2_21; boolx_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_69_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_69_1_4; int x_69_1_5; int x_69_1_6; } x69; struct XlRecord {} *x70; struct SsrwOOStream {} *x71; unsigned char x72; struct XlObjectFactory {} *x73; struct XlParserVisitor {} *x74; boolx75; int (**x76)(); struct EshObjectFactory {} *x77; struct ChVector<long int> { long *x_78_1_1; long *x_78_1_2; unsigned int x_78_1_3; unsigned int x_78_1_4; unsigned int x_78_1_5; } x78; struct XlSubstreamProperties { int (**x_79_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_79_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; boolx_3_2_8; boolx_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; boolx_3_2_15; int x_3_2_16; boolx_3_2_17; boolx_3_2_18; boolx_3_2_19; boolx_3_2_20; boolx_3_2_21; boolx_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_79_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_79_1_4; int x_79_1_5; int x_79_1_6; } x79; int x80; int x81; int x82; struct CsRect<float> { float x_83_1_1[4]; } x83; int x84; int x85; int x86[4]; int x87; int x88; int x89; int x90; int x91; struct ChVector<long int> { long *x_92_1_1; long *x_92_1_2; unsigned int x_92_1_3; unsigned int x_92_1_4; unsigned int x_92_1_5; } x92; int x93[4]; int x94; int x95; struct AxisParentChildren { int x_96_1_1; int x_96_1_2; int x_96_1_3; int x_96_1_4; struct ChVector<long int> { long *x_5_2_1; long *x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_96_1_5; int x_96_1_6; int x_96_1_7; int x_96_1_8; } x96; struct AxisParentChildren { int x_97_1_1; int x_97_1_2; int x_97_1_3; int x_97_1_4; struct ChVector<long int> { long *x_5_2_1; long *x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_97_1_5; int x_97_1_6; int x_97_1_7; int x_97_1_8; } x97; struct ChVector<XlChartBinaryReader::SeriesDescriptor> { struct SeriesDescriptor {} *x_98_1_1; struct SeriesDescriptor {} *x_98_1_2; unsigned int x_98_1_3; unsigned int x_98_1_4; unsigned int x_98_1_5; } x98; struct ChVector<XlChartBinaryReader::PlotDescriptor> { struct PlotDescriptor {} *x_99_1_1; struct PlotDescriptor {} *x_99_1_2; unsigned int x_99_1_3; unsigned int x_99_1_4; unsigned int x_99_1_5; } x99; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_100_1_1; } x100; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_101_1_1; } x101; unsigned short x102; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_103_1_1; } x103; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_104_1_1; } x104; float x105; float x106; unsigned short x107; unsigned short x108; int x109; struct ChVector<long int> { long *x_110_1_1; long *x_110_1_2; unsigned int x_110_1_3; unsigned int x_110_1_4; unsigned int x_110_1_5; } x110; struct ChVector<long int> { long *x_111_1_1; long *x_111_1_2; unsigned int x_111_1_3; unsigned int x_111_1_4; unsigned int x_111_1_5; } x111; int x112; boolx113; boolx114; int (**x115)(); struct EshObjectFactory {} *x116; }*)arg1 xlObjectFactory:(struct XlObjectFactory { int (**x1)(); struct XlEshObjectFactory {} *x2; }*)arg2;
- (bool)isCSV;
- (id)readWorkbookFrom:(struct XlChartBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct EshObjectFactory {} *x4; boolx5; struct SsrwOORootStorage {} *x6; struct SsrwOOStorage {} *x7; struct XlEshBinaryReader { int (**x_8_1_1)(); struct SsrwOOStream {} *x_8_1_2; struct EshParserVisitor {} *x_8_1_3; struct EshObjectFactory {} *x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_8_1_7; unsigned int x_8_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_8_1_9; boolx_8_1_10; boolx_8_1_11; unsigned int x_8_1_12; struct XlReadStgStream {} *x_8_1_13; } x8; struct XlStringExtractor {} *x9; struct XlSheetInfoTable {} *x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; boolx41; boolx42; boolx43; struct ChVector<long int> { long *x_44_1_1; long *x_44_1_2; unsigned int x_44_1_3; unsigned int x_44_1_4; unsigned int x_44_1_5; } x44; struct ChVector<long int> { long *x_45_1_1; long *x_45_1_2; unsigned int x_45_1_3; unsigned int x_45_1_4; unsigned int x_45_1_5; } x45; struct ChVector<long int> { long *x_46_1_1; long *x_46_1_2; unsigned int x_46_1_3; unsigned int x_46_1_4; unsigned int x_46_1_5; } x46; struct XlIndex {} *x47; struct XlRow {} *x48; struct XlRecord {} *x49; int x50; int x51; short x52; int x53; int x54; struct ChVector<XlCell*> { struct XlCell {} **x_55_1_1; struct XlCell {} **x_55_1_2; unsigned int x_55_1_3; unsigned int x_55_1_4; unsigned int x_55_1_5; } x55; int x56; unsigned char x57; int x58; struct XlWorksheetProperties { int (**x_59_1_1)(); unsigned short x_59_1_2; int x_59_1_3; unsigned short x_59_1_4; boolx_59_1_5; unsigned short x_59_1_6; unsigned short x_59_1_7; unsigned short x_59_1_8; unsigned short x_59_1_9; boolx_59_1_10; boolx_59_1_11; boolx_59_1_12; boolx_59_1_13; boolx_59_1_14; boolx_59_1_15; boolx_59_1_16; boolx_59_1_17; boolx_59_1_18; boolx_59_1_19; boolx_59_1_20; boolx_59_1_21; boolx_59_1_22; boolx_59_1_23; boolx_59_1_24; boolx_59_1_25; short x_59_1_26; struct ChVector<XlBrk*> { struct XlBrk {} **x_27_2_1; struct XlBrk {} **x_27_2_2; unsigned int x_27_2_3; unsigned int x_27_2_4; unsigned int x_27_2_5; } x_59_1_27; struct ChVector<XlBrk*> { struct XlBrk {} **x_28_2_1; struct XlBrk {} **x_28_2_2; unsigned int x_28_2_3; unsigned int x_28_2_4; unsigned int x_28_2_5; } x_59_1_28; struct OcText { int (**x_29_2_1)(); int x_29_2_2; unsigned int x_29_2_3; unsigned int x_29_2_4; unsigned int x_29_2_5; char *x_29_2_6; char *x_29_2_7; boolx_29_2_8; } x_59_1_29; } x59; struct XlWorksheetProtection { int (**x_60_1_1)(); boolx_60_1_2; boolx_60_1_3; boolx_60_1_4; boolx_60_1_5; boolx_60_1_6; boolx_60_1_7; boolx_60_1_8; boolx_60_1_9; boolx_60_1_10; boolx_60_1_11; boolx_60_1_12; boolx_60_1_13; boolx_60_1_14; boolx_60_1_15; boolx_60_1_16; boolx_60_1_17; boolx_60_1_18; boolx_60_1_19; short x_60_1_20; } x60; struct XlCalculationProperties { int (**x_61_1_1)(); double x_61_1_2; int x_61_1_3; short x_61_1_4; boolx_61_1_5; int x_61_1_6; boolx_61_1_7; } x61; struct XlSortInfo { int (**x_62_1_1)(); boolx_62_1_2; boolx_62_1_3; boolx_62_1_4; boolx_62_1_5; boolx_62_1_6; boolx_62_1_7; unsigned char x_62_1_8; struct OcText { int (**x_9_2_1)(); int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; unsigned int x_9_2_5; char *x_9_2_6; char *x_9_2_7; boolx_9_2_8; } x_62_1_9; struct OcText { int (**x_10_2_1)(); int x_10_2_2; unsigned int x_10_2_3; unsigned int x_10_2_4; unsigned int x_10_2_5; char *x_10_2_6; char *x_10_2_7; boolx_10_2_8; } x_62_1_10; struct OcText { int (**x_11_2_1)(); int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; unsigned int x_11_2_5; char *x_11_2_6; char *x_11_2_7; boolx_11_2_8; } x_62_1_11; } x62; struct XlDocumentInfo { int (**x_63_1_1)(); unsigned short x_63_1_2; unsigned short x_63_1_3; int x_63_1_4; boolx_63_1_5; boolx_63_1_6; boolx_63_1_7; boolx_63_1_8; boolx_63_1_9; boolx_63_1_10; boolx_63_1_11; boolx_63_1_12; } x63; struct XlDocumentProtection { int (**x_64_1_1)(); boolx_64_1_2; boolx_64_1_3; boolx_64_1_4; short x_64_1_5; short x_64_1_6; } x64; struct XlFileProtection { int (**x_65_1_1)(); int x_65_1_2; boolx_65_1_3; boolx_65_1_4; short x_65_1_5; struct OcText { int (**x_6_2_1)(); int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned int x_6_2_5; char *x_6_2_6; char *x_6_2_7; boolx_6_2_8; } x_65_1_6; struct OcText { int (**x_7_2_1)(); int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; char *x_7_2_6; char *x_7_2_7; boolx_7_2_8; } x_65_1_7; char *x_65_1_8; } x65; int x66; int x67; struct XlDocumentProperties { int (**x_68_1_1)(); unsigned short x_68_1_2; short x_68_1_3; int x_68_1_4; boolx_68_1_5; boolx_68_1_6; boolx_68_1_7; boolx_68_1_8; boolx_68_1_9; boolx_68_1_10; boolx_68_1_11; boolx_68_1_12; int x_68_1_13; short x_68_1_14; short *x_68_1_15; struct OcText { int (**x_16_2_1)(); int x_16_2_2; unsigned int x_16_2_3; unsigned int x_16_2_4; unsigned int x_16_2_5; char *x_16_2_6; char *x_16_2_7; boolx_16_2_8; } x_68_1_16; int x_68_1_17; struct XlRef { unsigned short x_18_2_1; unsigned short x_18_2_2; short x_18_2_3; short x_18_2_4; boolx_18_2_5; } x_68_1_18; boolx_68_1_19; } x68; struct XlSubstreamProperties { int (**x_69_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_69_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; boolx_3_2_8; boolx_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; boolx_3_2_15; int x_3_2_16; boolx_3_2_17; boolx_3_2_18; boolx_3_2_19; boolx_3_2_20; boolx_3_2_21; boolx_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_69_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_69_1_4; int x_69_1_5; int x_69_1_6; } x69; struct XlRecord {} *x70; struct SsrwOOStream {} *x71; unsigned char x72; struct XlObjectFactory {} *x73; struct XlParserVisitor {} *x74; boolx75; int (**x76)(); struct EshObjectFactory {} *x77; struct ChVector<long int> { long *x_78_1_1; long *x_78_1_2; unsigned int x_78_1_3; unsigned int x_78_1_4; unsigned int x_78_1_5; } x78; struct XlSubstreamProperties { int (**x_79_1_1)(); struct XlSheetInfo { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; } x_79_1_2; struct XlPageProperties { int (**x_3_2_1)(); double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; struct OcText {} *x_3_2_6; struct OcText {} *x_3_2_7; boolx_3_2_8; boolx_3_2_9; short x_3_2_10; short x_3_2_11; short x_3_2_12; short x_3_2_13; short x_3_2_14; boolx_3_2_15; int x_3_2_16; boolx_3_2_17; boolx_3_2_18; boolx_3_2_19; boolx_3_2_20; boolx_3_2_21; boolx_3_2_22; short x_3_2_23; short x_3_2_24; short x_3_2_25; double x_3_2_26; double x_3_2_27; short x_3_2_28; } x_79_1_3; struct XlCellTableInfo { int (**x_4_2_1)(); int x_4_2_2; int x_4_2_3; unsigned short x_4_2_4; unsigned short x_4_2_5; } x_79_1_4; int x_79_1_5; int x_79_1_6; } x79; int x80; int x81; int x82; struct CsRect<float> { float x_83_1_1[4]; } x83; int x84; int x85; int x86[4]; int x87; int x88; int x89; int x90; int x91; struct ChVector<long int> { long *x_92_1_1; long *x_92_1_2; unsigned int x_92_1_3; unsigned int x_92_1_4; unsigned int x_92_1_5; } x92; int x93[4]; int x94; int x95; struct AxisParentChildren { int x_96_1_1; int x_96_1_2; int x_96_1_3; int x_96_1_4; struct ChVector<long int> { long *x_5_2_1; long *x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_96_1_5; int x_96_1_6; int x_96_1_7; int x_96_1_8; } x96; struct AxisParentChildren { int x_97_1_1; int x_97_1_2; int x_97_1_3; int x_97_1_4; struct ChVector<long int> { long *x_5_2_1; long *x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_97_1_5; int x_97_1_6; int x_97_1_7; int x_97_1_8; } x97; struct ChVector<XlChartBinaryReader::SeriesDescriptor> { struct SeriesDescriptor {} *x_98_1_1; struct SeriesDescriptor {} *x_98_1_2; unsigned int x_98_1_3; unsigned int x_98_1_4; unsigned int x_98_1_5; } x98; struct ChVector<XlChartBinaryReader::PlotDescriptor> { struct PlotDescriptor {} *x_99_1_1; struct PlotDescriptor {} *x_99_1_2; unsigned int x_99_1_3; unsigned int x_99_1_4; unsigned int x_99_1_5; } x99; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_100_1_1; } x100; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_101_1_1; } x101; unsigned short x102; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_103_1_1; } x103; struct ChMap<long unsigned int,long int,CsLess<long unsigned int> > { struct map<long unsigned int,long int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long int>,std::_Select1st<std::pair<const long unsigned int, long int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_104_1_1; } x104; float x105; float x106; unsigned short x107; unsigned short x108; int x109; struct ChVector<long int> { long *x_110_1_1; long *x_110_1_2; unsigned int x_110_1_3; unsigned int x_110_1_4; unsigned int x_110_1_5; } x110; struct ChVector<long int> { long *x_111_1_1; long *x_111_1_2; unsigned int x_111_1_3; unsigned int x_111_1_4; unsigned int x_111_1_5; } x111; int x112; boolx113; boolx114; int (**x115)(); struct EshObjectFactory {} *x116; }*)arg1 fileName:(id)arg2 cancel:(id)arg3 tracing:(id)arg4 temporaryDirectory:(id)arg5 asThumbnail:(BOOL)arg6 delegate:(id)arg7;
- (void)dealloc;

@end