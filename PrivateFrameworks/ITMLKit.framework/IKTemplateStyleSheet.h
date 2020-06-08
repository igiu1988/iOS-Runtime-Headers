/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTemplateStyleSheet : NSObject <NSCopying> {
    NSMutableDictionary * _styleComposersByKeypath;
    IKStyleFactory * _styleFactory;
    NSString * _templateName;
    NSDictionary * _templateTree;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *styleComposersByKeypath;
@property (nonatomic, readonly, retain) IKStyleFactory *styleFactory;
@property (nonatomic, readonly, copy) NSString *templateName;
@property (nonatomic, readonly, copy) NSDictionary *templateTree;

+ (void)_coalesceTrees:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 overridingTree:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 forcedTemplateName:(id)arg3;
+ (void)_findNodesInXmlTree:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 styleNode:(struct _xmlNode {}**)arg2 templateNode:(struct _xmlNode {}**)arg3;
+ (void)_resolveEmbeddedTemplatesInXmlTree:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)_styleSheetForTemplateName:(id)arg1;
+ (id)_templateTreeNodeWithXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parentNode:(id)arg2;
+ (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)_xmlTreeForTemplateName:(id)arg1;
+ (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)_xmlTreeWithData:(id)arg1 error:(id*)arg2;
+ (void)loadStyleSheets;
+ (void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2;
+ (void)registerStyleSheetURL:(id)arg1 parentStyleSheets:(id)arg2 forTemplateName:(id)arg3;
+ (id)styleSheetForTemplateName:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithXMLDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 templateName:(id)arg2 error:(id*)arg3;
- (id)_styleComposerForNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setViewElementStylesDirty;
- (id)styleComposerForElement:(id)arg1;
- (id)styleComposersByKeypath;
- (id)styleFactory;
- (id)templateName;
- (id)templateTree;

@end
