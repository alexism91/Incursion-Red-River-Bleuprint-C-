#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigConnectionRule.h"
#include "RigTypeConnectionRule.generated.h"

USTRUCT(BlueprintType)
struct FRigTypeConnectionRule : public FRigConnectionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType ElementType;
    
    CONTROLRIG_API FRigTypeConnectionRule();
};

