#pragma once
#include "CoreMinimal.h"
#include "RigUnit_RigModulesBase.h"
#include "RigUnit_GetModuleName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetModuleName : public FRigUnit_RigModulesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Module;
    
    CONTROLRIG_API FRigUnit_GetModuleName();
};

