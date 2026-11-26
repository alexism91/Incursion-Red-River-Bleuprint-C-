#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_ComponentBase.h"
#include "RigDispatch_GetTopLevelComponentContent.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_GetTopLevelComponentContent : public FRigDispatch_ComponentBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_GetTopLevelComponentContent();
};

