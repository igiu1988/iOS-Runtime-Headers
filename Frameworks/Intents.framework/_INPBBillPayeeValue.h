/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBBillPayeeValue : PBCodable <NSCopying> {
    NSString * _accountNumber;
    _INPBDataString * _nickname;
    _INPBDataString * _organizationName;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSString *accountNumber;
@property (nonatomic, readonly) BOOL hasAccountNumber;
@property (nonatomic, readonly) BOOL hasNickname;
@property (nonatomic, readonly) BOOL hasOrganizationName;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic, retain) _INPBDataString *nickname;
@property (nonatomic, retain) _INPBDataString *organizationName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAccountNumber;
- (BOOL)hasNickname;
- (BOOL)hasOrganizationName;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nickname;
- (id)organizationName;
- (BOOL)readFrom:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end