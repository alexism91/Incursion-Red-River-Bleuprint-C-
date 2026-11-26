#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LastInputProviderInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULastInputProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ILastInputProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLastInputVector() const;
    
};

