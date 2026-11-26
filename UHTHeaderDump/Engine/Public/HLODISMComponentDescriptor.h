#pragma once
#include "CoreMinimal.h"
#include "ISMComponentDescriptor.h"
#include "HLODISMComponentDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FHLODISMComponentDescriptor : public FISMComponentDescriptor {
    GENERATED_BODY()
public:
    ENGINE_API FHLODISMComponentDescriptor();
};

