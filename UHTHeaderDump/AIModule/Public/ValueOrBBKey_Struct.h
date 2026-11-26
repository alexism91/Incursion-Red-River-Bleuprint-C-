#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Struct.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Struct : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Struct();
};

