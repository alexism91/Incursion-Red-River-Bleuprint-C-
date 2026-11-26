#include "InterchangePipelineConfigurationBase.h"

UInterchangePipelineConfigurationBase::UInterchangePipelineConfigurationBase() {
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowTestPlanConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer, UObject* ReimportAsset, bool bSceneImport, bool bReimport) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowScenePipelineConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowReimportPipelineConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer, UObject* ReimportAsset, bool bSceneImport) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowPipelineConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}


