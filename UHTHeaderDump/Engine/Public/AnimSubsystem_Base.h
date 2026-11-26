#pragma once
#include "CoreMinimal.h"
#include "AnimSubsystem.h"
#include "AnimSubsystem_Base.generated.h"

USTRUCT(BlueprintType)
struct FAnimSubsystem_Base : public FAnimSubsystem {
    GENERATED_BODY()
public:
    ENGINE_API FAnimSubsystem_Base();
};

