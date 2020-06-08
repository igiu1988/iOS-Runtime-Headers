/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTemporalEventTrigger : PBCodable <NSCopying, NSSecureCoding, _INPBTemporalEventTrigger> {
    _INPBDateTimeRangeValue * _dateTime;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBDateTimeRangeValue *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)dictionaryRepresentation;
- (bool)hasDateTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateTime:(id)arg1;
- (void)writeTo:(id)arg1;

@end
