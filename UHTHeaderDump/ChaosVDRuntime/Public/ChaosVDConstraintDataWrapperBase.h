#pragma once
#include "CoreMinimal.h"
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDConstraintDataWrapperBase.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDConstraintDataWrapperBase : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    CHAOSVDRUNTIME_API FChaosVDConstraintDataWrapperBase();
};

