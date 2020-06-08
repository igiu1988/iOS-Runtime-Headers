/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADLayoutOptions : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _reorientedContainerSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic) struct CGSize { double x1; double x2; } reorientedContainerSize;

// Image: /System/Library/Frameworks/iAd.framework/iAd

- (struct CGSize { double x1; double x2; })containerSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })reorientedContainerSize;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReorientedContainerSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (id)_initWithContainerSize:(struct CGSize { double x1; double x2; })arg1;

@end
