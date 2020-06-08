/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneAnchor : ARAnchor {
    long long  _alignment;
    void _center;
    long long  _classification;
    long long  _classificationStatus;
    void _extent;
    ARPlaneGeometry * _geometry;
    ARPatchGrid * _gridExtent;
    NSDictionary * _possibleClassifications;
    float  _uncertaintyAlongNormal;
    long long  _worldAlignmentRotation;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic) void center;
@property (nonatomic) long long classification;
@property (nonatomic) long long classificationStatus;
@property (nonatomic) void extent;
@property (nonatomic, retain) ARPlaneGeometry *geometry;
@property (nonatomic, retain) ARPatchGrid *gridExtent;
@property (nonatomic, copy) NSDictionary *possibleClassifications;
@property (nonatomic) float uncertaintyAlongNormal;
@property (nonatomic) long long worldAlignmentRotation;

+ (bool)isClassificationSupported;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)_hitTestFromOrigin:(void *)arg1 withDirection:(void *)arg2 usingExtent:(void *)arg3 usingGeometry:(void *)arg4; // needs 4 arg types, found 2: bool, bool
- (long long)alignment;
- (float)area;
- (void)center;
- (long long)classification;
- (long long)classificationStatus;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extent;
- (id)geometry;
- (id)gridExtent;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 alignment:(long long)arg3;
- (id)possibleClassifications;
- (void)setCenter;
- (void)setClassification:(long long)arg1;
- (void)setClassificationStatus:(long long)arg1;
- (void)setExtent;
- (void)setGeometry:(id)arg1;
- (void)setGridExtent:(id)arg1;
- (void)setPossibleClassifications:(id)arg1;
- (void)setUncertaintyAlongNormal:(float)arg1;
- (void)setWorldAlignmentRotation:(long long)arg1;
- (float)uncertaintyAlongNormal;
- (long long)worldAlignmentRotation;

@end
