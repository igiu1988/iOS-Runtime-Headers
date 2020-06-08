/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFDidGoToSearchFeedback : SFFeedback {
    unsigned long long  _endpoint;
    NSString * _input;
}

@property (nonatomic) unsigned long long endpoint;
@property (nonatomic, copy) NSString *input;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 endpoint:(unsigned long long)arg2;
- (id)input;
- (void)setEndpoint:(unsigned long long)arg1;
- (void)setInput:(id)arg1;

@end
