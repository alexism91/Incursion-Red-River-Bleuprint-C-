#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_ComponentBase.h"
#include "RigDispatch_GetComponentContent.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_GetComponentContent : public FRigDispatch_ComponentBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_GetComponentContent();
};

