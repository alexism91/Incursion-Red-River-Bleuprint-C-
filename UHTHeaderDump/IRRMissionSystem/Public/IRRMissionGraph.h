#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GenericGraphRuntime -ObjectName=GenericGraph -FallbackName=GenericGraph
#include "IRRMissionVariable.h"
#include "IRRMissionGraph.generated.h"

class UIRRMissionGraphNode;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionGraph : public UGenericGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRMissionVariable> GraphMemory;
    
    UIRRMissionGraph();

    UFUNCTION(BlueprintCallable)
    UIRRMissionGraphNode* GetRootNode();
    
    UFUNCTION(BlueprintCallable)
    UIRRMissionGraphNode* GetMissionGraphNodeByUID(FGuid UID);
    
};

