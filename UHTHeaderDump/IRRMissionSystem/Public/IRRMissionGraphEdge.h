#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GenericGraphRuntime -ObjectName=GenericGraphEdge -FallbackName=GenericGraphEdge
#include "IRRMissionGraphEdge.generated.h"

class UIRRGraphCondition;
class UIRRGraphData;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionGraphEdge : public UGenericGraphEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRGraphCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAll;
    
    UIRRMissionGraphEdge();

    UFUNCTION(BlueprintCallable)
    bool EvaluateEdge(UIRRGraphData* Owner);
    
};

