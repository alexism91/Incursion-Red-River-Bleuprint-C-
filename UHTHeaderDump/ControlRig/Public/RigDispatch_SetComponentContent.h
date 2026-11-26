#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_ComponentBase.h"
#include "RigDispatch_SetComponentContent.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SetComponentContent : public FRigDispatch_ComponentBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SetComponentContent();
};

