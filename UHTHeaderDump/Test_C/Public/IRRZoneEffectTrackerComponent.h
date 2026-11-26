#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRActiveZoneEffectEntry.h"
#include "IRRZoneEffectTrackerComponent.generated.h"

class UIRRZoneEffectSourceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRZoneEffectTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRActiveZoneEffectEntry> ActiveZoneEffects;
    
public:
    UIRRZoneEffectTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveVolumeEffects(UIRRZoneEffectSourceComponent* Source);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVolumeEffects(UIRRZoneEffectSourceComponent* Source);
    
};

