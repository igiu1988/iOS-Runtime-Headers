/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusRegionMapSnapshot : NSObject <NSCopying> {
    bool  _clipToSnapshotRect;
    bool  _committed;
    NSMutableArray * _detectedFocusContainerGuideMapEntries;
    NSMutableArray * _detectedFocusableGuideMapEntries;
    NSMutableArray * _detectedFocusableViewMapEntries;
    bool  _didSetRegionClipFrame;
    NSArray * _finalFocusableRegionMapEntries;
    unsigned long long  _focusHeading;
    UIView * _focusableRegionAncestorView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focusedRect;
    bool  _isFocusedRectEmpty;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mapEntriesFrame;
    bool  _privateSnaphot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionClipFrame;
    _UIFocusRegionMapSnapshotRequest * _request;
    NSMutableArray * _retainedPromiseRegions;
    UIView * _rootView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshottedRect;
    NSArray * _sortedFocusContainerGuideMapEntries;
    UIImage * _visualRepresentation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visualRepresentationMinimumArea;
    struct CGPoint { 
        double x; 
        double y; 
    }  _visualRepresentationScreenCenter;
}

@property (nonatomic, readonly, copy) NSArray *allFocusableRegionMapEntries;
@property (nonatomic) bool clipToSnapshotRect;
@property (getter=isCommitted, nonatomic) bool committed;
@property (nonatomic, retain) NSMutableArray *detectedFocusContainerGuideMapEntries;
@property (nonatomic, retain) NSMutableArray *detectedFocusableGuideMapEntries;
@property (nonatomic, retain) NSMutableArray *detectedFocusableViewMapEntries;
@property (nonatomic, copy) NSArray *finalFocusableRegionMapEntries;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) UIView *focusableRegionAncestorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusedRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mapEntriesFrame;
@property (getter=isPrivateSnapshot, nonatomic) bool privateSnaphot;
@property (nonatomic, readonly, copy) _UIFocusRegionMapSnapshotRequest *request;
@property (nonatomic, retain) NSMutableArray *retainedPromiseRegions;
@property (nonatomic, readonly) UIView *rootView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshottedRect;
@property (nonatomic, copy) NSArray *sortedFocusContainerGuideMapEntries;
@property (nonatomic, readonly) UIImage *visualRepresentation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visualRepresentationMinimumArea;
@property (nonatomic) struct CGPoint { double x1; double x2; } visualRepresentationScreenCenter;

+ (id)combinedVisualRepresentationForSnapshots:(id)arg1 scaleFactor:(double)arg2;

- (void).cxx_destruct;
- (void)_addFocusContainerGuide:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_addFocusableRegion:(id)arg1 isFocusGuide:(bool)arg2 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedRegionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFocusGuide:(bool)arg2;
- (void)_commit;
- (void)_didChooseFocusCandidateRegion:(id)arg1;
- (id)_finalFocusableRegionMapEntriesFromMapEntries:(id)arg1;
- (id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)arg1 guideMapEntries:(id)arg2;
- (id)_initWithRequest:(id)arg1;
- (void)_occludeFocusInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_punchHoleInMap:(id)arg1 atFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_snapshotByFulfillingPromiseFocusRegionEntry:(id)arg1;
- (id)_sortedEligibleFocusContainerGuidesInArray:(id)arg1;
- (void)_updateFinalFocusableRegionMapEntries;
- (void)_updateSortedFocusContainerGuideMapEntries;
- (id)allFocusableRegionMapEntries;
- (bool)clipToSnapshotRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)detectedFocusContainerGuideMapEntries;
- (id)detectedFocusableGuideMapEntries;
- (id)detectedFocusableViewMapEntries;
- (id)finalFocusableRegionMapEntries;
- (unsigned long long)focusHeading;
- (id)focusableRegionAncestorView;
- (id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusedRect;
- (bool)isCommitted;
- (bool)isPrivateSnapshot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapEntriesFrame;
- (id)request;
- (id)retainedPromiseRegions;
- (id)rootView;
- (void)setClipToSnapshotRect:(bool)arg1;
- (void)setCommitted:(bool)arg1;
- (void)setDetectedFocusContainerGuideMapEntries:(id)arg1;
- (void)setDetectedFocusableGuideMapEntries:(id)arg1;
- (void)setDetectedFocusableViewMapEntries:(id)arg1;
- (void)setFinalFocusableRegionMapEntries:(id)arg1;
- (void)setFocusHeading:(unsigned long long)arg1;
- (void)setFocusableRegionAncestorView:(id)arg1;
- (void)setFocusedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPrivateSnaphot:(bool)arg1;
- (void)setRetainedPromiseRegions:(id)arg1;
- (void)setSortedFocusContainerGuideMapEntries:(id)arg1;
- (void)setVisualRepresentationMinimumArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisualRepresentationScreenCenter:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshottedRect;
- (id)sortedFocusContainerGuideMapEntries;
- (id)visualRepresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visualRepresentationMinimumArea;
- (struct CGPoint { double x1; double x2; })visualRepresentationScreenCenter;
- (id)visualRepresentationWithMinimumArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
