#pragma once
#include "CoreMinimal.h"
#include "RigSingleParentElement.h"
#include "RigReferenceElement.generated.h"

USTRUCT(BlueprintType)
struct FRigReferenceElement : public FRigSingleParentElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigReferenceElement();
};

