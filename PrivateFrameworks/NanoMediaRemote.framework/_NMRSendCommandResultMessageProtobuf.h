/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _errorCode;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _handlerReturnStatus;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int originIdentifier : 1; 
    }  _has;
    int  _originIdentifier;
    double  _timestamp;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, readonly) unsigned int*handlerReturnStatus;
@property (nonatomic, readonly) unsigned long long handlerReturnStatusCount;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int originIdentifier;
@property (nonatomic) double timestamp;

- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)clearHandlerReturnStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (unsigned int*)handlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)handlerReturnStatusCount;
- (bool)hasErrorCode;
- (bool)hasOriginIdentifier;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHandlerReturnStatus:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
