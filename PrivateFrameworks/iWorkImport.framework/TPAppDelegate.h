/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPAppDelegate : TSABaseApplicationDelegate {
    bool  _appDoneLaunching;
    bool  _cachedBidiIsSupported;
}

@property (nonatomic, readonly) NSArray *rtfDocumentTypes;
@property (nonatomic, readonly) NSArray *textDocumentTypes;
@property (nonatomic, readonly) NSArray *wordDocumentTypes;

+ (id)sharedDelegate;

- (bool)URLIsValidForImportedHyperlink:(id)arg1 targetDocumentRoot:(id)arg2;
- (id)appChartPropertyOverrides;
- (id)applicationDisplayName;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (unsigned long long)applicationType;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (id)createCompatibilityDelegate;
- (void)customizeHyperlinkViewController:(id)arg1;
- (void)dealloc;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)equationEditorAPDID;
- (bool)imageGalleryCaptionsUsePlaceholderText;
- (id)importableDocumentTypes;
- (id)init;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (bool)openURL:(id)arg1 withDocumentRoot:(id)arg2;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerSOSClassTypeMappings;
- (id)rtfDocumentTypes;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForApplicationUpdateError;
- (id)stringForBoxCollaborationOptInMessage;
- (id)stringForCloseDocument;
- (id)stringForCloseDocumentConfirmationAlertMessage;
- (id)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
- (id)stringForCollaborationConnecting;
- (id)stringForCollaborationOffline;
- (id)stringForCollaborationOnline;
- (id)stringForCollaborator1_6ConflictDetails;
- (id)stringForCollaborator1_6ConflictWithKeepDetails;
- (id)stringForCollaboratorConflict;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForCouldntCreatePDFTitle;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForDocumentViewOnly;
- (id)stringForDocumentViewOnlyMessage;
- (id)stringForDocumentViewOnlyTitle;
- (id)stringForEquationChoiceBody;
- (id)stringForEquationChoiceTitle;
- (id)stringForEquationChoiceUseEQKitButtonTitle;
- (id)stringForGenericServerUnreachable;
- (id)stringForICloudUnreachable;
- (id)stringForLearnMoreSharingURL;
- (id)stringForOwnerHasCollabEnabledMessage;
- (id)stringForOwnerHasCollabEnabledTitle;
- (id)stringForOwnerPasswordOnConflictAlertMessage;
- (id)stringForOwnerPasswordOnConflictAlertTitle;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForRemoveLastPrivateParticipantAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationTitle;
- (id)stringForStopSharingAlertConfirmationMessage;
- (id)stringForStopSharingAlertConfirmationTitle;
- (id)stringForUpdatingDocumentWithoutServiceType;
- (id)stringForUserActivityTitleForFilename:(id)arg1;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)arg1;
- (bool)supportsAutosizingTextboxes;
- (bool)supportsInlineNativeEquationObjects;
- (bool)supportsLinkedTextBoxes;
- (bool)supportsRTL;
- (bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)textDocumentTypes;
- (bool)textInspectorShowsMoreSubpane;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;
- (id)wordDocumentTypes;

@end
