/* Generated by RuntimeBrowser.
 */

@protocol XCTElementSnapshotAttributeDataSource <NSObject>

@required

- (bool)allowsRemoteAccess;
- (NSDictionary *)attributesForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 error:(id*)arg3;
- (id)parameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3 error:(id*)arg4;
- (bool)supportsHostedViewCoordinateTransformations;
- (bool)usePointTransformationsForFrameConversions;

@end
