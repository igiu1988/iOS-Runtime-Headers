/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying> {
    bool  _arrivedFromAd;
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    NSData * _feedViewExposureId;
    int  _groupType;
    struct { 
        unsigned int groupType : 1; 
        unsigned int paidSubscriptionConversionPointExposureLocation : 1; 
        unsigned int paidSubscriptionConversionPointExposurePresentationReason : 1; 
        unsigned int paidSubscriptionConversionPointType : 1; 
        unsigned int parentFeedType : 1; 
        unsigned int userAction : 1; 
        unsigned int arrivedFromAd : 1; 
        unsigned int subscriptionOnlyArticlePreview : 1; 
    }  _has;
    NSString * _iadQtoken;
    int  _paidSubscriptionConversionPointExposureLocation;
    int  _paidSubscriptionConversionPointExposurePresentationReason;
    int  _paidSubscriptionConversionPointType;
    int  _parentFeedType;
    NSString * _sectionId;
    NSString * _sourceChannelId;
    bool  _subscriptionOnlyArticlePreview;
    NSData * _subscriptionPurchaseSessionId;
    int  _userAction;
}

@property (nonatomic) bool arrivedFromAd;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) int groupType;
@property (nonatomic) bool hasArrivedFromAd;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic, readonly) bool hasIadQtoken;
@property (nonatomic) bool hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) bool hasPaidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) bool hasParentFeedType;
@property (nonatomic, readonly) bool hasSectionId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasSubscriptionOnlyArticlePreview;
@property (nonatomic, readonly) bool hasSubscriptionPurchaseSessionId;
@property (nonatomic) bool hasUserAction;
@property (nonatomic, retain) NSString *iadQtoken;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) int parentFeedType;
@property (nonatomic, retain) NSString *sectionId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) bool subscriptionOnlyArticlePreview;
@property (nonatomic, retain) NSData *subscriptionPurchaseSessionId;
@property (nonatomic) int userAction;

- (void).cxx_destruct;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (bool)arrivedFromAd;
- (id)articleId;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasArrivedFromAd;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasFeedViewExposureId;
- (bool)hasGroupType;
- (bool)hasIadQtoken;
- (bool)hasPaidSubscriptionConversionPointExposureLocation;
- (bool)hasPaidSubscriptionConversionPointExposurePresentationReason;
- (bool)hasPaidSubscriptionConversionPointType;
- (bool)hasParentFeedType;
- (bool)hasSectionId;
- (bool)hasSourceChannelId;
- (bool)hasSubscriptionOnlyArticlePreview;
- (bool)hasSubscriptionPurchaseSessionId;
- (bool)hasUserAction;
- (unsigned long long)hash;
- (id)iadQtoken;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)paidSubscriptionConversionPointExposureLocation;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1;
- (int)paidSubscriptionConversionPointExposurePresentationReason;
- (int)paidSubscriptionConversionPointType;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (int)parentFeedType;
- (id)parentFeedTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionId;
- (void)setArrivedFromAd:(bool)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasArrivedFromAd:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasPaidSubscriptionConversionPointExposureLocation:(bool)arg1;
- (void)setHasPaidSubscriptionConversionPointExposurePresentationReason:(bool)arg1;
- (void)setHasPaidSubscriptionConversionPointType:(bool)arg1;
- (void)setHasParentFeedType:(bool)arg1;
- (void)setHasSubscriptionOnlyArticlePreview:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setIadQtoken:(id)arg1;
- (void)setPaidSubscriptionConversionPointExposureLocation:(int)arg1;
- (void)setPaidSubscriptionConversionPointExposurePresentationReason:(int)arg1;
- (void)setPaidSubscriptionConversionPointType:(int)arg1;
- (void)setParentFeedType:(int)arg1;
- (void)setSectionId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSubscriptionOnlyArticlePreview:(bool)arg1;
- (void)setSubscriptionPurchaseSessionId:(id)arg1;
- (void)setUserAction:(int)arg1;
- (id)sourceChannelId;
- (bool)subscriptionOnlyArticlePreview;
- (id)subscriptionPurchaseSessionId;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
