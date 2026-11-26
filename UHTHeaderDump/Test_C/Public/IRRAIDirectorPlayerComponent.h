#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRDamageData.h"
#include "IRRAIDirectorPlayerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIDirectorPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIRRAIDirectorPlayerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevive(AActor* RevivedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(FIRRDamageData DamageData);
    
};

