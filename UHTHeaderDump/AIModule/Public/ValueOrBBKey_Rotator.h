#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Rotator.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Rotator : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Rotator();
};

