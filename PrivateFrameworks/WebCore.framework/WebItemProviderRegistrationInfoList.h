/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderRegistrationInfoList : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredPresentationSize;
    long long  _preferredPresentationStyle;
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    }  _representations;
    NSString * _suggestedName;
    NSData * _teamData;
}

@property (nonatomic, readonly) UIItemProvider *itemProvider;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredPresentationSize;
@property (nonatomic) long long preferredPresentationStyle;
@property (nonatomic, copy) NSString *suggestedName;
@property (nonatomic, copy) NSData *teamData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addData:(id)arg1 forType:(id)arg2;
- (void)addPromisedType:(id)arg1 fileCallback:(id /* block */)arg2;
- (void)addRepresentingObject:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateItems:(id /* block */)arg1;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemProvider;
- (unsigned long long)numberOfItems;
- (struct CGSize { double x1; double x2; })preferredPresentationSize;
- (long long)preferredPresentationStyle;
- (void)setPreferredPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPresentationStyle:(long long)arg1;
- (void)setSuggestedName:(id)arg1;
- (void)setTeamData:(id)arg1;
- (id)suggestedName;
- (id)teamData;

@end
