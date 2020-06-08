/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleSymbol : NSObject {
    unsigned long long  _length;
    NSString * _name;
    unsigned long long  _offsetIntoTextSegment;
    NSArray * _sourceInfos;
}

@property unsigned long long length;
@property (retain) NSString *name;
@property unsigned long long offsetIntoTextSegment;
@property (retain) NSArray *sourceInfos;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)length;
- (id)name;
- (unsigned long long)offsetIntoTextSegment;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setLength:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setOffsetIntoTextSegment:(unsigned long long)arg1;
- (void)setSourceInfos:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)sourceInfos;

@end
