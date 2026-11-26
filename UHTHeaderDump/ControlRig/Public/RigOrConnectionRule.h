#pragma once
#include "CoreMinimal.h"
#include "RigConnectionRule.h"
#include "RigConnectionRuleStash.h"
#include "RigOrConnectionRule.generated.h"

USTRUCT(BlueprintType)
struct FRigOrConnectionRule : public FRigConnectionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigConnectionRuleStash> ChildRules;
    
    CONTROLRIG_API FRigOrConnectionRule();
};

