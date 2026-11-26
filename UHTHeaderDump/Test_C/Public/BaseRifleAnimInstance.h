#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CharacterAnimInterface.h"
#include "RifleAimServo.h"
#include "BaseRifleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TEST_C_API UBaseRifleAnimInstance : public UAnimInstance, public ICharacterAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDriveAimServo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRifleAimServo AimServo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServoMinHandIKWeight;
    
    UBaseRifleAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetAimServoTarget(const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimServoActive() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAimServoTarget();
    

    // Fix for true pure virtual functions not being implemented
};

