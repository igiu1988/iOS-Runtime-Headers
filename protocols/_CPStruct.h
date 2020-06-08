/* Generated by RuntimeBrowser.
 */

@protocol _CPStruct <NSObject>

@required

- (bool)getIntKeyFields:(id*)arg1 forKey:(int)arg2;
- (bool)getStringKeyFields:(id*)arg1 forKey:(NSString *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSDictionary *)intKeyFields;
- (NSData *)jsonData;
- (void)setIntKeyFields:(NSDictionary *)arg1;
- (void)setIntKeyFields:(_CPValue *)arg1 forKey:(int)arg2;
- (void)setStringKeyFields:(NSDictionary *)arg1;
- (void)setStringKeyFields:(_CPValue *)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)stringKeyFields;

@end
