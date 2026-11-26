#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_AnimAttributeBase.h"
#include "RigDispatch_SetAnimAttribute.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SetAnimAttribute();
};

