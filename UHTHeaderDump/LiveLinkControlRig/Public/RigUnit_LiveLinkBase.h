#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit -FallbackName=RigUnit
#include "RigUnit_LiveLinkBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_LiveLinkBase : public FRigUnit {
    GENERATED_BODY()
public:
    LIVELINKCONTROLRIG_API FRigUnit_LiveLinkBase();
};

