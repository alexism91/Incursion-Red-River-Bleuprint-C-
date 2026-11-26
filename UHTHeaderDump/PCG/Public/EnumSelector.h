#pragma once
#include "CoreMinimal.h"
#include "EnumSelector.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct FEnumSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    PCG_API FEnumSelector();
};

