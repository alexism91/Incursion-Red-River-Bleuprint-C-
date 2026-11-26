#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangePipelineContextParams.h"
#include "InterchangePipelinePropertyStates.h"
#include "InterchangePipelineBase.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangeResultsContainer;
class UInterchangeSourceData;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangePipelineBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestinationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentImportPath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowPropertyStatesEdition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReimportContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShowEssentials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromReimportOrOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeResultsContainer* Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInterchangePipelinePropertyStates> PropertiesStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FInterchangePipelinePropertyStates> CachePropertiesStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInterchangePipelineContextParams CacheContextParam;
    
public:
    UInterchangePipelineBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportReimport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, const int32 SourceFileIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString ScriptedGetPipelineDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePostImportPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePostFactoryPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePostBroadcastPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<UInterchangeSourceData*>& SourceDatas, const FString& ContentBasePath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer);
    
    UFUNCTION(BlueprintCallable)
    bool IsReimportContext();
    
    UFUNCTION(BlueprintCallable)
    FInterchangePipelinePropertyStates FindOrAddPropertyStates(const FName PropertyPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPropertyStatesExist(const FName PropertyPath) const;
    
};

