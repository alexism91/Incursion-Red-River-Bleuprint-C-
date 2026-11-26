#pragma once
#include "CoreMinimal.h"
#include "RigConnectionRule.h"
#include "RigChildOfPrimaryConnectionRule.generated.h"

USTRUCT(BlueprintType)
struct FRigChildOfPrimaryConnectionRule : public FRigConnectionRule {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigChildOfPrimaryConnectionRule();
};

