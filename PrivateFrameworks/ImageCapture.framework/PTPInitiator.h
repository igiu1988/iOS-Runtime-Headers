/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitiator : NSObject {
    unsigned int  _ObjectLimit;
    NSString * _UUIDString;
    NSMutableDictionary * _arrayOf64BitFileSizes;
    bool  _cancelOp;
    unsigned int  _contentCatalogPercentCompleted;
    double  _currentFDNoteTime;
    PTPWrappedBytes * _dataForTransaction;
    id  _delegate;
    PTPDeviceInfoDataset * _deviceInfo;
    bool  _deviceIsPairedWithThisHost;
    bool  _deviceIsPasscodeLocked;
    unsigned short  _deviceProductID;
    NSString * _deviceSerialNumberString;
    unsigned short  _deviceVendorID;
    NSObject<OS_dispatch_queue> * _enumerationQueue;
    unsigned int  _estimatedNumOfDownloadableObjects;
    PTPEventPacket * _event;
    NSMutableArray * _eventQueue;
    unsigned long long  _excessReceivedDataSize;
    unsigned long long  _icplState;
    unsigned int  _lastAddedObject;
    unsigned int  _maxMetadataBufferSize;
    char * _metadataBuffer;
    bool  _needToReopenSession;
    unsigned int  _numOfDownloadableObjectsPlusFolders;
    unsigned short  _operationCode;
    bool  _requestPending;
    PTPOperationResponsePacket * _response;
    bool  _responseReceived;
    bool  _sessionOpen;
    NSMutableArray * _storages;
    unsigned long long  _totalFDFileSize;
    unsigned long long  _totalFDReceivedSize;
    unsigned int  _totalFDReportedProgress;
    unsigned int  _transactionID;
    PTPTransport * _transport;
    NSString * _userAssignedDeviceName;
}

- (id)UUIDString;
- (bool)allowKeepAwake;
- (void)appendDataBuffer:(void*)arg1 length:(unsigned long long)arg2;
- (long long)aptpRequestDataForFiles:(id)arg1 maxSize:(unsigned int)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4 forOperation:(unsigned int)arg5;
- (id)aptpRetrieveDataForFiles:(unsigned short)arg1 maxSize:(unsigned int)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (void)cancel;
- (bool)closeSession;
- (unsigned int)contentCatalogPercentCompleted;
- (id)dataFromFile:(id)arg1 maxSize:(unsigned int)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (void)dealloc;
- (bool)deleteFile:(id)arg1;
- (id)deviceDateTime;
- (id)deviceInfo;
- (bool)deviceIsPairedWithThisHost;
- (bool)deviceIsPasscodeLocked;
- (unsigned short)deviceProductID;
- (id)devicePropertyDescDatasetForProperty:(unsigned short)arg1;
- (id)devicePropertyValueForProperty:(unsigned short)arg1;
- (void)deviceReset;
- (id)deviceSerialNumberString;
- (unsigned short)deviceStatus;
- (unsigned short)deviceVendorID;
- (id)fileSystemManifestForStorage:(unsigned int)arg1 objectFormatCode:(unsigned int)arg2 association:(unsigned int)arg3;
- (void)handleCancel:(id)arg1;
- (void)handleData:(id)arg1;
- (void)handleDeviceRemoval;
- (void)handleEvent:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)handleReroutedEvent:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleStartData:(id)arg1;
- (id)initWithHostLocationID:(unsigned int)arg1;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned int)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6;
- (bool)initiateCapture;
- (id)initiator;
- (bool)isAccessRestrictedAppleDevice;
- (bool)isApplePTPCapable;
- (bool)isICloudPhotosEnabled;
- (void)issueCancelEvent:(unsigned int)arg1;
- (void)issueCancelRequest:(unsigned int)arg1;
- (unsigned int)maxMetadataBufferSize;
- (char *)metadataBuffer;
- (id)metadataFromFile:(id)arg1;
- (unsigned int)numObjectsInStorage:(unsigned int)arg1 objectFormatCode:(unsigned int)arg2 association:(unsigned int)arg3;
- (unsigned int)numOfDownloadableObjectsPlusFolders;
- (unsigned long long)objectCompressedSize64:(unsigned int)arg1;
- (id)objectHandlesInStorage:(unsigned int)arg1 objectFormatCode:(unsigned int)arg2 association:(unsigned int)arg3;
- (id)objectInfo:(unsigned int)arg1;
- (id)objectInfoDatasetForObjectsInStorage:(unsigned int)arg1 objectFormatCode:(unsigned int)arg2 association:(unsigned int)arg3 contentType:(int)arg4;
- (bool)openSession;
- (id)partialDataFromFile:(id)arg1 fromOffset:(unsigned int)arg2 maxSize:(unsigned int)arg3 actualSize:(unsigned int*)arg4 useBuffer:(char *)arg5;
- (void)processUnhandledEvents;
- (bool)readStorages;
- (id)refreshAssignedDeviceName;
- (bool)requestPending;
- (bool)resetDevicePropertyValueForProperty:(unsigned short)arg1;
- (unsigned short)saveFile:(id)arg1 to:(id)arg2;
- (unsigned short)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4;
- (unsigned short)savePartialFileMD5:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4;
- (bool)sendHostMediaCapabilities;
- (void)sendProgressNotificationForObject:(unsigned long long)arg1 downloadedBytes:(unsigned long long)arg2 percentComplete:(double)arg3;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long*)arg3 timeout:(double)arg4;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned int)arg3 excessReceivedDataSize:(unsigned long long*)arg4 timeout:(double)arg5;
- (id)sendRequest:(id)arg1 andSendData:(id)arg2;
- (id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long*)arg2 timeout:(double)arg3;
- (void)sentData:(id)arg1;
- (void)sentData:(id)arg1 responseCode:(id)arg2;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setDeviceDateTime:(id)arg1;
- (bool)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2;
- (bool)start;
- (void)stop;
- (id)storageForStorageID:(unsigned int)arg1;
- (id)storageIDs;
- (id)storageInfo:(unsigned int)arg1;
- (id)thumbDataFromFile:(id)arg1 maxSize:(unsigned int)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (id)thumbDataFromFile:(id)arg1 width:(unsigned int)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (double)timeOffset;
- (void)transferObject:(id)arg1;
- (id)transport;
- (void)transportActivated;
- (int)transportConnectionStatus;
- (void)transportDeactivated;
- (id)userAssignedDeviceName;
- (bool)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2;

@end
