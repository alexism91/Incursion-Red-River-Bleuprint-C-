#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "IRRGraphSaveData.h"
#include "IRRMissionEventInterface.h"
#include "IRRMissionVariable.h"
#include "IRRGraphData.generated.h"

class UIRRMissionComponent;
class UIRRMissionGraph;
class UIRRMissionGraphNode;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRGraphData : public UIRRBaseObject, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRMissionGraph> MissionGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionComponent* MissionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UIRRMissionGraphNode>> ActiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ActiveNodesUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> NodeMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRMissionVariable> GraphMemory;
    
    UIRRGraphData();

    UFUNCTION(BlueprintCallable)
    void SetupGraph(TSoftObjectPtr<UIRRMissionGraph> InMissionGraph);
    
    UFUNCTION(BlueprintCallable)
    void InitGraph(UIRRMissionComponent* InMissionComponent, FIRRGraphSaveData InSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRGraphSaveData GetSaveData() const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateGraph();
    

    // Fix for true pure virtual functions not being implemented
};

