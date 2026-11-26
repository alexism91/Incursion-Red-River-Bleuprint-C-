#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ActorsToBeDamaged.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UActorsToBeDamaged : public UInterface {
    GENERATED_BODY()
};

class IActorsToBeDamaged : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyObject();
    
};

