/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintInteractionControllerInternals : NSObject {
    UIPrintInfo * _activePrintInfo;
    long long  _currentPage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentRange;
    UIPrintPageRenderer * _formatterRenderer;
    bool  _manualPrintPageEnabled;
    long long  _pageCount;
    long long  _pageCountWithRanges;
    NSArray * _pageRanges;
    long long  _pagesDrawn;
    UIPrintPaper * _paper;
    NSMutableSet * _previewStates;
    int  _printInfoState;
    UIPrintPanelViewController * _printPanelViewController;
    PKPrintSettings * _printSettings;
    PKPrinter * _printer;
    UIPrintingProgress * _printingProgress;
    NSURL * _saveFileURL;
    bool  _supressNotifyDismissed;
    NSURL * _tempPreviewFileURL;
}

@property long long pageCount;
@property long long pageCountWithRanges;
@property (retain) NSArray *pageRanges;
@property (retain) UIPrintPaper *paper;
@property (retain) NSMutableSet *previewStates;
@property (retain) PKPrinter *printer;
@property (retain) NSURL *tempPreviewFileURL;

- (void).cxx_destruct;
- (id)init;
- (long long)pageCount;
- (long long)pageCountWithRanges;
- (id)pageRanges;
- (id)paper;
- (id)previewStates;
- (id)printer;
- (void)setPageCount:(long long)arg1;
- (void)setPageCountWithRanges:(long long)arg1;
- (void)setPageRanges:(id)arg1;
- (void)setPaper:(id)arg1;
- (void)setPreviewStates:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setTempPreviewFileURL:(id)arg1;
- (id)tempPreviewFileURL;

@end
