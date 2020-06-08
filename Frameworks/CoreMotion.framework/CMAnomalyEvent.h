/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAnomalyEvent : NSObject <NSCopying, NSSecureCoding> {
    double  _absoluteTimestamp;
    bool  _acknowledgement;
    unsigned long long  _identifier;
    long long  _resolution;
    long long  _response;
    long long  _state;
}

@property (nonatomic) double absoluteTimestamp;
@property (getter=isAcknowledgement, nonatomic) bool acknowledgement;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic) long long resolution;
@property (nonatomic) long long response;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (double)absoluteTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5;
- (bool)isAcknowledgement;
- (long long)resolution;
- (long long)response;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setAcknowledgement:(bool)arg1;
- (void)setResolution:(long long)arg1;
- (void)setResponse:(long long)arg1;
- (long long)state;
- (id)timestamp;

@end
