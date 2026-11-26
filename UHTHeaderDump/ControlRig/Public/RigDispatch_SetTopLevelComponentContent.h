#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_ComponentBase.h"
#include "RigDispatch_SetTopLevelComponentContent.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SetTopLevelComponentContent : public FRigDispatch_ComponentBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SetTopLevelComponentContent();
};

