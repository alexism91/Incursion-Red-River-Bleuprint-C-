#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "LPSPAttachment.h"
#include "Templates/SubclassOf.h"
#include "LPSPMagazine.generated.h"

class ALPSPCasing;
class ALPSPProjectile;

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPMagazine : public ALPSPAttachment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALPSPCasing> CasingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CasingImpulseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CasingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALPSPProjectile> ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ProjectileVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ProjectilePelletRange;
    
public:
    ALPSPMagazine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool TryGetProjectileType(TSubclassOf<ALPSPProjectile>& Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool TryGetCasingType(TSubclassOf<ALPSPCasing>& Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAmmoCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetProjectileVelocityRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetProjectilePelletRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCasingOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetCasingImpulseRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    void Fill();
    
    UFUNCTION(BlueprintCallable)
    void AddAmmo(const int32 Amount);
    
};

