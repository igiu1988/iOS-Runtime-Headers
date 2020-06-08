/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions {
    NSArray * _bundleIDs;
}

@property (nonatomic, copy) NSArray *bundleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIDs:(id)arg1;

@end
