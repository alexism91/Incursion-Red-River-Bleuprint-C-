#include "UsdProjectSettings.h"

UUsdProjectSettings::UUsdProjectSettings() {
    this->bLogUsdSdkErrors = true;
    this->bOptimizeUsdLog = true;
    this->bShowCreateDefaultAssetCacheDialog = true;
    this->bShowConfirmationWhenClearingLayers = true;
    this->bShowConfirmationWhenMutingDirtyLayers = true;
    this->bShowConfirmationWhenReloadingDirtyLayers = true;
    this->bShowOverriddenOpinionsWarning = true;
    this->EditInInstanceableBehavior = EUsdEditInInstanceBehavior::ShowPrompt;
    this->ReferencerTypeHandling = EReferencerTypeHandling::ClearReferencerType;
    this->bShowWarningOnIncompleteDuplication = true;
    this->bShowTransformOnCameraComponentWarning = true;
    this->bShowTransformTrackOnCameraComponentWarning = true;
    this->bShowSubsectionSnappingWarning = true;
    this->bShowInheritedVisibilityWarning = true;
    this->ShowSaveLayersDialogWhenSaving = EUsdSaveDialogBehavior::ShowPrompt;
    this->ShowSaveLayersDialogWhenClosing = EUsdSaveDialogBehavior::ShowPrompt;
}


