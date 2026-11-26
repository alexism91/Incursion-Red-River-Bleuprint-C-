#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EIRRGrenadeThrowStyle.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIGrenadeThrowCommitSignatureDelegate.h"
#include "IRRAIGrenadeThrowSignatureDelegate.h"
#include "IRRGrenadeClearance.h"
#include "IRRAIGrenadeThrowComponent.generated.h"

class UGrenadeComponent;
class UObject;
class USimpleGameplayAbility_ThrowGrenade;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIGrenadeThrowComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIGrenadeThrowSignature OnThrowFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIGrenadeThrowCommitSignature OnThrowCommitted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultGrenadeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GadgetSlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USimpleGameplayAbility_ThrowGrenade> UnderarmThrowAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USimpleGameplayAbility_ThrowGrenade> OverarmThrowAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverarmMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenThrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiveGrenadeSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverarmLobPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcCheckCacheTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcCheckCacheDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RedrawHoldTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RedrawRetryInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflexCheckInterval;
    
public:
    UIRRAIGrenadeThrowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLastThrowReleased() const;
    
    UFUNCTION(BlueprintCallable)
    bool StartThrowAtActiveTarget(EIRRGrenadeThrowStyle Style, const FGameplayTagContainer& GrenadeTags);
    
    UFUNCTION(BlueprintCallable)
    bool StartThrow(const FVector& TargetLocation, EIRRGrenadeThrowStyle Style, const FGameplayTagContainer& GrenadeTags);
    
    UFUNCTION(BlueprintCallable)
    void RevokeGrenadesFree(const UObject* Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReflexThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrenadesFree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrenade(const FGameplayTagContainer& GrenadeTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClearArcAt(const FVector& TargetLocation, EIRRGrenadeThrowStyle Style, const FGameplayTagContainer& GrenadeTags) const;
    
    UFUNCTION(BlueprintCallable)
    void GrantGrenadesFree(const UObject* Key, const FIRRGrenadeClearance& Clearance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGrenadeComponent* GetHeldGrenade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveTargetThrowLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanThrowAt(const FVector& TargetLocation, const FGameplayTagContainer& GrenadeTags) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelThrow();
    
};

