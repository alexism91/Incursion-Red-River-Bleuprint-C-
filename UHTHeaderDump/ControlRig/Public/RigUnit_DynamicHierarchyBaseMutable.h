#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DynamicHierarchyBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_DynamicHierarchyBaseMutable();
};

