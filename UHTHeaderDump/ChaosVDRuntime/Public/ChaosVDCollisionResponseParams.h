#pragma once
#include "CoreMinimal.h"
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDCollisionResponseParams.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCollisionResponseParams : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    CHAOSVDRUNTIME_API FChaosVDCollisionResponseParams();
};

