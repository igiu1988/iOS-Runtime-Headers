/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _elements;
    NSString * _fromState;
    NSString * _toState;
}

@property (nonatomic, copy) NSArray *elements;
@property (nonatomic, copy) NSString *fromState;
@property (nonatomic, copy) NSString *toState;

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (double)duration;
- (id)elements;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setFromState:(id)arg1;
- (void)setToState:(id)arg1;
- (id)toState;

@end
