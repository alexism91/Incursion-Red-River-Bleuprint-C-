#pragma once
#include "CoreMinimal.h"
#include "StateTreeConstantConsiderationInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConstantConsiderationInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Constant;
    
    STATETREEMODULE_API FStateTreeConstantConsiderationInstanceData();
};

