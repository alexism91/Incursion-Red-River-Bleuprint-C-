#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Vector.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Vector : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Vector();
};

