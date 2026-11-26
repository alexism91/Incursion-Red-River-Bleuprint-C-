#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_MetadataBase.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_MetadataBase : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_MetadataBase();
};

