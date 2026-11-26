#pragma once
#include "CoreMinimal.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRDamageData.h"
#include "IRRAIHealthStateManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIHealthStateManager : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDamageData LastHostileDamageData;
    
public:
    UIRRAIHealthStateManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasDamagedByHostileWithin(float Window) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceHostileDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRDamageData GetLastHostileDamageData() const;
    
};

