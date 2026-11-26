#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaSoundQualityHelper.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMetaSoundQualityHelper : public UObject {
    GENERATED_BODY()
public:
    UMetaSoundQualityHelper();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetQualityNames();
    
};

