#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_RigModulesBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_RigModulesBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_RigModulesBaseMutable();
};

