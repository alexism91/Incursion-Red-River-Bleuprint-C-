#pragma once
#include "CoreMinimal.h"
#include "RigTransformElement.h"
#include "RigSingleParentElement.generated.h"

USTRUCT(BlueprintType)
struct FRigSingleParentElement : public FRigTransformElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigSingleParentElement();
};

