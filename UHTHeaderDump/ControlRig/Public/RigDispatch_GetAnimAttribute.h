#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_AnimAttributeBase.h"
#include "RigDispatch_GetAnimAttribute.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_GetAnimAttribute();
};

