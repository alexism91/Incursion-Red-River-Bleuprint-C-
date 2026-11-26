#pragma once
#include "CoreMinimal.h"
#include "EIRRAICoverState.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAICoverData.h"
#include "IRRAICoverDelegateDelegate.h"
#include "IRRDamageData.h"
#include "IRRAICoverComponent.generated.h"

class UIRRFactionCoverSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAICoverComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotInCoverCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAICoverState CoverState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAICoverDelegate OnCoverExposed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRFactionCoverSubsystem* FactionCover;
    
public:
    UIRRAICoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyHoldingCover(float WithinSeconds) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak);
    
    UFUNCTION(BlueprintCallable)
    void HandlePeaceStateChanged(const bool IsAtPeace);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAICoverData GetCoverInUse() const;
    
};

