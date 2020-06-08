/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMailActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIStateRestoring> {
    NSString * _autosaveIdentifier;
    struct { 
        unsigned int _hasManagedAccounts : 1; 
        unsigned int _hasUnmanagedAccounts : 1; 
    }  _canSendMail;
    bool  _canSendMailChecked;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _canSendMailLock;
    bool  _hasAnyAccount;
    bool  _hasValidAccountForSending;
    bool  _keyboardVisible;
    MFMailComposeViewController * _mailComposeViewController;
    NSString * _sourceApplicationBundleID;
    bool  _sourceIsManaged;
    NSString * _subject;
}

@property (nonatomic, retain) NSString *autosaveIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAnyAccount;
@property (nonatomic) bool hasValidAccountForSending;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keyboardVisible;
@property (nonatomic, retain) MFMailComposeViewController *mailComposeViewController;
@property (nonatomic, readonly) Class objectRestorationClass;
@property (nonatomic, readonly) <UIStateRestoring> *restorationParent;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (nonatomic) bool sourceIsManaged;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)applicationBundleID;

- (void).cxx_destruct;
- (id /* block */)_backgroundPreheatBlock;
- (id)_bundleIdentifierForActivityImageCreation;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; })_checkCanSendMail;
- (void)_cleanup;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (id)_mailDraftRestorationURL;
- (bool)_restoreDraft;
- (void)_saveDraft:(id)arg1;
- (void)_setMailSubject:(id)arg1;
- (id)_stateRestorationDraftIsAvailable;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)autosaveIdentifier;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)hasAnyAccount;
- (bool)hasValidAccountForSending;
- (id)init;
- (bool)keyboardVisible;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)mailComposeViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setHasAnyAccount:(bool)arg1;
- (void)setHasValidAccountForSending:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setMailComposeViewController:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setSubject:(id)arg1;
- (id)sourceApplicationBundleID;
- (bool)sourceIsManaged;
- (id)subject;

@end
