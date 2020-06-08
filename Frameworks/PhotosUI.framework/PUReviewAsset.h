/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewAsset : NSObject <PUCAMReviewAsset, PUEditableAsset, PXShareable> {
    bool  _HDR;
    PFAssetAdjustments * _assetAdjustments;
    NSString * _burstIdentifier;
    bool  _canPlayPhotoIris;
    NSDate * _creationDate;
    double  _duration;
    NSString * _identifier;
    bool  _livePhoto;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoDuration;
    bool  _livePhotoPlaceholder;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoSynchronizedDisplayTime;
    CLLocation * _location;
    unsigned long long  _mediaSubtypes;
    unsigned long long  _mediaType;
    NSDate * _modificationDate;
    unsigned long long  _numberOfRepresentedAssets;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    long long  _playbackStyle;
    long long  _playbackVariation;
    NSURL * _providedFullsizeImageURL;
    NSURL * _providedFullsizeRenderImageURL;
    NSURL * _providedFullsizeRenderVideoURL;
    NSDictionary * _providedImageMetadata;
    UIImage * _providedPreviewImage;
    NSURL * _providedVideoURL;
    bool  _representsBurst;
    bool  _requiresConfidentiality;
    AVAsset * providedAVAsset;
    AVAudioMix * providedAudioMix;
    PHLivePhoto * providedLivePhoto;
}

@property (getter=isHDR, nonatomic, readonly) bool HDR;
@property (getter=isAdjusted, nonatomic, readonly) bool adjusted;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) PFAssetAdjustments *assetAdjustments;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) bool canPlayLoopingVideo;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (getter=isContentAdjustmentAllowed, nonatomic, readonly) bool contentAdjustmentAllowed;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) bool hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (getter=isHighFramerateVideo, nonatomic, readonly) bool highFramerateVideo;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *imageProperties;
@property (getter=isInPlaceVideoTrimAllowed, nonatomic, readonly) bool inPlaceVideoTrimAllowed;
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) bool isTemporaryPlaceholder;
@property (getter=isLivePhoto, nonatomic, readonly) bool livePhoto;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoDuration;
@property (getter=isLivePhotoPlaceholder, nonatomic, readonly) bool livePhotoPlaceholder;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoSynchronizedDisplayTime;
@property (getter=isLivePhotoVisibilityAdjustmentAllowed, nonatomic, readonly) bool livePhotoVisibilityAdjustmentAllowed;
@property (nonatomic, readonly) unsigned long long livePhotoVisibilityState;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) int originalEXIFOrientation;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) unsigned long long originalResourceChoice;
@property (nonatomic, readonly, copy) NSString *pathForOriginalImageFile;
@property (nonatomic, readonly, copy) NSString *pathForOriginalVideoFile;
@property (nonatomic, readonly, copy) NSString *pathForTrimmedVideoFile;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) AVAsset *providedAVAsset;
@property (nonatomic, readonly) AVAudioMix *providedAudioMix;
@property (nonatomic, readonly) NSURL *providedFullsizeImageURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderImageURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderVideoURL;
@property (nonatomic, readonly) NSDictionary *providedImageMetadata;
@property (nonatomic, readonly) PHLivePhoto *providedLivePhoto;
@property (nonatomic, readonly) UIImage *providedPreviewImage;
@property (nonatomic, readonly) NSURL *providedVideoURL;
@property (nonatomic, readonly) bool representsBurst;
@property (nonatomic, readonly) bool requiresConfidentiality;
@property (getter=isResourceDownloadPossible, nonatomic, readonly) bool resourceDownloadPossible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) PFVideoAVObjectBuilder *videoObjectBuilder;

+ (unsigned long long)_confidentialityWarningsVersionForAdjustments:(id)arg1;
+ (bool)_shouldCheckConfidentiality;
+ (bool)_shouldShowConfidentialityWarningForAdjustments:(id)arg1;
+ (bool)_shouldShowConfidentialityWarningForMetadata:(id)arg1 creationDate:(id)arg2;
+ (id)createUniqueMediaDirectoryForAssetWithIdentifier:(id)arg1;
+ (id)fileURLForAdjustmentsInDirectory:(id)arg1;
+ (id)fileURLForFullsizeImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeRenderVideoInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoInDirectory:(id)arg1 extension:(id)arg2;

