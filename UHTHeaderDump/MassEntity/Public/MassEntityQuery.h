#pragma once
#include "CoreMinimal.h"
#include "MassFragmentRequirements.h"
#include "MassEntityQuery.generated.h"

USTRUCT(BlueprintType)
struct FMassEntityQuery : public FMassFragmentRequirements {
    GENERATED_BODY()
public:
    MASSENTITY_API FMassEntityQuery();
};

