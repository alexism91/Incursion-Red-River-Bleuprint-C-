#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_ComponentBase.h"
#include "RigDispatch_SpawnComponent.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SpawnComponent : public FRigDispatch_ComponentBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SpawnComponent();
};

