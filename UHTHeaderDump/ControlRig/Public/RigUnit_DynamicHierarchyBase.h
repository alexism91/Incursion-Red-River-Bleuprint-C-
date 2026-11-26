#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_DynamicHierarchyBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DynamicHierarchyBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_DynamicHierarchyBase();
};

