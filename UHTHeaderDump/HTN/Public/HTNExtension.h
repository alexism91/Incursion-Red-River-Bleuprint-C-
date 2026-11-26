#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HTNExtension.generated.h"

class UHTNComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class HTN_API UHTNExtension : public UObject {
    GENERATED_BODY()
public:
    UHTNExtension();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNComponent* GetHTNComponent() const;
    
};

