#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GenericGraphRuntime -ObjectName=GenericGraphNode -FallbackName=GenericGraphNode
#include "IRRMissionGraphNode.generated.h"

class UIRRGraphData;
class UIRRMissionEvent;
class UIRRMissionGraphNode;

UCLASS(Abstract, Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionGraphNode : public UGenericGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> EntryEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> ExitEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    UIRRMissionGraphNode();

    UFUNCTION(BlueprintCallable)
    void InitNode(UIRRGraphData* Owner, bool bReInit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetNodeGuid() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishNode(UIRRGraphData* Owner);
    
    UFUNCTION(BlueprintCallable)
    void FailNode(UIRRGraphData* Owner);
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateNode(UIRRGraphData* Owner, TArray<UIRRMissionGraphNode*>& Child);
    
};

