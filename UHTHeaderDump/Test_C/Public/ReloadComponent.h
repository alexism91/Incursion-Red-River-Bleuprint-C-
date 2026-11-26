#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AbilitiesInterface.h"
#include "ItemAnimInterface.h"
#include "QuarantineInterface.h"
#include "ReloadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UReloadComponent : public UActorComponent, public IItemAnimInterface, public IAbilitiesInterface, public IQuarantineInterface {
    GENERATED_BODY()
public:
    UReloadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadStart(bool Quick);
    

    // Fix for true pure virtual functions not being implemented
};

