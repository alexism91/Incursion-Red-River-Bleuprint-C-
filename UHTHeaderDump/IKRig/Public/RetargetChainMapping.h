#pragma once
#include "CoreMinimal.h"
#include "RetargetChainPair.h"
#include "RetargetChainMapping.generated.h"

class UIKRigDefinition;

USTRUCT(BlueprintType)
struct FRetargetChainMapping {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetChainPair> ChainMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRigDefinition* SourceIKRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRigDefinition* TargetIKRig;
    
public:
    IKRIG_API FRetargetChainMapping();
};

