#pragma once
#include "CoreMinimal.h"
#include "DynamicBlueprintBinding.h"
#include "GeneratedBlueprintDelegateBinding.h"
#include "GeneratedBlueprintBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeneratedBlueprintBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedBlueprintDelegateBinding> GeneratedBlueprintBindings;
    
    UGeneratedBlueprintBinding();

};

