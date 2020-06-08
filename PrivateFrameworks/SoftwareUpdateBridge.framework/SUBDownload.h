/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBDownload : NSObject <NSSecureCoding> {
    SUBDescriptor * _descriptor;
    SUBProgress * _progress;
}

@property (nonatomic, retain) SUBDescriptor *descriptor;
@property (nonatomic, retain) SUBProgress *progress;

+ (id)downloadWithDescriptor:(id)arg1 andProgress:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copy;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)progress;
- (void)setDescriptor:(id)arg1;
- (void)setProgress:(id)arg1;

@end
