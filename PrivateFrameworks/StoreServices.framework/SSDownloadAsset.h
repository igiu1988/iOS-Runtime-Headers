/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadAsset : SSEntity {
    long long  _assetType;
    SSURLRequestProperties * _localProperties;
}

@property (readonly, retain) NSURLRequest *URLRequest;
@property (readonly) SSURLRequestProperties *URLRequestProperties;
@property (readonly) SSURLRequestProperties *_localProperties;
@property (readonly) NSString *downloadFileName;
@property (readonly) NSString *downloadPath;
@property (getter=isExternal, readonly) bool external;
@property (readonly) long long fileSize;
@property (readonly) NSString *finalizedPath;
@property (readonly) NSArray *sinfs;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setValuesMessage;
+ (id)assetWithURL:(id)arg1 type:(long long)arg2;

- (id)URLRequest;
- (id)URLRequestProperties;
- (id)_copyURLRequestProperties;
- (long long)_legacyAssetType;
- (id)_localProperties;
- (void)_resetLocalIVars;
- (long long)assetType;
- (long long)bytesDownloaded;
- (long long)bytesUploadTotal;
- (long long)bytesUploaded;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadFileName;
- (id)downloadPath;
- (long long)fileSize;
- (id)finalizedPath;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1 type:(long long)arg2;
- (id)initWithURLRequestProperties:(id)arg1;
- (bool)isExternal;
- (id)sinfs;

@end
