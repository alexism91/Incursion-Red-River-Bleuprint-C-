#include "InterchangePipelineBase.h"

UInterchangePipelineBase::UInterchangePipelineBase() {
    this->bAllowPropertyStatesEdition = true;
    this->bIsReimportContext = false;
    this->bIsShowEssentials = false;
    this->bFromReimportOrOverride = false;
    this->Results = NULL;
}

bool UInterchangePipelineBase::SupportReimport() const {
    return false;
}

void UInterchangePipelineBase::ScriptedSetReimportSourceIndex_Implementation(UClass* ReimportObjectClass, const int32 SourceFileIndex) {
}

FString UInterchangePipelineBase::ScriptedGetPipelineDisplayName_Implementation() const {
    return TEXT("");
}

void UInterchangePipelineBase::ScriptedExecutePostImportPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport) {
}

void UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport) {
}

void UInterchangePipelineBase::ScriptedExecutePostBroadcastPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport) {
}

void UInterchangePipelineBase::ScriptedExecutePipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<UInterchangeSourceData*>& SourceDatas, const FString& ContentBasePath) {
}

void UInterchangePipelineBase::ScriptedExecuteExportPipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer) {
}

bool UInterchangePipelineBase::IsReimportContext() {
    return false;
}

FInterchangePipelinePropertyStates UInterchangePipelineBase::FindOrAddPropertyStates(const FName PropertyPath) {
    return FInterchangePipelinePropertyStates{};
}

bool UInterchangePipelineBase::DoesPropertyStatesExist(const FName PropertyPath) const {
    return false;
}


