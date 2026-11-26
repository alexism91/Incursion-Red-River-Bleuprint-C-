#pragma once
#include "CoreMinimal.h"
#include "RigSingleParentElement.h"
#include "RigSocketElement.generated.h"

USTRUCT(BlueprintType)
struct FRigSocketElement : public FRigSingleParentElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigSocketElement();
};

