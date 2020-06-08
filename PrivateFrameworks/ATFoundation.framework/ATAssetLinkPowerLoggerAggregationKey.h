/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATAssetLinkPowerLoggerAggregationKey : NSObject <NSCopying> {
    NSString * _assetType;
    NSString * _dataclass;
    long long  _linkType;
}

@property (readonly) NSString *assetType;
@property (readonly) NSString *dataclass;
@property (readonly) long long linkType;

- (void).cxx_destruct;
- (id)assetType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataclass;
- (unsigned long long)hash;
- (id)initWithLinkType:(long long)arg1 dataclass:(id)arg2 assetType:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)linkType;

@end
