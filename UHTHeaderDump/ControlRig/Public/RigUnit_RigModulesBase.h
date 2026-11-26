#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_RigModulesBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_RigModulesBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_RigModulesBase();
};

