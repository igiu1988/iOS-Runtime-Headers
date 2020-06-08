/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRMonogram : NSObject {
    UIColor * _color;
    unsigned long long  _fontIndex;
    NSString * _text;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) unsigned long long fontIndex;
@property (nonatomic, copy) NSString *text;

+ (id)_defaultMonogramColor;
+ (id)_fontSpecs;
+ (unsigned long long)countOfFonts;
+ (id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2;
+ (double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2;
+ (id)monogram;
+ (id)monogramColors;
+ (id)monogramWithData:(id)arg1;
+ (id)plateFlatColor;
+ (id)plateGradientEndColor;
+ (id)plateGradientStartColor;
+ (id)plateOverlayLayer;
+ (id)plateSelectedActiveColor;
+ (id)plateSelectedActiveTextColor;
+ (id)plateSelectedInactiveColor;
+ (void)updatePlateOverlayLayer:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithData:(id)arg1;
- (bool)_renderTextInContext:(struct CGContext { }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_takeValuesFromDataRepresentation:(id)arg1;
- (id)color;
- (id)dataRepresentation;
- (id)description;
- (unsigned long long)fontIndex;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (void)setFontIndexToUnsupportedValue;
- (void)setText:(id)arg1;
- (id)snapshotWithOptions:(id)arg1;
- (id)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (id)stringAttributesForDiameter:(double)arg1;
- (id)text;

@end
