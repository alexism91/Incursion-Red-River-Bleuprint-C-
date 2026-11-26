#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FirstPersonStamina.h"
#include "IRRArmStaminaEffect.h"
#include "FirstPersonStamina_Arm.generated.h"

class UCurveFloat;
class UCurveVector;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonStamina_Arm : public UFirstPersonStamina {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ArmStaminaCurve_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ArmStaminaCurve_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmSwaySpeedMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmSwayMultiplierMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmSwayTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRArmStaminaEffect> ArmStaminaEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmSwayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ArmSwayRotation;
    
    UFirstPersonStamina_Arm();

    UFUNCTION(BlueprintCallable)
    void RemoveArmStaminaEffect(FName EffectIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void GetArmSwayVectors(FVector& LocationVector, FRotator& RotationVector);
    
    UFUNCTION(BlueprintCallable)
    void AddArmStaminaEffect(FIRRArmStaminaEffect StaminaEffect);
    
};

