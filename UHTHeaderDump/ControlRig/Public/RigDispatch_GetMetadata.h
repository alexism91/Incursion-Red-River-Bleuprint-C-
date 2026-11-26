#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_MetadataBase.h"
#include "RigDispatch_GetMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_GetMetadata();
};

