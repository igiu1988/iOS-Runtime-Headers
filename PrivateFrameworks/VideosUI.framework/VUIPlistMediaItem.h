/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating> {
    VUIPlistMediaDatabaseItem * _databaseItem;
}

@property (nonatomic, retain) VUIPlistMediaDatabaseItem *databaseItem;

- (void).cxx_destruct;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)coverArtImageIdentifier;
- (id)databaseItem;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)playedState;
- (id)previewFrameImageIdentifier;
- (id)seasonIdentifier;
- (id)seasonNumber;
- (id)seasonTitle;
- (void)setDatabaseItem:(id)arg1;
- (id)showIdentifier;
- (id)showTitle;

@end
