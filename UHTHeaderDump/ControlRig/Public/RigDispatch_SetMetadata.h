#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_MetadataBase.h"
#include "RigDispatch_SetMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_SetMetadata();
};

