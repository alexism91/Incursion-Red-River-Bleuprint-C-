#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetDefaultMatch.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetDefaultMatch : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigElementKey Default;
    
    CONTROLRIG_API FRigUnit_SetDefaultMatch();
};

