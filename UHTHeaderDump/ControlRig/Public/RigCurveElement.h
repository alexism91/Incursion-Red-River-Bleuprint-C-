#pragma once
#include "CoreMinimal.h"
#include "RigBaseElement.h"
#include "RigCurveElement.generated.h"

USTRUCT(BlueprintType)
struct FRigCurveElement : public FRigBaseElement {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigCurveElement();
};

