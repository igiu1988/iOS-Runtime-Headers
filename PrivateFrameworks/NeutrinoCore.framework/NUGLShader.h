/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLShader : NUGLObject {
    NSError * _compilationError;
    long long  _compilationStatus;
    NSString * _source;
    long long  _type;
}

@property (readonly) unsigned int glStage;
@property (readonly) unsigned int glType;
@property (readonly) NSString *source;
@property (readonly) long long type;

- (void).cxx_destruct;
- (void)_compile:(id)arg1;
- (bool)compile:(id)arg1 error:(out id*)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (unsigned int)glStage;
- (unsigned int)glType;
- (id)init;
- (id)initWithType:(long long)arg1 source:(id)arg2;
- (id)source;
- (long long)type;

@end
