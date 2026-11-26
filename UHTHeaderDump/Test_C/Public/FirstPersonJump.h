#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "FirstPersonCoreSubObject.h"
#include "JumpViewmodelAnimationSettings.h"
#include "SpringInterpVector.h"
#include "Templates/SubclassOf.h"
#include "FirstPersonJump.generated.h"

class ACharacter;
class UCameraShakeBase;
class UCurveVector;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonJump : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JumpGateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> JumpCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> LandCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TLineViewmodelLocationJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TLineViewmodelRotationJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TLineViewmodelLocationFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TLineViewmodelRotationFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TLineViewmodelLocationLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TLineViewmodelRotationLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpringInterpVector SpringSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpViewmodelAnimationSettings JumpViewmodelValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpViewmodelAnimationSettings JumpViewmodelTargetValues;
    
    UFirstPersonJump();

private:
    UFUNCTION(BlueprintCallable)
    void OnMovemendModeChanged(ACharacter* LocCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnLanded_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJumped();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnFalling_Client();
    
public:
    UFUNCTION(BlueprintCallable)
    void LandingAnimationUpdate(FVector VectorAlpha);
    
    UFUNCTION(BlueprintCallable)
    void JumpAnimationUpdate(FVector VectorAlpha);
    
    UFUNCTION(BlueprintCallable)
    FJumpViewmodelAnimationSettings GetJumpViewmodelAnimationSettings();
    
    UFUNCTION(BlueprintCallable)
    void FallAnimationUpdate(FVector VectorAlpha);
    
};

