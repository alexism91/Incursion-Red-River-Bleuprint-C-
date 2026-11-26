#pragma once
#include "CoreMinimal.h"
#include "RigMultiParentElement.h"
#include "RigNullElement.generated.h"

USTRUCT(BlueprintType)
struct FRigNullElement : public FRigMultiParentElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigNullElement();
};

