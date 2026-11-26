#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECoverAimDirection.h"
#include "ECoverIdleStance.h"
#include "CharacterAnimInterface.generated.h"

class UAnimSequence;
class UEquippableComponent;
class UEquippableDataAsset;
class USightComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UCharacterAnimInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSight(USightComponent* SightComponent, bool bInstantTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePistolGrip(UAnimSequence* NewPistolGripIdle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGrip(UAnimSequence* NewGripIdle, FVector NewGripLocationOffset, FRotator NewGripRotationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateEquippableData(UEquippableDataAsset* EquippableData, UEquippableComponent* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCoverIdleStance(ECoverIdleStance NewCoverIdleStance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCoverAimDirection(ECoverAimDirection NewCoverAimDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Jump();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECoverIdleStance GetCoverIdleStance();
    
};

