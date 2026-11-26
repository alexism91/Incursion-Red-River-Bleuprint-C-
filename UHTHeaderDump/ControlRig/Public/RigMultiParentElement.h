#pragma once
#include "CoreMinimal.h"
#include "RigTransformElement.h"
#include "RigMultiParentElement.generated.h"

USTRUCT(BlueprintType)
struct FRigMultiParentElement : public FRigTransformElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigMultiParentElement();
};

