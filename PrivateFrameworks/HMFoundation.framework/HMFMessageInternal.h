/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMessageInternal : HMFObject <NSCopying> {
    HMFActivity * _activity;
    HMFMessageDestination * _destination;
    NSDictionary * _headers;
    NSUUID * _identifier;
    NSDictionary * _messagePayload;
    NSString * _name;
    long long  _qualityOfService;
    id /* block */  _responseHandler;
    HMFMessageTransport * _transport;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) HMFActivity *activity;
@property (nonatomic, retain) HMFMessageDestination *destination;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDictionary *messagePayload;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) HMFMessageTransport *transport;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (id)headers;
- (id)identifier;
- (id)init;
- (id)messagePayload;
- (id)name;
- (long long)qualityOfService;
- (id /* block */)responseHandler;
- (void)setActivity:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessagePayload:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setTransport:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)transport;
- (id)userInfo;

@end
