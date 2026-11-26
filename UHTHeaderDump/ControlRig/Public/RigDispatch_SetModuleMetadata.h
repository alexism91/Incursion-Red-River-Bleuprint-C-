#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_SetMetadata.h"
#include "RigDispatch_SetModuleMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SetModuleMetadata : public FRigDispatch_SetMetadata {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SetModuleMetadata();
};

