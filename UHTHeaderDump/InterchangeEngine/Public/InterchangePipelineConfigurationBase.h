#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInterchangePipelineConfigurationDialogResult.h"
#include "InterchangeStackInfo.h"
#include "InterchangePipelineConfigurationBase.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangePipelineBase;
class UInterchangeSourceData;
class UInterchangeTranslatorBase;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangePipelineConfigurationBase : public UObject {
    GENERATED_BODY()
public:
    UInterchangePipelineConfigurationBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowTestPlanConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer, UObject* ReimportAsset, bool bSceneImport, bool bReimport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer, UObject* ReimportAsset, bool bSceneImport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData, UInterchangeTranslatorBase* Translator, UInterchangeBaseNodeContainer* BaseNodeContainer);
    
};

