#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRCooldownManager -FallbackName=IRRCooldownManager
#include "EIRRAIShootStatus.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAISuppressionEventData.h"
#include "IRRDamageData.h"
#include "IRRAIBarkController.generated.h"

class AActor;
class UIRRAITarget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIBarkController : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCooldownManager VoiceCooldowns;
    
public:
    UIRRAIBarkController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RequestMedicSupport();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilledByMe(UIRRAITarget* Target, const FIRRDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    void OnSuppressionEvent(AActor* Owner, const FIRRAISuppressionEventData& SuppressionEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnShootStatusChanged(EIRRAIShootStatus ShootStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnReloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveDamage(FIRRDamageData DamageData, bool bTookHealthDamage, bool bArmorBreak);
    
    UFUNCTION(BlueprintCallable)
    void OnGrenadeThrowCommitted();
    
    UFUNCTION(BlueprintCallable)
    void HandlePeaceStateChanged(bool IsAtPeace);
    
};

