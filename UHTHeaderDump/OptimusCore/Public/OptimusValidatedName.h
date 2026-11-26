#pragma once
#include "CoreMinimal.h"
#include "OptimusValidatedName.generated.h"

USTRUCT(BlueprintType)
struct FOptimusValidatedName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    OPTIMUSCORE_API FOptimusValidatedName();
};

