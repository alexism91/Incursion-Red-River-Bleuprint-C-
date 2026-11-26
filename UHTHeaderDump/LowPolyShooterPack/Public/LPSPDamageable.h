#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
#include "LPSPDamageable.generated.h"

UCLASS(Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPDamageable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGroundChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> GroundCheckTypes;
    
public:
    ALPSPDamageable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGroundCheckTypes(const TArray<TEnumAsByte<EObjectTypeQuery>> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundChecks(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundCheckDelay(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RadialDamage(float Damage, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PointDamage(float Damage, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetGroundCheckTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGroundChecks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGroundCheckDelay() const;
    
};

