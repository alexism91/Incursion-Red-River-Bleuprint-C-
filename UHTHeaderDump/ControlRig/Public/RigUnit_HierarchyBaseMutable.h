#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_HierarchyBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_HierarchyBaseMutable();
};

