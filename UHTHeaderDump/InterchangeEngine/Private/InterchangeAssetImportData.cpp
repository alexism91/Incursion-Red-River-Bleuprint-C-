#include "InterchangeAssetImportData.h"

UInterchangeAssetImportData::UInterchangeAssetImportData() {
    this->NodeContainer = NULL;
    this->TransientNodeContainer = NULL;
    this->TransientTranslatorSettings = NULL;
}

void UInterchangeAssetImportData::SetTranslatorSettings(UInterchangeTranslatorSettings* TranslatorSettings) const {
}

void UInterchangeAssetImportData::SetPipelines(const TArray<UObject*>& InPipelines) {
}

void UInterchangeAssetImportData::SetNodeContainer(UInterchangeBaseNodeContainer* InNodeContainer) const {
}

FString UInterchangeAssetImportData::ScriptGetFirstFilename() const {
    return TEXT("");
}

TArray<FString> UInterchangeAssetImportData::ScriptExtractFilenames() const {
    return TArray<FString>();
}

TArray<FString> UInterchangeAssetImportData::ScriptExtractDisplayLabels() const {
    return TArray<FString>();
}

UInterchangeTranslatorSettings* UInterchangeAssetImportData::GetTranslatorSettings() const {
    return NULL;
}

UInterchangeBaseNode* UInterchangeAssetImportData::GetStoredNode(const FString& InNodeUniqueId) const {
    return NULL;
}

UInterchangeFactoryBaseNode* UInterchangeAssetImportData::GetStoredFactoryNode(const FString& InNodeUniqueId) const {
    return NULL;
}

TArray<UObject*> UInterchangeAssetImportData::GetPipelines() const {
    return TArray<UObject*>();
}

int32 UInterchangeAssetImportData::GetNumberOfPipelines() const {
    return 0;
}

UInterchangeBaseNodeContainer* UInterchangeAssetImportData::GetNodeContainer() const {
    return NULL;
}


