#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNNode_TwoBranches -FallbackName=HTNNode_TwoBranches
#include "HTNNode_Repeat.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNNode_Repeat : public UHTNNode_TwoBranches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    UHTNNode_Repeat();

};

