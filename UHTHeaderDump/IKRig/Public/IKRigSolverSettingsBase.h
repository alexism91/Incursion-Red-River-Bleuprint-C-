#pragma once
#include "CoreMinimal.h"
#include "IKRigSettingsBase.h"
#include "IKRigSolverSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FIKRigSolverSettingsBase : public FIKRigSettingsBase {
    GENERATED_BODY()
public:
    IKRIG_API FIKRigSolverSettingsBase();
};

