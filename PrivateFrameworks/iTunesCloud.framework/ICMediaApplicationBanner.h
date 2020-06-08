/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaApplicationBanner : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    int  _displayCount;
    NSDate * _displayWindowEndTime;
    NSDate * _displayWindowStartTime;
    NSString * _guid;
    bool  _hasBeenTapped;
    int  _maxDisplayCount;
    NSDictionary * _rawPayload;
    NSString * _setID;
    NSString * _target;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) int displayCount;
@property (nonatomic, readonly) NSDate *displayWindowEndTime;
@property (nonatomic, readonly) NSDate *displayWindowStartTime;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool hasBeenTapped;
@property (nonatomic, readonly) int maxDisplayCount;
@property (nonatomic, readonly) NSDictionary *rawPayload;
@property (nonatomic, readonly) NSString *setID;
@property (nonatomic, readonly) NSString *target;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)displayCount;
- (id)displayWindowEndTime;
- (id)displayWindowStartTime;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (bool)hasBeenTapped;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToBanner:(id)arg1;
- (int)maxDisplayCount;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rawPayload;
- (id)setID;
- (id)target;

@end
