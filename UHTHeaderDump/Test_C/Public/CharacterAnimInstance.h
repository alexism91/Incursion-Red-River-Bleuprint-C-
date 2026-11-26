#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AGRPRO -ObjectName=AGRCoreAnimInstance -FallbackName=AGRCoreAnimInstance
#include "AnimParameters.h"
#include "CharacterAnimInterface.h"
#include "CharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TEST_C_API UCharacterAnimInstance : public UAGRCoreAnimInstance, public ICharacterAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTurnInPlace;
    
    UCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetMultithreading(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutonomousTick(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayTransition(FAnimParameters AnimParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyMontageInSlotPlaying(FName SlotName);
    

    // Fix for true pure virtual functions not being implemented
};