- (void).cxx_destruct;
- (id)_ensureLinkDestinationDirectoryFromBaseDirectory:(id)arg1;
- (bool)_linkFileAtURL:(id)arg1 toURL:(id)arg2;
- (void)_removeFileAtURL:(id)arg1;
- (id)_uniqueDestinationURLForFileURL:(id)arg1 inDirectory:(id)arg2;
- (id)adjustmentOutputForInputBaseVersion:(long long)arg1 withLivePhotoSupport:(bool)arg2;
- (double)aspectRatio;
- (id)assetAdjustments;
- (id)burstIdentifier;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (int)exifOrientationForImageVersion:(long long)arg1;
- (bool)hasPhotoColorAdjustments;
- (id)identifier;
- (id)imageProperties;
- (id)initWithAVAsset:(id)arg1 audioMix:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 captureDate:(id)arg5 duration:(double)arg6 previewImage:(id)arg7 videoURL:(id)arg8 adjustments:(id)arg9 identifier:(id)arg10;
- (id)initWithConformingAsset:(id)arg1;
- (id)initWithLivePhoto:(id)arg1 fullsizeUnadjustedImageURL:(id)arg2 fullsizeUnadjustedVideoURL:(id)arg3 assetAdjustments:(id)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 captureDate:(id)arg7 metadata:(id)arg8 duration:(double)arg9 previewImage:(id)arg10 identifier:(id)arg11;
- (id)initWithPhoto:(id)arg1 mediaSubtypes:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 captureDate:(id)arg5 metadata:(id)arg6 burstIdentifier:(id)arg7 representedCount:(unsigned long long)arg8 fullsizeImageURL:(id)arg9 fullsizeUnadjustedImageURL:(id)arg10 assetAdjustments:(id)arg11 identifier:(id)arg12;
- (id)initWithReviewAsset:(id)arg1;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 pixelWidth:(unsigned long long)arg6 pixelHeight:(unsigned long long)arg7 assetAdjustments:(id)arg8 duration:(double)arg9;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 previewImage:(id)arg6 pixelWidth:(unsigned long long)arg7 pixelHeight:(unsigned long long)arg8 assetAdjustments:(id)arg9 duration:(double)arg10;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2 canPlayPhotoIris:(bool)arg3;
- (id)initWithReviewAsset:(id)arg1 primaryResourceURL:(id)arg2;
- (id)inputForAdjustmentWithMediaProvider:(id)arg1 canHandleAdjustments:(id /* block */)arg2;
- (bool)isAdjusted;
- (bool)isAnimatedImage;
- (bool)isContentAdjustmentAllowed;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (bool)isFavorite;
- (bool)isHDR;
- (bool)isHighFramerateVideo;
- (bool)isInPlaceVideoTrimAllowed;
- (bool)isLivePhoto;
- (bool)isLivePhotoPlaceholder;
- (bool)isLivePhotoVisibilityAdjustmentAllowed;
- (bool)isOriginalRaw;
- (bool)isPhotoIrisPlaceholder;
- (bool)isResourceDownloadPossible;
- (bool)isTemporaryPlaceholder;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoSynchronizedDisplayTime;
- (unsigned long long)livePhotoVisibilityState;
- (id)localizedGeoDescription;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (id)modificationDate;
- (unsigned long long)numberOfRepresentedAssets;
- (int)originalEXIFOrientation;
- (unsigned long long)originalFilesize;
- (unsigned long long)originalResourceChoice;
- (id)pathForOriginalImageFile;
- (id)pathForOriginalVideoFile;
- (id)pathForTrimmedVideoFile;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (id)primaryRenderedMediaURL;
- (id)providedAVAsset;
- (id)providedAudioMix;
- (id)providedFullsizeImageURL;
- (id)providedFullsizeRenderImageURL;
- (id)providedFullsizeRenderVideoURL;
- (id)providedImageMetadata;
- (id)providedImageURLForImageVersion:(long long)arg1;
- (id)providedLivePhoto;
- (id)providedPreviewImage;
- (id)providedVideoURL;
- (id)providedVideoURLForImageVersion:(long long)arg1;
- (id)providedVideoURLForVideoVersion:(long long)arg1;
- (void)removeAllFilesAtReferencedURLs;
- (bool)representsBurst;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)requiresConfidentiality;
- (id)reviewAssetRevertingAdjustments;
- (id)reviewAssetWithAdjustmentOutput:(id)arg1 adjustmentData:(id)arg2 formatIdentifier:(id)arg3 version:(id)arg4;
- (id)uniformTypeIdentifier;
- (id)uuid;
- (id)videoObjectBuilder;

@end
