/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

@interface QLServiceThumbnailRenderer : NSObject {
    id /* block */  _completionHandler;
    QLThumbnailReply * _reply;
    QLFileThumbnailRequest * _request;
    <QLThumbnailSurfaceGeneratorProtocol> * _surfaceGenerator;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) QLThumbnailReply *reply;
@property (nonatomic, retain) QLFileThumbnailRequest *request;
@property (nonatomic, retain) <QLThumbnailSurfaceGeneratorProtocol> *surfaceGenerator;

- (void).cxx_destruct;
- (bool)_canCreateContextOfSize:(struct CGSize { double x1; double x2; })arg1 forRequest:(id)arg2;
- (void)_didGenerateThumbnailWithData:(id)arg1 drawingContextSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_didReceiveIOSurface;
- (void)_didReceiveThumbnailURL:(id)arg1;
- (void)_drawInContextOfSize:(struct CGSize { double x1; double x2; })arg1 drawingBlock:(id /* block */)arg2;
- (void)_drawInCurrentContextOfSize:(struct CGSize { double x1; double x2; })arg1 drawingBlock:(id /* block */)arg2;
- (void)_executeCompletionHandlerWithThumbnailData:(id)arg1 thumbnailURL:(id)arg2 ioSurface:(id)arg3 drawingContextSize:(struct CGSize { double x1; double x2; })arg4 didGenerateThumbnail:(bool)arg5 error:(id)arg6;
- (id)_thumbnailDataDestructionConcurrenQueue;
- (void)_thumbnailGenerationDidFailWithError:(id)arg1;
- (id /* block */)completionHandler;
- (void)generateThumbnailAndPerformCompletionHandler;
- (id)initWithRequest:(id)arg1 reply:(id)arg2 completionHandler:(id /* block */)arg3 surfaceGenerator:(id)arg4;
- (id)reply;
- (id)request;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setReply:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSurfaceGenerator:(id)arg1;
- (id)surfaceGenerator;

@end
