#pragma once
#include "CoreMinimal.h"
#include "EConstraintInterpType.h"
#include "RigUnit_ParentConstraintMath_AdvancedSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ParentConstraintMath_AdvancedSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstraintInterpType InterpolationType;
    
    CONTROLRIG_API FRigUnit_ParentConstraintMath_AdvancedSettings();
};

