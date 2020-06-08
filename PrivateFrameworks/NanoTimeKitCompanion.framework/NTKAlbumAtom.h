/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlbumAtom : NSObject {
    NSDate * _date;
    NSString * _identifier;
    UIImage * _image;
    unsigned long long  _index;
    NPTOPhoto * _photo;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long index;
@property (nonatomic, readonly) NPTOPhoto *photo;

- (void).cxx_destruct;
- (id)date;
- (id)identifier;
- (id)image;
- (unsigned long long)index;
- (id)initWithPhoto:(id)arg1;
- (id)photo;
- (void)setImage:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
