#pragma once
#include "CoreMinimal.h"
#include "GeneratedBlueprintDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedBlueprintDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DelegatePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    ENGINE_API FGeneratedBlueprintDelegateBinding();
};

