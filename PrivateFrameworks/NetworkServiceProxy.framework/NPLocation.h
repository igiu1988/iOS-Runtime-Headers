/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPLocation : NSObject <NSSecureCoding> {
    double  _latitude;
    double  _longtitude;
    NSDate * _timestamp;
}

@property (readonly) bool isValid;
@property double latitude;
@property double longtitude;
@property (retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longtitude:(double)arg2 timestamp:(id)arg3;
- (bool)isValid;
- (double)latitude;
- (double)longtitude;
- (void)setLatitude:(double)arg1;
- (void)setLongtitude:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
