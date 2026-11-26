#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_ComponentBase.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_ComponentBase : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_ComponentBase();
};

