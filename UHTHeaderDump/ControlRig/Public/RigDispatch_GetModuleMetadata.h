#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_GetMetadata.h"
#include "RigDispatch_GetModuleMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_GetModuleMetadata : public FRigDispatch_GetMetadata {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_GetModuleMetadata();
};

