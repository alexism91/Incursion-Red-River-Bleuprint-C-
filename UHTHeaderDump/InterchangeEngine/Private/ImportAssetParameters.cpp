#include "ImportAssetParameters.h"

FImportAssetParameters::FImportAssetParameters() {
    this->ReimportAsset = NULL;
    this->ReimportSourceIndex = 0;
    this->bIsAutomated = false;
    this->bFollowRedirectors = false;
    this->ImportLevel = NULL;
    this->bReplaceExisting = false;
    this->bForceShowDialog = false;
}

