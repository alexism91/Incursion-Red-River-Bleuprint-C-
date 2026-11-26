#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRCharacterAIData.h"
#include "IRRAIDataComponent.generated.h"

class UEquippableComponent;
class UWeaponComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCharacterAIData AIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponComponent* Weapon;
    
public:
    UIRRAIDataComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnShotFired();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipableChanged(UEquippableComponent* EquippableComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionSpeedCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionDistanceCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFlareMultiplier() const;
    
};

