/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    NSString * _extensionName;
    NSData * _extensionPayload;
    struct { 
        unsigned int typeCode : 1; 
    }  _has;
    unsigned int  _typeCode;
}

@property (nonatomic, retain) NSString *extensionName;
@property (nonatomic, retain) NSData *extensionPayload;
@property (nonatomic, readonly) bool hasExtensionName;
@property (nonatomic, readonly) bool hasExtensionPayload;
@property (nonatomic) bool hasTypeCode;
@property (nonatomic) unsigned int typeCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extensionName;
- (id)extensionPayload;
- (bool)hasExtensionName;
- (bool)hasExtensionPayload;
- (bool)hasTypeCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExtensionName:(id)arg1;
- (void)setExtensionPayload:(id)arg1;
- (void)setHasTypeCode:(bool)arg1;
- (void)setTypeCode:(unsigned int)arg1;
- (unsigned int)typeCode;
- (void)writeTo:(id)arg1;

@end
