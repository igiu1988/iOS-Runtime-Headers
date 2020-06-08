/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int maxChildPlaces : 1; 
    }  _has;
    int  _maxChildPlaces;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaxChildPlaces;
@property (nonatomic) int maxChildPlaces;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxChildPlaces;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxChildPlaces;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxChildPlaces:(bool)arg1;
- (void)setMaxChildPlaces:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
