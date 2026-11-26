#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AdvancedSightTarget.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class UAdvancedSightTarget : public UInterface {
    GENERATED_BODY()
};

class IAdvancedSightTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetVisibilityPointComponents(TArray<USceneComponent*>& OutVisibilityPointComponents) const;
    
};

