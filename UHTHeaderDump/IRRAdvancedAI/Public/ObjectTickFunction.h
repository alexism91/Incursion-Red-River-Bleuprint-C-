#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "ObjectTickFunction.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FObjectTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Target;
    
    FObjectTickFunction();
};

template<>
struct TStructOpsTypeTraits<FObjectTickFunction> : public TStructOpsTypeTraitsBase2<FObjectTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

