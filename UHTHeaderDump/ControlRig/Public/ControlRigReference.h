#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "ControlRigReference.generated.h"

USTRUCT(BlueprintType)
struct FControlRigReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    CONTROLRIG_API FControlRigReference();
};

