#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_ComponentBase.h"
#include "RigDispatch_SpawnTopLevelComponent.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SpawnTopLevelComponent : public FRigDispatch_ComponentBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SpawnTopLevelComponent();
};

