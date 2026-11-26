#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.generated.h"

USTRUCT(BlueprintType)
struct FRigControlLimitEnabled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaximum;
    
    CONTROLRIG_API FRigControlLimitEnabled();
};

