#pragma once
#include "CoreMinimal.h"
#include "RigConnectionRule.h"
#include "RigTagConnectionRule.generated.h"

USTRUCT(BlueprintType)
struct FRigTagConnectionRule : public FRigConnectionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    CONTROLRIG_API FRigTagConnectionRule();
};

