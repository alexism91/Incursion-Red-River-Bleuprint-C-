#pragma once
#include "CoreMinimal.h"
#include "RigBaseElement.h"
#include "RigTransformElement.generated.h"

USTRUCT(BlueprintType)
struct FRigTransformElement : public FRigBaseElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigTransformElement();
};

