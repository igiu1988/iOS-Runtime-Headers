/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUDataRepresentation : NSObject {
    bool  mHasHash;
    bool  mHasSha1Hash;
    unsigned int  mHash;
    NSData * mSha1Hash;
}

- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (struct CGDataProvider { }*)cgDataProvider;
- (long long)compare:(id)arg1;
- (long long)dataLength;
- (long long)encodedLength;
- (bool)hasSameLocationAs:(id)arg1;
- (unsigned long long)hash;
- (id)inputStream;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (bool)isReadable;
- (unsigned long long)readIntoData:(id)arg1;
- (id)sha1Hash;
- (unsigned int)uint32Hash;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)xmlDocument;
- (struct _xmlTextReader { }*)xmlReader;
- (struct _xmlTextReader { }*)xmlReaderForGzippedData;
- (struct _xmlTextReader { }*)xmlReaderForGzippedDataWithInputStream:(id*)arg1;
- (struct _xmlTextReader { }*)xmlReaderWithReadCallback:(int (*)arg1;

@end
