/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _acceleration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceAcceleration;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _referenceOffset;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } acceleration;

- (struct UIOffset { double x1; double x2; })acceleratedOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg1 accelerationBoostFactor:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })acceleration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setAcceleration:(struct CGPoint { double x1; double x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { double x1; double x2; })arg2;

@end
