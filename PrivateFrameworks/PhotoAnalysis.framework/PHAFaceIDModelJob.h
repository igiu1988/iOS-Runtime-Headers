/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAFaceIDModelJob : PHAWorkerJob {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    bool  _done;
    PHAVisionServiceFaceProcessingWorker * _faceProcessingWorker;
    unsigned long long  _jobScenario;
    NSProgress * _progress;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property bool done;
@property (nonatomic, retain) PHAVisionServiceFaceProcessingWorker *faceProcessingWorker;
@property unsigned long long jobScenario;
@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (id)backgroundQueue;
- (float)completionScore;
- (bool)done;
- (id)faceProcessingWorker;
- (bool)finished;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (unsigned long long)jobScenario;
- (id)progress;
- (void)setBackgroundQueue:(id)arg1;
- (void)setDone:(bool)arg1;
- (void)setFaceProcessingWorker:(id)arg1;
- (void)setJobScenario:(unsigned long long)arg1;
- (void)setProgress:(id)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;

@end
