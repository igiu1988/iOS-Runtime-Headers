/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailFolderIcon : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _badgeSize;
    double  _bottomInset;
    UIImage * _desktopBadge;
    NSString * _desktopBadgeName;
    double  _dimension;
    UIImage * _documentsBadge;
    NSString * _documentsBadgeName;
    UIImage * _image;
    NSString * _imageName;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } badgeSize;
@property (nonatomic, readonly) double bottomInset;
@property (nonatomic, readonly) UIImage *desktopBadge;
@property (nonatomic, readonly) double dimension;
@property (nonatomic, readonly) UIImage *documentsBadge;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *imageName;

+ (id)darkFolderIcons;
+ (id)folderIconForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3;
+ (id)lightFolderIcons;

- (void).cxx_destruct;
- (id)badgeForFolderType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })badgeSize;
- (double)bottomInset;
- (id)desktopBadge;
- (double)dimension;
- (id)documentsBadge;
- (id)image;
- (id)imageName;
- (id)initWithImageName:(id)arg1 documentsBadgeName:(id)arg2 dekstopBadgeName:(id)arg3 badgeDimension:(double)arg4 badgeBottomInset:(double)arg5;
- (void)resolveImage;

@end
